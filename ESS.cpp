#include <stdio.h>
#include "ESS.h"
#include <string>
#include<iostream>


using namespace std;

ESS::ESS(bool StudentMeetsRequirements, bool ProgressionApproval, double avg_Grades) {

	cout << "ESS CLASS FUNCTION CONSTRUCTOR BEING CALLED..." << endl;
	this->ProgressionApproval = ProgressionApproval;
	this->StudentMeetsRequirements = StudentMeetsRequirements;
	this->avg_Grades = avg_Grades;
}

bool ESS::SendRequisitesApproval() {
	cout << "ESS CLASS FUNCTION CALL: SendRequisitesApproval" << endl;

	if (StudentMeetsRequirements) {
		return true;
	}
	else {

		this->SendMissingReqMessage();

		return false;
	}
}

void ESS::SendMissingReqMessage() {
	cout << "ESS CLASS FUNCTION CALL: SendMissingReqMessage" << endl;
	cout << "You are missing the necessary Requirements to Graduate.." << endl;

}
void ESS::ApproveOrDisapprove() {

	cout << "ESS CLASS FUNCTION CALL: ApproveOrDisapprove" << endl;

	if (avg_Grades < 75) {
		this->SendRejectionMessage();
	}

	else {
		this->SendProgressionApproval();
	}


}
bool ESS::SendProgressionApproval() {
	cout << "ESS CLASS FUNCTION CALL: SendProgressionApproval" << endl;

	cout << "You've been approved to move on to year 2! You have been placed in one of your Top 5 selections." << endl;

	return true;

}

bool ESS::SendRejectionMessage() {
	cout << "ESS CLASS FUNCTION CALL: SendRejectionMessage" << endl;

	cout << "You have been rejected from your Top 5 choices..You have been placed in Mining" << endl;

	return false;
}


