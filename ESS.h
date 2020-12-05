#pragma once

#ifndef __ESS__
#define __ESS__


#include <stdio.h>
#include <string>
#include<iostream>

class ESS {

private: 

	bool ProgressionApproval;
	bool StudentMeetsRequirements;
	double avg_Grades;

public:

	ESS(bool StudentMeetsRequirements, bool ProgressionApproval, double avg_Grades);

	bool SendRequisitesApproval();
	void SendMissingReqMessage();
	void ApproveOrDisapprove();
	bool SendProgressionApproval();
	bool SendRejectionMessage();





};


















#endif
