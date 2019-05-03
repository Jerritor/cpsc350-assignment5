#include <iostream>
#include "BSTNodes.h"

using namespace std;

////////STUDENT NODE/////////
StudentNode::StudentNode()
{

}

StudentNode::StudentNode(string serialized)
{

}

StudentNode::StudentNode(int i, string n, string l, string m, double g, int a) //parser
{

}

StudentNode::~StudentNode()
{

}

string StudentNode::serializeNode()
{

}

void StudentNode::printInfo()
{
	cout << id << ": " << name << endl;
	cout << "Class Standing: " << level << endl;
	cout << "Major: " << major << endl;
	cout << "GPA: " << gpa << endl;
	//advisor is printed in bst.printInorder()
}

///////FACULTY NODE//////////
FacultyNode::FacultyNode()
{

}

FacultyNode::FacultyNode(string serialized)
{

}

FacultyNode::FacultyNode(int i, string n, string l, string d, int a[]) //parser
{

}

FacultyNode::~FacultyNode()
{

}

string FacultyNode::serializeNode()
{

}

void FacultyNode::printInfo()
{
	cout << id << ": " << name << endl;
	cout << "Title: " << level << endl;
	cout << "Department: " << department << endl;
	cout << "Advisor(s): " << endl;
	for (int i = 0; i < adviseeSize; i++)
	{
		if (i > 0) cout << ", ";
		cout << advisees[i];
	}
	cout << endl;
	//advisor is printed in bst.printInorder()
}

string FacultyNode::getName()
{
	return name;
}
