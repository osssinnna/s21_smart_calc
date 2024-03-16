#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_MAX_SIZE 1000

typedef struct Stack_num {
  double data[STACK_MAX_SIZE];
  size_t size;
} Stack_num;

typedef struct Stack_sim {
  char data[STACK_MAX_SIZE];
  size_t size;
} Stack_sim;

#ifdef __cplusplus
extern "C" {
#endif

void Push_Stack_Simbol(Stack_sim *simbol, char t);
char Pop_Stack_Simbol(Stack_sim *simbol);
void Del_Stack_Simbol(Stack_sim *simbol);
void Push_Stack_Number(Stack_num *number, double t);
double Pop_Stack_Number(Stack_num *number);
void Del_Stack_Number(Stack_num *number);
int calc(const char text[], double *y, const char x[]);
void math(Stack_num *number, Stack_sim *simbol);
int cat_func(char text[], char *buff);
int check_error(char text[]);
int get_rank(char op);
void change_x(const char x[], char x2[]);
void plus_x(const char text2[], char text[], char x2[]);
int error_number(const char number[]);

#ifdef __cplusplus
}
#endif
