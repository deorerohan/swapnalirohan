// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkedListMain.h"

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Enter main function" << endl;
	//Container pContainer; 
	Container * lpContainer = new Container();
	lpContainer->AddNode();
	lpContainer->AddNode();
	lpContainer->AddNode();
	lpContainer->AddNode();

	delete lpContainer;
	cout << "Exit main function" << endl;
	return 0;
}

/*
we want to create a liked list
it will have start node

*/