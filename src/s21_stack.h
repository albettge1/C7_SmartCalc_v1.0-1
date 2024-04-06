#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* ---------------- Declaration of global functions ---------------- */
typedef struct NValue {
  long double value;
  struct NValue* next;
} NValue;

typedef struct NOperation {
  char symbol;
  int precedence;
  struct NOperation* next;
} NOperation;

void pushvalue(NValue** topValue, long double value);
int popvalue(NValue** topValue, long double* value);
void pushoperator(NOperation** topOperator, char symbol, int precedence);
int popoperator(NOperation** topOperator);
int peekoperator(NOperation** topOperator);