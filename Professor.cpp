#include <stdio.h>
#include "Professor.h"
#include <string>
#include<iostream>


using namespace std;



bool Professor::ToSenate() {
	cout << "Professor CLASS FUNCTION CALL: ToSenate" << endl;
	int randnum = rand() % 100 + 1;

	if (randnum%2==0) {
		return true;

	}
	else {

		this->SendWarningMessage();
		return false;
	}

}
void Professor::SendWarningMessage() {
	cout << "Professor CLASS FUNCTION CALL: SendWarningMessage" << endl;

	cout << "You've been a bad boy.. but we'll let you off this time.. Consider this a warning." << endl;


}