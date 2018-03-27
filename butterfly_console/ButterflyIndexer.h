#pragma once
#include <vector>
#include "IndexedItem.h"

using namespace std;

class ButterflyIndexer
{
public:
	ButterflyIndexer();
	int index(const char *butterflyDatabase);
	~ButterflyIndexer();
private:
	vector<IndexedItem> indexedList;
};

