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
	SSCWebsite* SSCRecords;

public:
	void determineCheating() {
		int ifCheat = rand() % 2;
		if (ifCheat == 1)
		{
			SSCRecords->updateCheatingRecord(SSCRecords->getCheatingRecords().numIncidences);
		}
	}
};
#endif // !__president__
