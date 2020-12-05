#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "SSCWebsite.h"

using namespace std;

#ifndef __professor__
#define __professor__

struct studentGrades {
	int studentNumber;
	float grade;
};

class professor {
private:
	int numCourses;
	int numStudents;
	vector<studentGrades> grades;
	vector<string> courses;
public:
	void submitGrades() {
		for (int i = 0; i < numCourses; i++)
		{
			grades[i].grade;
		}
	}
	void modifyGrades() {

	}
};
#endif // !__professor__
