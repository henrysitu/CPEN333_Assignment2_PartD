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
	string studentPassword;
	academicRecords* records;
public:
	bool verifyUserID(string ID) {
		if (ID.compare(info.name) == 0)
			return true;
		else
			return false;
	}
	bool verifyPassword(string password) {
		if (studentPassword.compare(password))
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
		fees += 500;
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
	SSCWebsite(studentInfo myInfo, string myProgram, bool amSuspended, float amountOwing, enrolledCourses courses, string myPassword, academicRecords* myRecords) {
		info = myInfo;
		program = myProgram;
		fees = amountOwing;
		listOfCourses = courses;
		studentPassword = myPassword;
		records = myRecords;
	}
};
#endif // !__SSCWebsite__
