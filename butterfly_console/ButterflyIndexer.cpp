#include "stdafx.h"
#include "ButterflyIndexer.h"
#include <iostream>
#include <vector>

using namespace std;

ButterflyIndexer::ButterflyIndexer()
{
}

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
	int i;
	for (i = 0; i<argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

int ButterflyIndexer::index(const char *butterflyDatabase) {
	printf("Indexing now");
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;


	vector<int> myInts;

	cout << "this is cool" << endl;

	myInts.push_back(200);
	myInts.push_back(400);

	for (const int &oneInt : myInts) {
		cout << oneInt << endl;
	}


	rc = sqlite3_open(butterflyDatabase, &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		return(1);
	}

	rc = sqlite3_exec(db, "select * from description", callback, 0, &zErrMsg);
	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}

	sqlite3_close(db);

	return(0);
}

ButterflyIndexer::~ButterflyIndexer()
{
}
