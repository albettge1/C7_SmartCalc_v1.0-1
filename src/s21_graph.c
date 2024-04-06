#include "s21_calculat.h"

int SmartCalc_Graph(const char* input_str, long double* result, long double x) {
  if (input_str == NULL) return -1;

  NValue* value = NULL;
  NOperation* operator= NULL;

  char* str = (char*)input_str;
  int error = validate_expression(str);

  if (*str == '-' || *str == '+') {
    ValueStack(&value, *str);
  } else {
    ValueStack(&value, 1);
  }
  while (*str != '\0' && !error) {
    if (isdigit(*str)) {
      long double num = strtold(str, &str);
      pushvalue(&value, num);
    } else {
      if (*str == '(') {
        pushoperator(&operator, * str, 5);
      } else if (*str == ')') {
        while (peekoperator(&operator) != 5 && !error) {
          error = calculation(&value, &operator);
        }
        popoperator(&operator);
      } else if (*str != ' ') {
        if (*str != 'x') {
          error = processexpression(&str, &value, &operator);
        } else {
          pushvalue(&value, x);
        }
      }
      str++;
    }
  }
  if (!error) {
    error = finalCalculation(&value, &operator, result);
  }
  if (value) {
    if (value->next != NULL) {
      error = -1;
      *result = 0;
    }
  }
  clearstacks(&value, &operator);
  return error;
}