#include <stdio.h>
#include <iostream>
#include <string>
#include "SSCWebsite.h"
#include "academicRecords.h"

using namespace std;

#ifndef __president__
#define __president__

class president {
private: 
	academicRecords* studentAcademicRecords;

public:
	bool determineCheating() {
		if (studentAcademicRecords->getStudentCheatingRecords().numIncidences > 0)
		{
			return true;
		}
		else
		{

		}
	}
};
#endif // !__president__
