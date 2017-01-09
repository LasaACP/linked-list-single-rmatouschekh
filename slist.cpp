#include "slist.h"

/*

Class Library File

*/
#include <iostream>
#include <string>
using namespace std;

void LinkedList::Last()
{
   if(current != NULL)
   { 
      while(current -> pNext != NULL)
      {
        current = current -> pNext;
      }
   }
}

// Constructor
class LinkedList
{
  private:
  struct Node
  {
    string name;
    Node *pNext;
  };
  Node *current;
  Node *first;
public:
  LinkedList();
  LinkedList(string);
  void Last();
  void addList(string);
  void displayList();
};

LinkedList::LinkedList()
{
    current = NULL;
    first = NULL;
}

LinkedList::LinkedList(string nm)
{

    current = first = new Node;
    first -> name = nm;
    first -> pNext = NULL;
}
// Destructor

// add(value)				//Adds a new value to the end of this list.
void LinkedList::addList(string nm)
{
  if(current == NULL)            // empty list
  {
    current = new Node;
    current -> name = nm;
    current -> pNext = NULL;
    first = current;
  }
  else
  {
    Last();
    current -> pNext = new Node;
    current = current -> pNext;
    current -> name = nm;
    current -> pNext = NULL;
  }
}
// clear()					//Removes all elements from this list.
void LinkedList::clear()
{
  Node* ha = first; // empty header
  Node* current = first->pNext; // first valid node
  while (current != NULL)
  {
    ha->pNext = current->pNext; // unlike node removing
    delete current; // delete the node
    ha = current; // set new ha 
    current = current->pNext; // move current forwards
  }
}
// equals(list)				//Returns true if the two lists contain the same elements in the same order.

//get(index)				//Returns the element at the specified index in this list.

//insert(index, value)		//Inserts the element into this list before the specified index.

//exchg(index1, index2)		//Switches the payload data of specified indexex.

// isEmpty()				//Returns true if this list contains no elements.

// remove(index)			//Removes the element at the specified index from this list.

// set(index, value)		//Replaces the element at the specified index in this list with a new value.

// size()					//Returns the number of elements in this list.

// subList(start, length)	//Returns a new list containing elements from a sub-range of this list.

// toString()				//Converts the list to a printable string representation.
void LinkedList::toString()
{
}
