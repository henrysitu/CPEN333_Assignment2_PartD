#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#ifndef __SSCWebsite__
#define __SSCWebsite__

struct studentInfo {
	string courses;
	float grades;
	int credits;
};

struct enrolledCourses {
	string courses;
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

	}
	bool verifyPassword(string password) {

	}
	string checkProgram() {

	}
	bool checkSuspended() {

	}
	studentInfo getStudentInfo() {

	}
};
#endif // !__SSCWebsite__
