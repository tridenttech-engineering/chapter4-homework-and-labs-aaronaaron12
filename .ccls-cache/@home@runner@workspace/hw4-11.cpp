// Introductory11.cpp - displays ending balance
//Created/revised by <Aaron Bloodworth> on <05FEB25>

#include <iostream>
using namespace std;

int main() {
  //define variables
  double startingBalance = 0.0;
  double endingBalance = 0.0;
  double deposit = 0.0;
  double withdrawal = 0.0;
  
  //enter starting balance
  cout << "Starting balance: ";
  cin >> startingBalance;
  //enter deposit
  cout << "Deposit: ";
  cin >> deposit;
  //enter withdrawal
  cout << "Withdrawal: ";
  cin >> withdrawal;
  //calculate ending balance
  endingBalance = startingBalance + deposit - withdrawal;
  //display ending balance
  cout << "Ending balance: " << endingBalance << endl;
  
 
    

  return 0;
} // end of main function