#pragma once

#ifndef __Admissions__
#define __Admissions__


#include <stdio.h>
#include <string>
#include<iostream>

using namespace std;

class Admissions {
private: 

	bool SendApp;
	int Grades;
	string PersonalProfile;
	string Application;

public:
	Admissions(string PersonalProfile, string Application, int Grades);
	bool SendRejectionMessage();
	int IsAccepted();
	int IsWaitlisted();
	int EvaluateStudent();



};


















#endif
