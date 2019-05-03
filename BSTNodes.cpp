#include <iostream>

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

virtual string StudentNode::serializeNode()
{

}

virtual void StudentNode::printInfo()
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

FacultyNode(string serialized)
{

}

FacultyNode(int i, string n, string l, string d, string[] a) //parser
{

}

FacultyNode::~FacultyNode()
{

}

virtual string FacultyNode::serializeNode()
{

}

virtual void FacultyNode::printInfo()
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
