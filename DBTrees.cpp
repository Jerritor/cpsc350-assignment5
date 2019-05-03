#include <iostream>
#include "DBTrees.h"

using namespace std;

////////STUDENT NODE/////////
StudentNode::StudentNode(string serialized)
{
	//todo
	cout << "TODO" << endl;
}

StudentNode::StudentNode(int i, string n, string l, string m, double g, int a) //parser
{
	id = i;
	name = n;
	level = l;
	major = m;
	gpa = g;
	advisor = a;
}

string StudentNode::serializeNode()
{
	cout << "TODO" << endl;
}

int StudentNode::printInfo()
{
	cout << id << ": " << name << endl;
	cout << "Class Standing: " << level << endl;
	cout << "Major: " << major << endl;
	cout << "GPA: " << gpa << endl;
	return advisor;
	//advisor is printed in bst.printInorder()
}

///////FACULTY NODE//////////

FacultyNode::FacultyNode(string serialized)
{
	cout << "TODO" << endl;
}

FacultyNode::FacultyNode(int i, string n, string l, string d, int a[], int aSize) //parser
{
	id = i;
	name = n;
	level = l;
	department = d;
	for(int i = 0; i < aSize; i++)
	{
		advisees[i] = a[i];
	}

}

string FacultyNode::serializeNode()
{
	cout << "TODO" << endl;
}

void FacultyNode::printInfo()
{
	cout << id << ": " << name << endl;
	cout << "Title: " << level << endl;
	cout << "Department: " << department << endl;
	//advisor is printed in bst.printInorder()
}

string FacultyNode::getName()
{
	return name;
}

//////PRIVATE//////////////

void FacultyNode::printAdvisors()
{
	cout << "Advisor(s): " << endl;
	for (int i = 0; i < adviseeSize; i++)
	{
		if (i > 0) cout << ", ";
		cout << advisees[i];
	}
	cout << endl;
}

/////////////////////////
///////FACULTY BST///////
/////////////////////////

FacultyBST::FacultyBST()
{
	root = NULL;
}

FacultyBST::~FacultyBST()
{
	delAllRec(root);
}

void FacultyBST::insert(FacultyNode *f)
{
	//make sure value doesn't exist

	FacultyNode *node = f;
	if(root == NULL) //empty BST
		root = node;
	else
	{
		int value = node->id;
		FacultyNode *current = root;
		FacultyNode *parent; //will be initialized in true statement

		while(true)
		{
			parent = current;
			if(value < current->id) //left
			{
				current = current->left;
				if(current == NULL)
				{
					parent->left = node;
					break;
				}
				//else keep looking
			}
			else //right: id > previous id
			{
				current = current->right;
				if(current == NULL)
				{
					parent->right = node;
					break;
				}
			}
		}
	}
}

void FacultyBST::printTree() //recursive 'i hope this works'
{
	printInorder(root);
}

void FacultyBST::serializeTree()
{

}

FacultyNode FacultyBST::find(int id)
{

}

void FacultyBST::remove(FacultyNode *s)
{

}

int FacultyBST::getSize()
{
	return size;
}

bool FacultyBST::isEmpty()
{

}

void FacultyBST::removeAdvisees(int fac)
{

}

void FacultyBST::delAllRec(FacultyNode *node)
{
	if (node)
   	{
        	delAllRec(node->left);
        	delAllRec(node->right);
        	delete node;
    	}
}

void FacultyBST::printInorder(FacultyNode *node)
{
	if(node == NULL) return;
	printInorder(node->left);  //first recur on left child
	node->printInfo();
	printInorder(node->right); //now recur on right child
}


/////////////////////////
///////STUDENT BST///////
/////////////////////////
StudentBST::StudentBST()
{
	root = NULL;
}

StudentBST::~StudentBST()
{
	delAllRec(root);
}

void StudentBST::insert(StudentNode *s)
{
	StudentNode *node = s;
	if(root == NULL) //empty BST
		root = node;
	else
	{
		int value = node->id;
		StudentNode *current = root;
		StudentNode *parent; //will be initialized in true statement

		while(true)
		{
			parent = current;
			if(value < current->id) //left
			{
				current = current->left;
				if(current == NULL)
				{
					parent->left = node;
					break;
				}
				//else keep looking
			}
			else //right: id > previous id
			{
				current = current->right;
				if(current == NULL)
				{
					parent->right = node;
					break;
				}
			}
		}
	}
}

void StudentBST::printTree()
{
	printInorder(root);
}

void StudentBST::serializeTree()
{

}

StudentNode StudentBST::find(int id)
{

}

void StudentBST::remove(int id)
{

}

void StudentBST::remove(StudentNode *s)
{

}

int StudentBST::getSize()
{
	return size;
}

bool StudentBST::isEmpty()
{

}

void StudentBST::updateAdvisor(int student, int faculty)
{

}

//PRIVATE//

void StudentBST::delAllRec(StudentNode* node)
{
	if (node)
   	{
        	delAllRec(node->left);
        	delAllRec(node->right);
        	delete node;
    	}
}

void StudentBST::printInorder(StudentNode *node)
{
	if(node == NULL) return;
	printInorder(node->left);  //first recur on left child

	int advisor = node->printInfo(); //prints everything but advisor
	cout << "Advisor: " << facBST->find(advisor).getName() << endl;

	//printing advisor of each student
	printInorder(node->right); //now recur on right child
}
