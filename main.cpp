#include <iostream>
#include <fstream>
#include <string>
#include "DBTrees.h"

using namespace std;

int procedure = 0;
int choice = 0;
int facultyIDs[100]; //initialized empty
int studentIDs[100]; //initialized empty

int main(int argc, char **argv)
{
  StudentBST masterStudent;
  FacultyBST masterFaculty;
  //Check for existence of facultyTable and studentTable here

/**
  bool l = false;
  while (l)
  {
    if (choice == 1)
    {
      //Print all students and their info (sorted ascending)
      //1. iterate through (STUDENT) tree using INORDER TRAVERSAL
      //2. return student information after the lookup
      //3. print to screen
    }
    if (choice == 2)
    {
      //Print all faculty and their info (sorted ascending)
      //1. iterate through (FACULTY) tree using INORDER TRAVERSAL
      //1.1 We can reuse the function from option 1 here.
      //2. return student information after the lookup
      //3. print to screen
    }
    if (choice == 3)
    {
      //Find and display student info given the FACULTY ID
      //1. use search function on the (STUDENT) binary tree, using ID number and tree as the function arguments
      //2. return student info based on ID after navigating.
      //3. choice should have a runtime of O(log(n))
      //4. print to screen
    }
    if (choice == 4)
    {
      //Find and display faculty info given the FACULTY ID
      //1. use search function on the (FACULTY) binary tree, using ID number and tree as the function arguments
      //1.1 reusing the function from option 3 here.
      //2. return faculty info based on ID after navigating
      //3. choice should have a runtime of O(log(n))
      //4. print to screen
    }

    if (choice == 5)
    {
      //Given a student ID, print name and info of Faculty advisor
      //1. use search function on the (STUDENT) BST, using ID number and tree as function arguments.
      //2. return the student's faculty advisor ID number.
      //3. use search function on the (FACULTY) BST, using ID number and tree as function arguments.
      //4. return faculty info, including name and ID number.
      //5. print to screen.
      //6. choice should have a runtime of O(2log(n)) due to double search.
    }

    if (choice == 6)
    {
      //pre-step: create queue (student_ID_queue of type int) to store student ID numbers (to be listed later).
      //1. use search function on the (FACULTY) BST, using ID number and tree as function arguments.
      //2. enqueue each student ID number (not the student!) listed in faculty object (found in step 1)
      //3. use search function on the (STUDENT) BST, using ID number* and tree as function arguments.
      //3.1 return student info
      //3.2 print to screen upon returned student
      //3.3 dequeue each ID number after it has been searched and returned
      //4. choice should have a runtime of O(xlog(n)) with x representing number of students listed by advisor
      //5. delete student_ID_queue
      //6. print deletion confirmation
    }
    if (choice == 7)
    {
      //pre-step: create object of type student, given their ID, name, level, major, GPA, and advisor
      //pre-step: check trees (both) for duplicate object. Evaluate whether ID already exists.
      //1. Add student to tree, given student object and tree as arguments.
      //2. OPTIONAL: re-balance tree (lol that ain't happening)
      //3. print upon success or failure.
      //4. runtime is O(log(n)), right?
    }
    if (choice == 8)
    {
      //1. use search function on the (STUDENT) BST, using ID number and tree as function arguments
      //2. mark for deletion. Do not actually delete the node.
      //3. print upon success or failure
      //4. runtime should be O(log(n))
      //5. ensure that searching for that node does not return anything aside from NULL
    }
    if (choice == 9)
    {
      //pre-step: create object of type faculty, given their ID, name, level, department, and student advisees, if any
      //pre-step: check trees (both) for duplicate object. Evaluate whether ID already exists.
      //1. Add faculty to tree, given student object and tree as arguments.
      //2. OPTIONAL: re-balance tree (lol that ain't happening)
      //3. print upon success or failure.
      //4. runtime is O(log(n)), right?
    }
    if (choice == 10)
    {
      //pre-step: mandate that a faculty member must have 0 existing advisees before it may be deleted.
      //pre-step: this will ensure that students do not have a NULL advisor without needing us to write more code
      //1. use search function on the (FACULTY) BST, using ID number and tree as function arguments
      //2. mark for deletion. Do not actually delete the node.
      //3. print upon success or failure
      //4. runtime should be O(log(n))
      //5. ensure that searching for that node does not return anything aside from NULL
    }
    if (choice == 11)
    {
      //pre-step: prompt for student ID and new faculty ID
      //pre-step: check for existance of both student and faculty
      //1. use search function on the (STUDENT) BST, using ID number and tree as function arguments
      //2. set student faculty advisor to new value.
      //3. use search function on the (faculty) BST, using ID number and tree as function arguments
      //4. set faculty advisee to new value (add to list).
      //5. runtime should be O(2log(n))
    }
    if (choice == 12)
    {
      //pre-step: prompt for student ID and new faculty ID
      //pre-step: check for existance of both student and faculty
      //1. use search function on the (FACULTY) BST, using ID number and tree as function arguments
      //2. remove faculty advisee value
      //3. use search function on the (STUDENT) BST, using ID number and tree as function arguments
      //4. remove student faculty advisor value.
      //5. runtime should be O(2log(n))
    }
    if (choice == 13)
    {
      //How the hell do we serialise?
    }
    if (choice == 14)
    {
      exit(0);
      //System Exit
    }
  }
**/

  cout << "Program exited succesfully." << endl;
  return 0;
}
