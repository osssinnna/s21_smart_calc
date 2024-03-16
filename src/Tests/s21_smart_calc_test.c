#include "calc_test.h"

START_TEST(s21_test_0) {
  const char x[100] = "0";
  double y = 0;
  double orig = 10;

  const char str[100] = "5 + 5";
  calc(str, &y, x);
  ck_assert_double_eq(y, orig);
}
END_TEST

START_TEST(s21_test_1) {
  const char x[100] = "0";
  double y = 0;
  double orig = 162;

  const char str[100] = "   4 * 5 * 2 * 2 * 2 + 2";
  calc(str, &y, x);
  ck_assert_double_eq(y, orig);
}
END_TEST

START_TEST(s21_test_2) {
  const char x[100] = "0";
  double y = 0;
  double orig = 20;

  const char str[100] = "  150 / 10 + 5 * 2 / 2";
  calc(str, &y, x);
  ck_assert_double_eq(y, orig);
}
END_TEST

START_TEST(s21_test_3) {
  const char x[100] = "0";
  double y = 0;
  double orig = 9;

  const char str[100] = "  5 + 5 - 2 * 3 / 6";
  calc(str, &y, x);
  ck_assert_double_eq(y, orig);
}
END_TEST

START_TEST(s21_test_4) {
  const char x[100] = "0";
  double y = 0;
  double orig = 123.456;

  const char str[100] = " 123+0.456";
  calc(str, &y, x);
  ck_assert_double_eq(y, orig);
}
END_TEST

START_TEST(calc_test) {
  {
    const char str[100] = "4^acos(x/4)/tan(2*x)";
    double result = 0;
    const char x[100] = "1.2";
    calc(str, &result, x);
    double real_result = -6.31492;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-1 failed");
  }

  {
    const char str[100] = "x+x";
    double result = 0;
    const char x[100] = "-2";
    calc(str, &result, x);
    double real_result = -4;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-2 failed");
  }

  {
    const char str[100] = "cos(10mod2.2)";
    double result = 0;
    const char x[100] = "0";
    calc(str, &result, x);
    double real_result = 0.362358;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-3 failed");
  }

  {
    const char str[100] = "sqrt(ln(10))";
    double result = 0;
    const char x[100] = "0";
    calc(str, &result, x);
    double real_result = 1.517427;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-4 failed");
  }

  {
    const char str[100] = "atan(10)+sin(10)";
    double result = 0;
    const char x[100] = "0";
    calc(str, &result, x);
    double real_result = 1.644775;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-5 failed");
  }

  {
    const char str[100] = "asin(1)";
    double result = 0;
    const char x[100] = "0";
    calc(str, &result, x);
    double real_result = 1.570796;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-6 failed");
  }

  {
    const char str[100] = "10-20*(-10)";
    double result = 0;
    const char x[100] = "0";
    calc(str, &result, x);
    double real_result = -210;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-7 failed");
  }

  // {
  //   char src[100] = "-(o(i(a(10.01)*n(2))/10m2))^q(5)";
  //   int result = s21_validator(src);
  //   ck_assert_msg(result, "test-10 failed");
  // }
  // {
  //   char src[100] = "-(o(i(a(10.01)*n(2))/10m(2))^q(5)";
  //   int result = s21_validator(src);
  //   ck_assert_msg(!result, "test-10 failed");
  // }
  // {
  //   char src[100] = "mod+9(()))";
  //   int result = s21_validator(src);
  //   ck_assert_msg(!result, "test-10 failed");
  // }
  // {
  //   char src[100] = "md(+9(()))";
  //   int result = s21_validator(src);
  //   ck_assert_msg(!result, "test-10 failed");
  // }
  // {
  //   char src[100] = "-(o(i(a(10.01)*n(2))/10md+(2))^q(5)";
  //   int result = s21_validator(src);
  //   ck_assert_msg(!result, "test-10 failed");
  // }
  // {
  //   char src[100] = ")(s(x)";
  //   int result = s21_validator(src);
  //   ck_assert_msg(!result, "test-10 failed");
  // }
  // {
  //   char src[100] = ".+m)";
  //   int result = s21_validator(src);
  //   ck_assert_msg(!result, "test-10 failed");
  // }
}
END_TEST

// START_TEST(s21_test_4) {
//   double x = 0;
//   double orig = 69;
//   // int error = 0;

//   char str[255] = "2+(5 * 5 * 5 + 5 + 2 * 2) / (2)";

//   x = calc(str, x);
//   ck_assert_double_eq(x, orig);
// }
// END_TEST

// START_TEST(s21_test_5) {
//   double x = 0;
//   double orig = 11.958851;
//   // int error = 0;

//   char str[255] = "5 + (3 + sin(8/2 - 3.5)) *2";

//   x = calc(str, x);
//   ck_assert_double_eq_tol(x, orig, 1e-7);
// }
// END_TEST

// START_TEST(s21_test_6) {
//   double x = 0.0;
//   char *str = "24*4 -3 * 2";
//   double orig = 90;
//   double value = calc(str, x);

//   ck_assert_int_eq(value, orig);
// }
// END_TEST

// START_TEST(s21_test_7) {
//   double orig = 4;
//   char *str = "2 - (-2)";
//   double x = 0.0;
//   double value = calc(str, x);

//   ck_assert_int_eq(value, orig);
// }
// END_TEST

// START_TEST(s21_test_8) {
//   double orig = -0.41211848524;
//   char *str = "-sin(9)";
//   double x = 0.0;
//   double value = calc(str, x);

//   ck_assert_int_eq(value, orig);
// }
// END_TEST
// START_TEST(s21_test_9) {
//   double orig = 2.41211848524;
//   char *str = "sin(9)-(-2)";
//   double x = 0.0;
//   double value = calc(str, x);

//   ck_assert_int_eq(value, orig);
// }
// END_TEST
// START_TEST(s21_test_10) {
//   double orig = 0.91113026188;
//   char *str = "-cos(9)";
//   double x = 0.0;
//   double value = calc(str, x);

//   ck_assert_int_eq(value, orig);
// }
// END_TEST

START_TEST(plus_t) {
  const char str[100] = "(-2)+2";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_float_eq(y, 0);
}
END_TEST

START_TEST(minus_t) {
  const char str[100] = "(-2.2)-2.2";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_float_eq(y, -4.4);
}
END_TEST

START_TEST(mult_t) {
  const char str[100] = "(-2.2)*(+2.2)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_float_eq(y, -4.84);
}
END_TEST

START_TEST(division_t) {
  const char str[100] = "(-2.2)/2.2";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_float_eq(y, -1);
}
END_TEST

START_TEST(degr_t) {
  const char str[100] = "(2)^(-2)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_float_eq(y, 0.25);
}
END_TEST

START_TEST(sin_t) {
  const char str[100] = "sin(+2)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_float_eq(y, sin(2));
}
END_TEST

START_TEST(cos_t) {
  const char str[100] = "cos(2)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_double_eq_tol(y, cos(2), 1e-7);
}
END_TEST

START_TEST(tan_t) {
  const char str[100] = "tan(2)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_ldouble_eq(y, tan(2));
}
END_TEST

START_TEST(asin_t) {
  const char str[100] = "asin(1)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_ldouble_eq(y, asin(1));
}
END_TEST

START_TEST(acos_t) {
  const char str[100] = "acos(1)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_ldouble_eq(y, acos(1));
}
END_TEST

START_TEST(atan_t) {
  const char str[100] = "atan(1)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_ldouble_eq(y, atan(1));
}
END_TEST

START_TEST(ln_t) {
  const char str[100] = "ln(1)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_ldouble_eq(y, log(1));
}
END_TEST

START_TEST(log_t) {
  const char str[100] = "log(1)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_ldouble_eq(y, log10(1));
}
END_TEST

START_TEST(sqrt_t) {
  const char str[100] = "sqrt(1)";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_ldouble_eq(y, sqrt(1));
}
END_TEST

START_TEST(mod_t) {
  const char str[100] = "4mod8";
  const char x[100] = "0";
  double y = 0;
  calc(str, &y, x);
  ck_assert_ldouble_eq(y, 4);
}
END_TEST

// START_TEST(unM) {
//   double x = 0.0;
//   char mass[] = {"-12"};
//   unarMinus(mass);
//   ck_assert_int_eq(mass[0], '+');
// }

// START_TEST(unM2) {
//   double x = 0.0;

//   char mass[1024] = {"(-12)"};
//   unarMinus(mass);
//   ck_assert_int_eq(mass[1], '-');
// }

END_TEST
Suite *suite_smart_calc(void) {
  Suite *s = suite_create("suite_smart_calc");
  TCase *tc = tcase_create("suite_smart_calc");

  tcase_add_test(tc, s21_test_0);
  tcase_add_test(tc, s21_test_1);
  tcase_add_test(tc, s21_test_2);
  tcase_add_test(tc, s21_test_3);
  tcase_add_test(tc, s21_test_4);
  tcase_add_test(tc, calc_test);
  // tcase_add_test(tc, s21_test_4);
  // tcase_add_test(tc, s21_test_5);
  // tcase_add_test(tc, s21_test_6);
  // tcase_add_test(tc, s21_test_7);
  // tcase_add_test(tc, s21_test_8);
  // tcase_add_test(tc, s21_test_9);
  // tcase_add_test(tc, s21_test_10);

  tcase_add_test(tc, plus_t);
  tcase_add_test(tc, minus_t);
  tcase_add_test(tc, division_t);
  tcase_add_test(tc, mult_t);
  tcase_add_test(tc, degr_t);
  tcase_add_test(tc, sin_t);
  tcase_add_test(tc, cos_t);
  tcase_add_test(tc, tan_t);
  tcase_add_test(tc, asin_t);
  tcase_add_test(tc, acos_t);
  tcase_add_test(tc, atan_t);
  tcase_add_test(tc, ln_t);
  tcase_add_test(tc, log_t);
  tcase_add_test(tc, sqrt_t);
  tcase_add_test(tc, mod_t);
  // tcase_add_test(tc, unM);
  // tcase_add_test(tc, unM2);

  suite_add_tcase(s, tc);
  return s;
}