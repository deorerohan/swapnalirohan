#include "stdafx.h"
#include <iostream>

using namespace std;


class Node // this is data class
{
private:
	int mNumber; // this can be anything we want ot save or maintain.
	Node * mNext; // pointer of same class pointing to next object
public:
	Node(); // This is default constructor DO NOT USE IT!!
	Node(int xNum); // parameteised constructor prefered option
	void AddNextObject(int xNum);
};


class Container
{
private:
	Node * startNode;

public:
	void AddNode()
	{
		int lNum;
		cout << "Enter Integer value : " << endl;
		cin >> lNum;
		if(startNode == NULL)
		{
			startNode = new Node(lNum);
		}
		else
		{
			startNode->AddNextObject(lNum);
		}
	}
};
