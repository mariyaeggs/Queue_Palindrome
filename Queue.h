//----- Queue.h -----
#include <iostream>
using namespace std;

/* Queue.h contains the declaration of class Queue.
   Basic operations:
     Constructor: Constructs an empty queue
     empty:       Checks if a queue is empty
     enqueue:     Modifies a queue by adding a value at the back
     front:       Accesses the front queue value; leaves queue unchanged
     dequeue:     Modifies a queue by removing the value at the front
     display:     Displays the queue elements from front to back
   Class Invariant:
      1. The queue elements (if any) are stored in consecutive positions
         in myArray, beginning at position myFront.
      2. 0 <= myFront, myBack < QUEUE_CAPACITY
      3. Queue's size < QUEUE_CAPACITY
-----------------------------------------------------------------------*/

#ifndef PROGRAM3_EGGENSPERGER_MARIYA_QUEUE_H
#define PROGRAM3_EGGENSPERGER_MARIYA_QUEUE_H
/**
 * Title: Program 3 Submission : Palindrome Queues
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/22/2017
 *
 * Header file defines the data for a queue program
 * that reads a string of characters, pushing each
 * character onto a stack as it is read and simultaneously
 * adding it to a queue. When the end is encountered, the
 * program uses the basic stack and queue operations
 * to determine if the string is a palindrome.
 *
 * @author Mariya Eggensperger
*/

const int QUEUE_CAPACITY = 128;
typedef int QueueElement;

#endif //PROGRAM3_EGGENSPERGER_MARIYA_QUEUE_H
