#include <stdio.h>
#include <iostream>
#include <string>
#include "academicRecords.h"

using namespace std;

#ifndef __SSCWebsite__
#define __SSCWebsite__

struct studentInfo {
	int studentNumber;
	string *courses;
	float grades;
	int credits;
};

struct enrolledCourses {
	string *courses;
	float grades;
	int credits;
};

class SSCWebsite {
private:
	studentInfo info;
	string program;
	bool suspended;
	float fees;
	enrolledCourses courses;
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
	void registerForCourse(string course) {
		*courses.courses = *courses.courses + course;
	}
	float getFees(void) {
		return fees;
	}
};
#endif // !__SSCWebsite__
