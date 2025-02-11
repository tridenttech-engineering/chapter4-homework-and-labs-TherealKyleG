// Introductory11.cpp - displays ending balance
// Created/revised by Kyle Gallagher on 02/10/2025

#include <iostream>
using namespace std;

int main() {
  double initial = 0.0;
  double deposit = 0.0;
  double balance = 0.0;
  double withdraw = 0.0;
  cout<<"Enter the beginning balance:";
  cin >> initial;
  cout<<"Enter the deposit:";
  cin >> deposit;
  cout<<"Enter withdrawal amount:";
  cin >> withdraw;
  balance =  deposit + initial - withdraw;
  cout << "Balance: $" << balance << endl;
  return 0;
} // end of main function