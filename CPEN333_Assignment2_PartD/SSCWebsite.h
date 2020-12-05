#include <stdio.h>
#include <iostream>
#include <string>
#include "academicRecords.h"

using namespace std;

#ifndef __SSCWebsite__
#define __SSCWebsite__

struct studentInfo {
	int studentNumber;
	string name;
	vector<string> courses;
	vector<float> grades;
	int credits;
};

struct enrolledCourses {
	vector<string> enrolledCourses;
	vector<float> grades;
	int credits;
};

class SSCWebsite {
private:
	studentInfo info;
	string program;
	bool suspended;
	float fees;
	enrolledCourses listOfCourses;
	academicRecords* records;
public:
	bool verifyUserID(string ID) {
		if (ID.empty() != 0)
			return true;
		else
			return false;
	}
	bool verifyPassword(string password) {
		if (password.empty() != 0 || password.length() > 4)
			return true;
		else
			return false;
	}
	string checkProgram() {
		return program;
	}
	bool checkSuspended() {
		return suspended;
	}
	studentInfo getStudentInfo() {
		return info;
	}
	void updateStudentInfo(string course, float grade, int credit) {
		info.courses.push_back(course);
		info.grades.push_back(grade);
		info.credits = info.credits + credit;
	}
	void registerForCourse(string course) {
		listOfCourses.enrolledCourses.push_back(course);
	}
	float getFees(void) {
		return fees;
	}
	void updateCheatingRecord(int numSuspendedSemesters) {
		records->updateCheatingRecords(numSuspendedSemesters);
	}
	cheatingRecords getCheatingRecords() {
		return records->getStudentCheatingRecords();
	}
};
#endif // !__SSCWebsite__
