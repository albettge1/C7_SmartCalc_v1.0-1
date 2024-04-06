#include "s21_stack.h"

void pushvalue(NValue **topValue, long double value) {
  NValue *newNValue = (NValue *)malloc(sizeof(NValue));
  if (newNValue) {
    newNValue->value = value;
    newNValue->next = NULL;

    if (*topValue == NULL) {
      *topValue = newNValue;
    } else {
      newNValue->next = *topValue;
      *topValue = newNValue;
    }
  }
}

void pushoperator(NOperation **topOperator, char symbol, int precedence) {
  NOperation *newNOperation = (NOperation *)malloc(sizeof(NOperation));
  newNOperation->symbol = symbol;
  newNOperation->precedence = precedence;
  newNOperation->next = *topOperator;
  *topOperator = newNOperation;
}

int popvalue(NValue **topValue, long double *value) {
  int error = 0;
  if (topValue) {
    if (*topValue) {
      NValue *tmp = *topValue;
      *topValue = (*topValue)->next;
      *value = tmp->value;
      free(tmp);
    } else
      error = -1;
  } else
    error = -1;
  return error;
}

int popoperator(NOperation **topValue) {
  if (*topValue == NULL) {
    return '\0';
  }
  NOperation *temp = *topValue;
  *topValue = (*topValue)->next;
  char poppedSymbol = temp->symbol;
  free(temp);
  return poppedSymbol;
}

int peekoperator(NOperation **topValue) {
  if (*topValue == NULL) {
    return -1;
  }
  int precedence = (*topValue)->precedence;
  return precedence;
}