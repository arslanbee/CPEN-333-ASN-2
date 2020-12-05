#include <stdio.h>
#include "Senate.h"
#include <string>
#include<iostream>


using namespace std;



Senate::Senate(bool EvaluateMisconduct) {

	this->EvaluateMisconduct = EvaluateMisconduct;

}

bool Senate::SuspendStudent() {
	cout << "Senate CLASS FUNCTION CALL: SuspendStudent" << endl;

	return true;

}

bool Senate::NoSuspendStudent() {
	cout << "Senate CLASS FUNCTION CALL: NoSuspendStudent" << endl;

	cout << "Senate is feeling generous today..Student will not be suspended this time around.." << endl;

	return false;

}

bool Senate::EvaluateMisconductFunc() {
	int randnum = rand() % 100 + 1;

	if (randnum % 2 == 0 && EvaluateMisconduct==false) { //if rand num is even
		return this->NoSuspendStudent();
	}
	else {
		return this->SuspendStudent();
	}

}
