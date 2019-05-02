#pragma once
#include <iostream>

using namespace std;

struct PersonNode //abstract
{
	virtual string serializeNode() = 0;
	virtual void printInfo() = 0;

	int id;
	string name;
	string level;
};

class StudentNode : public PersonNode
{
	//inherits id, name, level
	public:
		StudentNode();
		StudentNode(string serialized);
		StudentNode(int i, string n, string l, string m, double g, int a);
		~StudentNode();

		virtual string serializeNode();
		virtual void printInfo();

		StudentNode *left, *right;

		string major;
		double gpa;
		int advisor;
};

class FacultyNode : public PersonNode
{
	//inherits id, name, level
	public:
		FacultyNode();
		~FacultyNode();

		virtual string serializeNode();
		virtual void printInfo();

		FacultyNode *left, *right;

		string department;
		int[] advisees;
	private:

};
