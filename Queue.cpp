//----- Queue.cpp -----
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
 * This file implements the queue member functions for
 * a program that reads a string of characters, pushing each
 * character onto a stack as it is read and simultaneously
 * adding it to a queue. When the end is encountered, the
 * program uses the basic stack and queue operations
 * to determine if the string is a palindrome.
 *
 * @author Mariya Eggensperger
*/

/**
 * Default constructor. Construct an empty Queue object.
 *
 * @param args myFront and myBack are initialized to -1
 * and myArray is an array with QUEUE_CAPACITY elements
 * of type QueueElement.
 * @return
*/
Queue::Queue()
: myFront(0), myBack(0) // No values in the front || back of queue
{}
/**
 * Boolean check if a queue is empty.
 *
 * @param args True is returned if the queue
 * is empty and false is returned otherwise.
 * @return myFront == myBack
*/
bool Queue::is_empty() const
{
   return (myFront == myBack);
}

