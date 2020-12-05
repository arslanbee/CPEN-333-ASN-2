#include <stdio.h>
#include "Admissions.h"
#include <string>
#include<iostream>


using namespace std;

Admissions::Admissions(string PersonalProfile, string Application, int Grades) {
	cout << "Admissions CLASS FUNCTION CONSTRUCTOR BEING CALLED..." << endl;
	this->PersonalProfile = PersonalProfile;
	this->Application = Application;
	this->Grades = Grades;

}
bool Admissions::SendRejectionMessage() {
	cout << "Admissions CLASS FUNCTION CALL: SendRejectionMessage" << endl;
	cout << "Sorry, but you have been rejected.." << endl; 

	return false;

}

int Admissions::IsAccepted() {
	cout << "Admissions CLASS FUNCTION CALL: IsAccepted" << endl;
	cout << "Congratulations! You have been accepted!" << endl;

	return 1;
}

int Admissions::IsWaitlisted() {
	cout << "Admissions CLASS FUNCTION CALL: IsWaitlisted" << endl;

	cout << "you are currently waitlisted..Please wait to hear back the status of your application." << endl;

	return 2;

}

int Admissions::EvaluateStudent() {
	cout << "Admissions CLASS FUNCTION CALL: EvaluateStudent" << endl;
	if ((this->Grades > 90) && (this->PersonalProfile != "") && (this->Application != "")) {
		return this->IsAccepted();
	}

	else if ((this->Grades > 80) && (this->PersonalProfile != "") && (this->Application != "")) {
		return this->IsWaitlisted();
	}
	else {
		return this->SendRejectionMessage();
	}
	

}
