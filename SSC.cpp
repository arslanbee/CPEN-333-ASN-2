#include <stdio.h>
#include "SSC.h"
#include <string>
#include<iostream>


using namespace std;

SSC::SSC(int GradApp, bool AppFee, bool PassYearlyReqs, double avg_Grades) {
	cout << "SSC CLASS FUNCTION CONSTRUCTOR BEING CALLED..." << endl;

	this->PassYearlyReqs = PassYearlyReqs;
	this->GradApp = GradApp;
	this->AppFee = AppFee;
	this->avg_Grades = avg_Grades;
}

void SSC::PlacementFaculty(bool ProgressionApproval) {
	cout << "SSC CLASS FUNCTION CALL: PlacementFaculty" << endl;
	string success;

	if (ProgressionApproval == true) {
		success = "approved";
	}
	else {
		success = "rejected";
	}

	cout << "The status of your Placement is: " << success << endl;

}

int* SSC::SendStuGradInfo() {

	cout << "SSC CLASS FUNCTION CALL: SendStuGradInfo" << endl;

	int array[2];

	array[0] = this->GradApp;
	array[1] = this->AppFee;

	return array;
}

int SSC::CheckYearlyReqs() {
	cout << "SSC CLASS FUNCTION CALL: CheckYearlyReqs" << endl;
	
	if (PassYearlyReqs == true) {
		cout << "The Student has passed their Yearly Requirements to Graduate... " << endl;
		return SendStuGradeInfo();
	}

	else {
		 this->PrintRejectionMsg();
		 return 0;
	}

}


int SSC::SendStuGradeInfo() {
	cout << "SSC CLASS FUNCTION CALL: SendStuGradeInfo" << endl;

	cout << "Sending Student Grades to ESS for Average Grade Approval" << endl;

	return this->avg_Grades;

}

void SSC::LockStudentInfo() {
	cout << "SSC CLASS FUNCTION CALL: LockStudentInfo" << endl;

	cout << "Student information has been locked due to Senate deeming Student guilty of CHEATING..." << endl;

}

bool SSC::SendWaitlistMessage() {
	cout << "SSC CLASS FUNCTION CALL: SendWaitlistMessage" << endl;

	cout << "You have been waitlisted..Please visit SSC regularly to see if you're application has been updated.." << endl;
	return false;

}

bool SSC::SendAcceptMessage() {
	cout << "SSC CLASS FUNCTION CALL: SendAcceptMessage" << endl;

	cout << "Congratulations! SSC now displays that you have been ACCEPTED to UBC" << endl;
	return true;

}

bool SSC::PrintRejectionMsg() {
	cout << "SSC CLASS FUNCTION CALL: PrintRejectionMsg" << endl;

	cout << "You have been rejected." << endl;
	return false;
}