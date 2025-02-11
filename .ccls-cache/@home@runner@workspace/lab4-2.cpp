//Lab4-2.cpp - displays a salesperson's commission
//Philip Regalbuto : Kyle Gallagher 02/10/2025
#include <iostream>
using namespace std;

int main()
{
 const double COMM_RATE =0.1;
 double sales =0.0;
 double commission = 0.0;
  cout<<"Sales Amount: ";
  cin >> sales;
  commission = sales * COMM_RATE;
  cout<< "Commission: $";
  cout<< commission << endl;

  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/
