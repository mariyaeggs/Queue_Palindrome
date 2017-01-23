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

class Queue
{
public:
    /*----- Function Members -----*/

    Queue(); // Constructor
    /*-----------------------------------------------------------------------
    Construct a Queue object.

    Precondition:  None.
    Postcondition: An empty Queue object has been constructed; myFront
        and myBack are initialized to -1 and myArray is an array with
        QUEUE_CAPACITY elements of type QueueElement.
   ----------------------------------------------------------------------*/

    bool is_empty() const;
    /*-----------------------------------------------------------------------
    Check if queue is empty.

    Precondition: None.
    Postcondition: True is returned if the queue is empty and false is
        returned otherwise.
   ----------------------------------------------------------------------*/

    void enqueue(const QueueElement & value);
    /*-----------------------------------------------------------------------
     Add a value to a queue.

     Precondition:  value is to be added to this queue.
     Postcondition: value is added to back of queue provided there is space;
         otherwise, a queue-full message is displayed and execution is
         terminated.
    -----------------------------------------------------------------------*/

    QueueElement front() const;
    /*-----------------------------------------------------------------------
    Retrieve value at front of queue (if any).

    Precondition:  Queue is nonempty.
    Postcondition: Value at front of queue is returned, unless queue is
        empty; in that case, an error message is displayed and a "garbage
        value" is returned.
   ----------------------------------------------------------------------*/

    void dequeue();
    /*-----------------------------------------------------------------------
    Remove value at front of queue (if any).

    Precondition:  Queue is nonempty.
    Postcondition: Value at front of queue has been removed, unless queue
        is empty; in that case, an error message is displayed and
        execution is terminated.
   ----------------------------------------------------------------------*/

    void display(ostream & out) const;
    /*-----------------------------------------------------------------------
    Output the values stored in the queue.

    Precondition:  ostream out is open.
    Postcondition: Queue's contents, from front to back, have been output
        to out.
   -----------------------------------------------------------------------*/

private:

    /*----- Data Members -----*/

    int myFront, myBack; // Value at the front of queue and back of queue
    QueueElement myArray[QUEUE_CAPACITY]; //Queue of 128 elements

}; // End of Queue() class declaration

#endif //PROGRAM3_EGGENSPERGER_MARIYA_QUEUE_H
