#include <stdio.h>
#include "UBCFinancialServices.h"
#include <string>
#include<iostream>


using namespace std;



bool UBCFinancialServices::CheckFinancialStanding(bool CleanBillofFinance) {
	cout << "UBCFinancialServices CLASS FUNCTION CALL: CheckFinancialStanding" << endl;

	if (CleanBillofFinance == true) {

		cout << "You have good financial standing with the university.." << endl;
		cout << "Sending Clean Bill of Finance to Faculty of Applied Science.." << endl;

		return true;
	}

	else {

		cout << "You have outstanding financial payments that must be paid before you can graduate..." << endl;
		return false;

	}


}






