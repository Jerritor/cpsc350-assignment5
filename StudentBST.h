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

		void updateAdvisor(int student, int faculty);

		int size();
		bool isEmpty();

		StudentNode *root;
	private:
		int size;
}

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

		void removeAdvisees(int fac);

		int size();
		bool isEmpty();

		StudentNode *root;
	private:
		int size;
}
