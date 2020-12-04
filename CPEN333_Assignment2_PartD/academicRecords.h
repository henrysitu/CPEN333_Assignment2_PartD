#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

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
	vector<string> courses;
	vector<float> grades;
	int credits;
	transcript transcripts;
	string program;
public:
	float getGPA() {
		return gpa;
	}
	void addCourseAndGrade(string course, float grade, int credit) {
		courses.push_back(course);
		grades.push_back(grade);
		credits = credits + credit;
	}
	int getCredits() {
		return credits;
	}
	void updateProgram(string newProgram) {
		program = newProgram;
	}
};
#endif // !__academicRecords__
