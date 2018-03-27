#pragma once
#include <vector>

using namespace std;

class ButterflyIndexer
{
public:
	ButterflyIndexer();
	int index(const char *butterflyDatabase);
	~ButterflyIndexer();
private:
	vector<double> indexedList;
};

