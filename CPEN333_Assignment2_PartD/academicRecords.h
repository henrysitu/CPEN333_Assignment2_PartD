#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef __academicRecords__
#define __academicRecords__

struct transcript {
	vector<string> courses;
	vector<float> grades;
	int credits;
	int numCourses;
};

struct cheatingRecords {
	int numIncidences;
	string evidence;
	bool suspensionStatus;
	int numSuspensionTerms;
};

class academicRecords {
private:
	float gpa;
	int credits;
	transcript transcripts;
	string program;
	cheatingRecords studentCheatingRecords;
public:
	float getGPA() {
		gpa = 0;
		for (int i = 0; i < transcripts.numCourses; i++)
		{
			gpa += transcripts.grades[i];
		}
		gpa = gpa / transcripts.numCourses;
		return gpa;
	}
	void addCourseAndGrade(string course, float grade, int credit) {
		transcripts.courses.push_back(course);
		transcripts.grades.push_back(grade);
		transcripts.credits += credit;
		transcripts.numCourses += 1;
	}
	int getCredits() {
		return credits;
	}
	void updateProgram(string newProgram) {
		program = newProgram;
	}
	cheatingRecords getStudentCheatingRecords(){
		return studentCheatingRecords;
	}
	void updateCheatingRecords(int numSuspensionTerms) {
		studentCheatingRecords.suspensionStatus = true;
		studentCheatingRecords.numSuspensionTerms += numSuspensionTerms;
		studentCheatingRecords.numIncidences += 1;
	}
};
#endif // !__academicRecords__
