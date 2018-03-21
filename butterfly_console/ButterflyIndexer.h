#pragma once
#include <vector>

class ButterflyIndexer
{
public:
	ButterflyIndexer();
	int index(const char *butterflyDatabase);
	~ButterflyIndexer();
private:
	vector<IndexedItem> indexedList;
};

