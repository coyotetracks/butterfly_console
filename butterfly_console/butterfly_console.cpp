// butterfly_console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	ButterflyIndexer *app = new ButterflyIndexer();
	int rc = app->index("C:\\dev\\yosemite_butterflies\\data_scripts\\yosemite_butterflies.db");
    return 0;
}
