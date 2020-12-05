#pragma once
#ifndef __Senate__
#define __Senate__


#include <stdio.h>
#include <string>
#include<iostream>


class Senate {

private:

	bool EvaluateMisconduct;

public:

	Senate(bool EvaluateMisconduct);

	bool EvaluateMisconductFunc();
	bool SuspendStudent();
	bool NoSuspendStudent();







};

















#endif
