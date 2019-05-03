#pragma once
#include <iostream>
#include "BSTNodes.h"

using namespace std;

class StudentBST
{
	public:
		StudentBST();
		~StudentBST();

		void insert(StudentNode s);
		void printTree(); //prints inorder
		void serializeTree(); //serializes postorder
		StudentNode findID(int id);
		void remove(StudentNode s);

		int size();
		bool isEmpty();

		void updateAdvisor(int student, int faculty);

		StudentNode *root;
	private:
		void delAllRec(StudentNode node);
		void printInorder(StudentNode* node); //rec
		int size;

};

class FacultyBST
{
	public:
		FacultyBST();
		~FacultyBST();

		void insert(FacultyNode f);
		void printTree(); //prints inorder
		void serializeTree(); //serializes postorder
		StudentNode findID(int id);
		void remove(FacultyNode f);

		int size();
		bool isEmpty();

		void removeAdvisees(int fac);

		StudentNode *root;
	private:
		void delAllRec(FacultyNode node);
		void printInorder(FacultyNode* node); //rec
		int size;
};
