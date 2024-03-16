#include "header_C.h"

// int main(){
//     Stack_num number = {0};
//     Stack_sim simbol = {0};
//     char stroka[100] ="+((+3)^2+cos(1))";
//     //Push_Stack_Number(&number, 10);
//     // float t= Pop_Stack_Number(&number);
//     // printf("%f", t);
//     double y=0;
//    int p = calc(stroka, &number, &simbol, &y);
//    printf("otv %lf", y);
//    printf("\n error %d", p);
//     //printf("%f  ", 48);  // ot 48 do 57 number
//    // printf("tochka %d ", '.');
//     return 0;
// }

int calc(const char stroka[], double *y, const char x[]) {
  Stack_num number;
  memset(&number, 0, sizeof(number));
  Stack_sim simbol;
  memset(&simbol, 0, sizeof(simbol));
  simbol.size = 0;
  char text2[1000] = {'\0'};
  char text[1000] = {'\0'};
  int result = 0;
  char x2[1000] = {'\0'};
  int er = 0;
  // er = check_x(stroka);
  change_x(x, x2);
  plus_x(stroka, text2, x2);
  int bag_error = cat_func(text2, text);
  // printf("bag_error %d", bag_error);
  if (bag_error == 1 || strlen(text2) == 0 || er == 1) {
    result = 1;
  } else {
    char buff[1000] = {'\0'};
    int count = 0;
    // printf("\n");
    //  for(size_t i=0; i<strlen(text); i++){
    //     // printf("%c", text[i]);
    //  }
    // printf("\n");
    for (size_t i = 0; i < strlen(text); i++) {
      if ((text[i] > 47 && text[i] < 58) || text[i] == 46) {
        buff[count] = text[i];
        count++;
        if ((text[i + 1] < 48 || text[i + 1] > 57) && text[i + 1] != 46) {
          int err = error_number(buff);
          if (err != 1) {
            double c = atof(buff);
            Push_Stack_Number(&number, c);
            // printf("number %lf ", c);
            count = 0;
            for (int i = 0; i < 1000; i++) {
              buff[i] = '\0';
            }
          } else {
            result = 1;
            break;
          }
        }

      } else if (text[i] == '-' || text[i] == '+' || text[i] == '/' ||
                 text[i] == '*' || text[i] == '^' || text[i] == '(' ||
                 text[i] == ')' || text[i] == 'c' || text[i] == 's' ||
                 text[i] == 't' || text[i] == 'o' || text[i] == 'i' ||
                 text[i] == 'a' || text[i] == 'q' || text[i] == 'm' ||
                 text[i] == 'l' || text[i] == 'g' || text[i] == 'u' ||
                 text[i] == 'p') {
        if (text[i] == ')') {
          while (Pop_Stack_Simbol(&simbol) != '(') {
            math(&number, &simbol);
          }
          Del_Stack_Simbol(&simbol);
        }

        if (text[i] == '-' || text[i] == '+' || text[i] == '/' ||
            text[i] == '*' || text[i] == '^' || text[i] == 'o' ||
            text[i] == 'i' || text[i] == 'a' || text[i] == 'q' ||
            text[i] == 'm' || text[i] == 'l' || text[i] == 'g' ||
            text[i] == 'u' || text[i] == 'p') {
          while (simbol.size > 0 &&
                 get_rank(text[i]) <= get_rank(Pop_Stack_Simbol(&simbol))) {
            math(&number, &simbol);
          }
        }

        if (text[i] != ')') {
          Push_Stack_Simbol(&simbol, text[i]);
        }
      }
    }

    while (simbol.size > 0) {
      math(&number, &simbol);
    }

    // printf("\n Answer %lf", Pop_Stack_Number(number));
    *y = Pop_Stack_Number(&number);
  }
  return result;
}

void math(Stack_num *number, Stack_sim *simbol) {
  double a = Pop_Stack_Number(number);
  Del_Stack_Number(number);
  double b = 0;
  double c = 0;
  // printf("a %lf\n", a);
  // printf("znak %c\n", Pop_Stack_Simbol(simbol));
  switch (Pop_Stack_Simbol(simbol)) {
    case '+':
      b = Pop_Stack_Number(number);
      Del_Stack_Number(number);
      c = a + b;
      // printf("c %f", c);
      //  Push_Stack_Number(number, c);
      // printf("number->size %d\n", number->size);
      break;
    case '-':
      b = Pop_Stack_Number(number);
      Del_Stack_Number(number);
      c = b - a;
      //  Push_Stack_Number(number, c);
      break;
    case '*':
      b = Pop_Stack_Number(number);
      Del_Stack_Number(number);
      c = a * b;
      // Push_Stack_Number(number, c);
      break;
    case '/':
      b = Pop_Stack_Number(number);
      Del_Stack_Number(number);
      c = b / a;
      // Push_Stack_Number(number, c);
      break;
    case '^':
      b = Pop_Stack_Number(number);
      Del_Stack_Number(number);
      c = pow(b, a);
      // Push_Stack_Number(number, c);
      break;
    case 'm':
      b = Pop_Stack_Number(number);
      Del_Stack_Number(number);
      c = fmod(b, a);
      // Push_Stack_Number(number, c);
      break;
    case 's':
      c = sin(a);
      break;
    case 'c':
      c = cos(a);
      break;
    case 't':
      c = tan(a);
      break;
    case 'o':
      c = acos(a);
      break;
    case 'i':
      c = asin(a);
      break;
    case 'a':
      c = atan(a);
      break;
    case 'q':
      c = sqrt(a);
      break;
    case 'l':
      c = log(a);
      break;
    case 'g':
      c = log10(a);
      break;
    case 'u':
      c = -a;
      // printf("c %f", c);
      break;
    case 'p':
      c = a;
      break;
    default:
      break;
  }
  Push_Stack_Number(number, c);
  Del_Stack_Simbol(simbol);
  //  printf("otvet %lf ", Pop_Stack_Number(number));
  //  printf("size %d", number->size);
}

void Push_Stack_Simbol(Stack_sim *simbol, char t) {
  simbol->data[simbol->size] = t;
  simbol->size++;
}

char Pop_Stack_Simbol(Stack_sim *simbol) {
  char t = 0;
  if (simbol->size != 0) {
    t = simbol->data[simbol->size - 1];
  }
  return t;
}

void Del_Stack_Simbol(Stack_sim *simbol) {
  if (simbol->size != 0) {
    simbol->data[simbol->size - 1] = '\0';
    simbol->size--;
  }
}

void Push_Stack_Number(Stack_num *number, double t) {
  number->data[number->size] = t;
  number->size++;
}

double Pop_Stack_Number(Stack_num *number) {
  double t = 0;
  if (number->size != 0) {
    t = number->data[number->size - 1];
  }
  return t;
}

void Del_Stack_Number(Stack_num *number) {
  if (number->size != 0) {
    number->data[number->size - 1] = '\0';
    number->size--;
    // printf("number->size %d\n", number->size);
  }
}

int get_rank(char op) {
  int ret = 0;
  switch (op) {
    case '+':
    case '-':
      ret = 1;
      break;
    case '*':
    case '/':
    case 'm':
      ret = 2;
      break;
    case '^':
      ret = 3;
      break;
    case 'c':
    case 's':
    case 't':
    case 'o':
    case 'i':
    case 'a':
    case 'q':
    case 'l':
    case 'g':
      ret = 4;
      break;
    case 'u':
    case 'p':
      ret = 5;
      break;
  }
  return ret;
}

int check_error(char text[]) {
  int bag = 0;
  for (size_t i = 0; i < strlen(text); i++) {
    if (text[0] == '.' || text[0] == '/' || text[0] == '*' || text[0] == '^') {
      bag = 1;
    }
    if (text[i] == '(' && text[i + 1] == ')') {
      bag = 1;
    }
    if (text[i] == ')' && text[i + 1] == '(') {
      bag = 1;
    }
    if ((text[i] == 'c' || text[i] == 's' || text[i] == 't' || text[i] == 'o' ||
         text[i] == 'i' || text[i] == 'a' || text[i] == 'q' || text[i] == 'l' ||
         text[i] == 'g') &&
        text[i + 1] != '(') {
      bag = 1;
    }
    if ((text[i] == '+' || text[i] == '-' || text[i] == '/' || text[i] == '*' ||
         text[i] == '^') &&
        (text[i + 1] == '+' || text[i + 1] == '-' || text[i + 1] == '/' ||
         text[i + 1] == '*' || text[i + 1] == '^')) {
      bag = 1;
    }
  }
  return bag;
}

int cat_func(char text[], char *buff) {
  int count = 0;
  int bag = 0;
  int bag_error = 0;
  for (size_t i = 0; i < strlen(text); i++) {
    if (text[i] == '-' && i == 0) {
      buff[count] = 'u';
      count++;
      bag = 1;
      continue;
    }
    if (text[i] == '+' && i == 0) {
      buff[count] = 'p';
      count++;
      bag = 1;
      continue;
    }
    if (text[i] == 's' && text[i + 1] == 'i' && text[i + 2] == 'n') {
      buff[count] = 's';
      count++;
      bag = 1;
      i = i + 2;
    }
    if (text[i] == 'c' && text[i + 1] == 'o' && text[i + 2] == 's') {
      buff[count] = 'c';
      count++;
      bag = 1;
      i = i + 2;
    }
    if (text[i] == 't' && text[i + 1] == 'a' && text[i + 2] == 'n') {
      buff[count] = 't';
      count++;
      bag = 1;
      i = i + 2;
    }
    if (text[i] == 'a' && text[i + 1] == 'c' && text[i + 2] == 'o' &&
        text[i + 3] == 's') {
      buff[count] = 'o';
      count++;
      bag = 1;
      i = i + 3;
    }
    if (text[i] == 'a' && text[i + 1] == 's' && text[i + 2] == 'i' &&
        text[i + 3] == 'n') {
      buff[count] = 'i';
      count++;
      bag = 1;
      i = i + 3;
    }
    if (text[i] == 'a' && text[i + 1] == 't' && text[i + 2] == 'a' &&
        text[i + 3] == 'n') {
      buff[count] = 'a';
      count++;
      bag = 1;
      i = i + 3;
    }
    if (text[i] == 's' && text[i + 1] == 'q' && text[i + 2] == 'r' &&
        text[i + 3] == 't') {
      buff[count] = 'q';
      count++;
      bag = 1;
      i = i + 3;
    }
    if (text[i] == 'm' && text[i + 1] == 'o' && text[i + 2] == 'd') {
      buff[count] = 'm';
      count++;
      bag = 1;
      i = i + 2;
    }
    if (text[i] == 'l' && text[i + 1] == 'n') {
      buff[count] = 'l';
      count++;
      bag = 1;
      i = i + 1;
    }
    if (text[i] == 'l' && text[i + 1] == 'o' && text[i + 2] == 'g') {
      buff[count] = 'g';
      count++;
      bag = 1;
      i = i + 2;
    }
    if (text[i] == '(' && text[i + 1] == '-') {
      buff[count] = '(';
      count++;
      buff[count] = 'u';
      count++;
      bag = 1;
      i = i + 2;
    }
    if (text[i] == '(' && text[i + 1] == '+') {
      buff[count] = '(';
      count++;
      buff[count] = 'p';
      count++;
      bag = 1;
      i = i + 2;
    }
    if ((text[i] > 47 && text[i] < 58) || text[i] == 46 || text[i] == '(' ||
        text[i] == ')' || text[i] == '-' || text[i] == '+' || text[i] == '/' ||
        text[i] == '*' || text[i] == '^') {
      buff[count] = text[i];
      count++;
      bag = 1;
    }
    // if(text[i]=='x'){buff[count]= text[i]; count++; bag=1;}
    if (text[i] == ' ') {
      continue;
      bag = 1;
    }
    if (bag == 0) {
      bag_error = 1;
    }
    bag = 0;
  }
  if (check_error(buff) == 1) {
    bag_error = 1;
  }
  return bag_error;
}

void change_x(const char x[], char x2[]) {
  if (x[0] == '-' || x[0] == '+') {
    int count = 0;
    x2[count] = '(';
    count++;
    for (size_t i = 0; i < strlen(x); i++) {
      x2[count] = x[i];
      count++;
    }
    x2[count] = ')';
  } else {
    for (size_t i = 0; i < strlen(x); i++) {
      x2[i] = x[i];
    }
  }
}

void plus_x(const char text2[], char text[], char x2[]) {
  int counter = 0;
  for (size_t i = 0; i < strlen(text2); i++) {
    if (text2[i] == 'x') {
      for (size_t i = 0; i < strlen(x2); i++) {
        text[counter] = x2[i];
        counter++;
      }
    } else {
      text[counter] = text2[i];
      counter++;
    }
  }
}

int error_number(const char number[]) {
  int error = 0;
  int flag = 0;
  for (size_t i = 0; i < strlen(number); i++) {
    if ((number[0] == '+' || number[0] == '-') && i == 0) {
      continue;
    }
    if (number[0] == '.' && i == 0) {
      error = 1;
      continue;
    }
    if ((number[i] < 48 || number[i] > 57) && number[i] != 46) {
      error = 1;
    }
    if (number[strlen(number) - 1] == '.' && i == strlen(number) - 1) {
      error = 1;
      continue;
    }
    if (number[i] == '.' && flag == 0) {
      flag = 1;
      continue;
    }
    if (number[i] == '.' && flag == 1) {
      error = 1;
    }
  }
  return error;
}
