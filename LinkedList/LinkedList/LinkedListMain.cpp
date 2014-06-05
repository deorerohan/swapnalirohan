#include "stdafx.h"
#include "LinkedListMain.h"

Node::Node()
{
	cout << "Default constructor of Node" << endl;
}

Node::Node(int xNum)
{
	mNumber = xNum;
	mNext = NULL;
}

void Node::AddNextObject(int xNum)
{
	if(mNext == NULL)
	{
		mNext = new Node(xNum);
	}
	else
	{
		mNext->AddNextObject(xNum);
	}
}