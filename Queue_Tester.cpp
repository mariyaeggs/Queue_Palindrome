//----- Queue_Tester.cpp -----
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

#include "Queue.h"
/**
 * Title: Program 3 Submission : Palindrome Queues
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/22/2017
 *
 * This is a driver program to test the queue class for a
 * a program that reads a string of characters, pushing each
 * character onto a stack as it is read and simultaneously
 * adding it to a queue. When the end is encountered, the
 * program uses the basic stack and queue operations
 * to determine if the string is a palindrome.
 *
 * @author Mariya Eggensperger
*/
int main() {
   while ( true )
   {
      string user_input; // The user input to check for palindrome
      cout << "\nPress ENTER to exit the program. Otherwise, input a string: ";
      getline(cin, user_input);

      if (user_input.empty()) // If user did not input anything
      {
         break; // Pause the program
      }
      stack<char>
              stack(stack<char>::container_type(user_input.begin(), user_input.end()));
      queue<char>
              queue(queue<char>::container_type( user_input.begin(), user_input.end()));

      /*While stack is not empty, and the top element of the
       * stack and the front element of the queue are equal*/
      while (!stack.empty() && stack.top() == queue.front())
      {
         stack.pop(); // Remove the top element of the stack
         queue.pop(); // Remove the front element of the queue
      }
      if (stack.empty() )// If the stack is empty
      {
         cout << "\nThis is a palindrome." << endl;
      }
      else
      {
         cout << "\nThis is NOT a palindrome" << endl;
      }
   }
   return 0;
}