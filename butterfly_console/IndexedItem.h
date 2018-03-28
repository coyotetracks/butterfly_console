#pragma once

#include <string>

using namespace std;

class IndexedItem {
public:
	IndexedItem();
	~IndexedItem();
	
	int getButterlyId() { return butterflyId; }
	void setButterflyId(int newButterflyId) { butterflyId = newButterflyId;  }
	string getWord() { return word;  }
	void setWord(const string newWord) { word = newWord; }
private:
	int butterflyId;
	string word;
};
