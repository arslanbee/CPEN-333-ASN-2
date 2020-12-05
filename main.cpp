#include <stdio.h>
#include <string>
#include<iostream>

// HELLO THIS IS A RANDOM CHANGE I MADE
using namespace std;

#include "Admissions.h"
#include "ESS.h"
#include "FacultyofAPSC.h"
#include "Professor.h"
#include "Senate.h"
#include "SSC.h"
#include "UBCFinancialServices.h"

int main (void){


	while (1) {

		cout << "Welcome to Arslan & Victor's UBC System Simulation" << endl;

		cout << "What would you like to do?" << endl;

		cout << "Type 1 to run simulation use case of: Selection and Admittance into Second Year Program.." << endl;

		cout << "Type 2 to run simulation use case of: Academic Misconduct.." << endl;

		cout << "Type 3 to run simulation use case of: Enrolling Student into First Year University at UBC.." << endl;

		cout << "Type 4 to run simulation use case of: Applying to Graduation.." << endl;

		cout << "Type 5 to run Test Cases for Use Case 2" << endl;

		int response;
		cin >> response;

		if (response == 1) {
			//Create new student/SSC Account.

			SSC SSC1(1, true, true, 92); //SSC(int GradApp,bool AppFee, bool PassYearlyReqs, double avg_Grades);

			int SendGrades;
			SendGrades = SSC1.CheckYearlyReqs();

			if (SendGrades > 0) {
				//SendGrades = SSC1.SendStuGradeInfo();

				ESS ESS1(true,true,SendGrades); //ESS(bool StudentMeetsRequirements, bool ProgressionApproval, double avg_Grades)
				ESS1.ApproveOrDisapprove();
			}
		}

		else if (response == 2) {

			Professor Professor1;

			cout << "Student has been accused of Academic Misconduct.." << endl;
			cout << "The Professor will now evaluate if student needs to be sent to Senate or not.." << endl;

			bool temp;

			temp = Professor1.ToSenate();

			if (temp == true) {

				cout << "The student has been deemed to have cheated and they will now be forwarded to the Senate for further evaluation.." << endl;

				Senate Senate1(true); //Senate(bool EvaluateMisconduct)
				
				bool senatecap;
				
				senatecap = Senate1.EvaluateMisconductFunc();

				if (senatecap == true) {

					cout << "Senate has completed evaluation of cheating student and has deemed the student GUILTY.." << endl;
					cout << "Senate will now move forward to suspending Student SSC account .. Explusion is immediate." << endl;

					SSC SSC2(0,false,false,0);  //SSC(int GradApp,bool AppFee, bool PassYearlyReqs, double avg_Grades);
					SSC2.LockStudentInfo();

					cout << "You are no longer a student at UBC.. GOODBYe.." << endl << endl;
				}
			}

			;
		}


		else if (response == 3) {

			Admissions Admissions1("AcceptMePlease","UBC",95); //Admissions(string PersonalProfile, string Application, int Grades) 
			cout << "Student with average grade of 95 would like to apply to UBC..Their application will now be forwarded to UBC.." << endl << endl;

			int admintemp;

			admintemp = Admissions1.EvaluateStudent();

			SSC SSC3(0, false, false, 0);

			if (admintemp == 1) {

				cout << "Congratulations! We have approved your application and you have been accepted into UBC First Year! Your Details will now be forwarded to SSC." << endl << endl;

				SSC3.SendAcceptMessage();
			}

			if (admintemp == 2) {

				cout << "You have been waitlisted..We need a little bit more time to come to a final decision. Your Details will now be forwarded to SSC." << endl << endl;

				SSC3.SendWaitlistMessage();
			}
			
		}


		else if (response == 4) {

			;
		}

		else {
			;

		}












	}







	return 0;
}