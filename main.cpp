#include "BSTNodes.cpp"
#include "BSTNodes.h"
#include "StudentBST.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int procedure = 0;
int choice = 0;

int int main(int argc, char const *argv[])
{
  //Check for existence of facultyTable and studentTable here
  while (true)
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
      //1. Add student to tree
      //2. OPTIONAL: re-balance tree (lol that ain't happening)
      //3. print upon success or failure.
    }
    if (choice == 8)
    {
      //
    }
    if (choice == 9)
    {
      //Print all students and their info (sorted ascending)
    }
    if (choice == 10)
    {
      //Print all students and their info (sorted ascending)
    }
    if (choice == 11)
    {
      //Print all students and their info (sorted ascending)
    }
    if (choice == 12)
    {
      //Print all students and their info (sorted ascending)
    }
    if (choice == 13)
    {
      //Print all students and their info (sorted ascending)
    }
    if (choice == 14)
    {
      exit(0)
      //System Exit
    }
  }
  return 0;
}
