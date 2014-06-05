class Node // this is data class
{
	Node()
	{
		cout << "Default constructor of Node" << endl;
	}
	
	Node(int xNum)
	{
		mNumber = xNum;
		mNext = NULL;
	}

	void AddNode(int xNum)
	{
		if(mNext == NULL)
		{
			mNext = new Node(xNum);
		}
		else
		{
			mNext->AddNode(xNum);
		}
	}
	int mNumber; // this can be anything we want ot save or maintain.
	Node * mNext; // pointer of same class pointing to next object
}


class Container
{
	Node * startNode;
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
			startNode->AddNode(lNum);
		}
	}
}
