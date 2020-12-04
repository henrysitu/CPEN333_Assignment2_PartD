#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#ifndef __bank__
#define __bank__

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
	float bankBalance;
public:
	float checkBalance() {

	}
	void displayOperationResults() {

	}
	bool payFees(float amount) {

	}
};
#endif // !__bank__
