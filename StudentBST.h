#pragma once
#include <iostream>
#include "BSTNodes.h"

using namespace std;

class FacultyBST
{
	public:
		FacultyBST();
		~FacultyBST();

		void insert(FacultyNode *f);
		void printTree(); //prints inorder
		void serializeTree(); //serializes postorder
		FacultyNode findID(int id);
		void remove(FacultyNode *f);

		int getSize();
		bool isEmpty();

		void removeAdvisees(int fac);

		FacultyNode *root;
	private:
		void delAllRec(FacultyNode *node);
		void printInorder(FacultyNode* node); //rec
		int size;
};

class StudentBST
{
	public:
		StudentBST();
		~StudentBST();

		void insert(StudentNode *s);
		void printTree(FacultyBST* facBST); //prints inorder
		void serializeTree(); //serializes postorder
		StudentNode findID(int id);
		void remove(StudentNode *s);

		int getSize();
		bool isEmpty();

		void updateAdvisor(int student, int faculty);

		StudentNode *root;
	private:
		void delAllRec(StudentNode *node);
		void printInorder(StudentNode *node); //rec
		int size;

};
