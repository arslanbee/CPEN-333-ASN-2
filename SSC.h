#pragma once
#ifndef __SSC__
#define __SSC__


#include <stdio.h>
#include <string>
#include<iostream>

class SSC {

private:

	

	double avg_Grades;
	bool GradApp;
	bool AppFee;
	bool PassYearlyReqs;


public:

	SSC(int GradApp,bool AppFee, bool PassYearlyReqs, double avg_Grades);

	void PlacementFaculty(bool ProgressionApproval);
	int* SendStuGradInfo();
	int CheckYearlyReqs();
	int SendStuGradeInfo();
	void LockStudentInfo();
	bool SendWaitlistMessage();
	bool SendAcceptMessage();
	bool PrintRejectionMsg();

};




#endif

