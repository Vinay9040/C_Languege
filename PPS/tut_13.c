/*Write a c program to prepare pay slip using following data.
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300, Pf = 12.50%
of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf.*/

#include <stdio.h>

int main()
{
  float basic;
  printf("\n Enter Basic Salary :");
  scanf("%f", &basic);
  printf("\n===================================");
  printf("\n          SALARY SLIP");
  printf("\n===================================");
  printf("\n Basic : %.2f", basic);
  printf("\n DA    : %.2f", basic * 0.10);
  printf("\n HRA   : %.2f", basic * 0.075);
  printf("\n MA    : %.2f", 300.00);
  printf("\n===================================");
  printf("\n GROSS : %.2f", basic + (basic * 0.10) + (basic * 0.075) + 300.00);
  printf("\n===================================");
  printf("\n PF    : %.2f", basic * 0.125);
  printf("\n===================================");
  printf("\n NET   : %.2f", (basic + (basic * 0.10) + (basic * 0.075) + 300.00) - (basic * 0.125));
  printf("\n===================================");
  return 0;
}