#ifndef S21_CALC_H
#define S21_CALC_H

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#include "s21_stack.h"

int SmartCalc(const char* str_input, long double* result);
void ValueStack(NValue** valueStack, char initialSymbol);
void clearstacks(NValue** NValue, NOperation** NOperation);
int processExpression(char* str, NValue** valueStack,
                      NOperation** operatorStack);
int finalCalculation(NValue** valueStack, NOperation** operatorStack,
                     long double* result);
int calculation(NValue** valueStack, NOperation** Operator_Node);
int validate_expression(const char* str);
void UnaryOperator(char** str, NValue** NValue, char* operator_found);
int processexpression(char** str, NValue** NValue, NOperation** NOperation);
void determinepriority(char arith_oper, int* priority, int* step);
void determineoperator(char** str, char* arith_oper);

int SmartCalc_Graph(const char* input_str, long double* result, long double x);

double calculateAnnuity(double principal, double annualInterestRate,
                        int numberOfPayments);
double calculateDifferential(double principal, double annualInterestRate,
                             int numberOfPayments);
double calculateTotal(double principal, double annualInterestRate,
                      int numberOfPayments);

#endif