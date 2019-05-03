#include <iostream>

using namespace std;

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

void StudentBST::insert(StudentNode s)
{

}

void StudentBST::printTree()
{

}

void StudentBST::serializeTree()
{

}

StudentNode StudentBST::findID(int id)
{

}

void StudentBST::removeStudent(StudentNode s)
{

}

int StudentBST::size()
{

}

bool StudentBST::isEmpty()
{

}

void StudentBST::updateAdvisor(int student, int faculty)
{

}

//PRIVATE//

void StudentBST::delAllRec(StudentNode node)
{
	if (node)
   	{
        	DestroyRecursive(node->left);
        	DestroyRecursive(node->right);
        	delete node;
    	}
}

/////////////////////////
///////FACULTY BST///////
/////////////////////////

FacultyBST::FacultyBST()
{

}

FacultyBST::~FacultyBST()
{
	delAllRec(root);
}

void FacultyBST::insert(StudentNode s)
{

}

void FacultyBST::printTree()
{

}

void FacultyBST::serializeTree()
{

}

StudentNode FacultyBST::findID(int id)
{

}

void FacultyBST::removeStudent(StudentNode s)
{

}

int FacultyBST::size()
{

}

bool FacultyBST::isEmpty()
{

}

void FacultyBST::removeAdvisees(int fac)
{

}

void FacultyBST::delAllRec(FacultyNode node)
{
	if (node)
   	{
        	DestroyRecursive(node->left);
        	DestroyRecursive(node->right);
        	delete node;
    	}
}
