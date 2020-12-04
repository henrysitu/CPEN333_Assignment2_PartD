#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#ifndef __academicRecords__
#define __academicRecords__

struct transcript {
	string courses;
	float grades;
	int credits;
};

class academicRecords {
private:
	float gpa;
	string courses;
	float grades;
	int credits;
	transcript transcripts;
public:
	float getGPA() {

	}
	void addCoursesAndGrades(string courses[], float grades[], int credits) {

	}
	void getCredits() {

	}
};
#endif // !__academicRecords__
