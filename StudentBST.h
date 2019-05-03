#pragma once
#include <iostream>
#include "BSTNodes.h"

using namespace std;

class StudentBST
{
	public:
		StudentBST();
		~StudentBST();

		void insertStudent(StudentNode s);
		void printTree(); //prints inorder
		void serializeTree(); //serializes postorder
		StudentNode findID(int id);
		void removeStudent(StudentNode s);

		int size();
		bool isEmpty();

		void updateAdvisor(int student, int faculty);

		StudentNode *root;
	private:
		void delAllRec(StudentNode node);
		int size;

};

class FacultyBST
{
	public:
		FacultyBST();
		~FacultyBST();

		void insertStudent(FacultyNode s);
		void printTree(); //prints inorder
		void serializeTree(); //serializes postorder
		StudentNode findID(int id);
		void removeStudent(FacultyNode s);

		int size();
		bool isEmpty();

		void removeAdvisees(int fac);

		StudentNode *root;
	private:
		void delAllRec(FacultyNode node);
		int size;
};
