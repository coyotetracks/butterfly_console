#pragma once
class IndexedItem {
public:
	IndexedItem();
	~IndexedItem();
	
	int getButterlyId() { return butterflyId; }
	void setButterflyId(int newButterflyId) { butterflyId = newButterflyId;  }
	char *getWord() { return word;  }
	void setWord(char *newWord) { word = newWord; }
private:
	int butterflyId;
	char *word;
};
