#include <iostream>
#include "StudentBST.h"

using namespace std;


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

FacultyNode FacultyBST::findID(int id)
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

void printInorder(FacultyNode* node)
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

void StudentBST::printTree(FacultyBST* facBST)
{
	printInorder(facBST,root);
}

void StudentBST::serializeTree()
{

}

StudentNode StudentBST::findID(int id)
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
        	DestroyRecursive(node->left);
        	DestroyRecursive(node->right);
        	delete node;
    	}
}

void printInorder(FacultyBST* facBST, StudentNode* node)
{
	if(node == NULL) return;
	printInorder(node->left);  //first recur on left child

	int advisor = node.printInfo(); //prints everything but advisor
	cout << "Advisor: " << facBST.find(advisor).getName() << endl;

	//printing advisor of each student
	printInorder(node->right); //now recur on right child
}
