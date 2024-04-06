#include "s21_calculat.h"

double calculateTotal(double principal, double InterestRate, int numberOfPay) {
  double totalPayments = 0;
  double remainingPrincipal = principal;
  double monthlyInterestRate = InterestRate / 100 / 12;

  for (int month = 1; month <= numberOfPay; ++month) {
    double monthPayment =
        principal / numberOfPay + remainingPrincipal * monthlyInterestRate;
    totalPayments += monthPayment;
    remainingPrincipal -= principal / numberOfPay;
  }

  return totalPayments;
}
double calculateAnnuity(double principal, double InterestRate,
                        int numberOfPayments) {
  double monthlyInterestRate = InterestRate / 100 / 12;
  double discountFactor =
      (pow(1 + monthlyInterestRate, numberOfPayments) - 1) /
      (monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfPayments));
  double monthPayment = principal / discountFactor;
  return monthPayment;
}

double calculateDifferential(double principal, double InterestRate,
                             int numberOfPayments) {
  double monthlyInterestRate = InterestRate / 100 / 12;
  double monthPayment =
      principal / numberOfPayments + (principal * monthlyInterestRate);
  return monthPayment;
}
