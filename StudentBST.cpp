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
	StudentNode *node = s;
	if(root == NULL) //empty BST
		root = node;
	else
	{
		int value = node->id;
		TreeNode *current = root;
		TreeNode *parent; //will be initialized in true statement

		while(true)
		{
			parent = current;
			if(value < current->key) //left
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

StudentNode StudentBST::findID(int id)
{

}

void StudentBST::remove(StudentNode s)
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

void printInorder(StudentNode* node)
{
	if(node == NULL) return;
	printInorder(node->left);  //first recur on left child
    	node.PrintInfo();
    	printInorder(node->right); //now recur on right child
}

/////////////////////////
///////FACULTY BST///////
/////////////////////////

FacultyBST::FacultyBST()
{
	root = null;
}

FacultyBST::~FacultyBST()
{
	delAllRec(root);
}

void FacultyBST::insert(FacultyNode f)
{
	//make sure value doesn't exist

	FacultyNode *node = f;
	if(root == NULL) //empty BST
		root = node;
	else
	{
		int value = node->id;
		TreeNode *current = root;
		TreeNode *parent; //will be initialized in true statement

		while(true)
		{
			parent = current;
			if(value < current->key) //left
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

StudentNode FacultyBST::findID(int id)
{

}

void FacultyBST::removeStudent(FacultyNode s)
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

void printInorder(FacultyNode* node)
{
	if(node == NULL) return;
	printInorder(node->left);  //first recur on left child
    	node.PrintInfo();
    	printInorder(node->right); //now recur on right child
}
