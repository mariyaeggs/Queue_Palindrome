//----- Queue_Tester.cpp -----
#include <iostream>
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

   Queue q1;

   cout << "\nQueue created. Is Empty? " << boolalpha << q1.is_empty() << endl;
}