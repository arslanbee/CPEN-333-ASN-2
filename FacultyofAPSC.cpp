#include <stdio.h>
#include "FacultyofAPSC.h"
#include <string>
#include<iostream>


using namespace std;

bool FacultyofAPSC::GradRequirementsMetMessage(bool CleanBillofFinance, bool Approve) {
	cout << "FacultyofAPSC CLASS FUNCTION CALL: GradRequirementsMetMessage" << endl;

	if ((CleanBillofFinance == true)&& (Approve==true) ) {

		cout << "Congratulations! The Faculty of Applied Science has approved your graduation!" << endl;

		return true;
	}

	else {

		cout << "For some strange reason the Faculty cannot let you graduate..Try again in 2021 :) " << endl;
		return false;

	}


}