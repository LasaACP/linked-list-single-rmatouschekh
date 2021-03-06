/*

Header file for single linked list class library

*/

// add(value)				//Adds a new value to the end of this list.
void LinkedList::add(string nm, double la, double lo)
{
  if(current == NULL)            // empty list
  {
    current = new Node;
    current -> name = nm;
    current -> pNext = NULL;
    current -> longi = lo;
    current -> lat = la;
    first = current;
  }
  else
  {
    Last();
    current -> pNext = new Node;
    current = current -> pNext;
    current -> name = nm;
    current -> longi = lo;
    current -> lat = la;
    current -> pNext = NULL;
  }
}
// clear()					//Removes all elements from this list.
void LinkedList::clear()
{
  Node* ha = first;
  while (ha != NULL)
  {
    delete ha; // delete the node
    ha = ha->pNext; // move current forwards
  }
}
// equals(list)				//Returns true if the two lists contain the same elements in the same order.

//get(index)				//Returns the element at the specified index in this list.
string LinkedList::get(int index)
{
   Node* ha = first;
   for (int i = 0; i < index; i++)
   {
      ha = ha->pNext;
   }
   return ha->name;
}
//insert(index, value)		//Inserts the element into this list before the specified index.
void LinkedList::insert(int index, string nm, double la, double lo)
{
	Node* ha = new Node;
	ha->name = nm;
	ha->longi = lo;
	ha->lat = la;
	Node* meh = first;
	for (int i = 0; i < index; i++)
	{
		if (i == (index-1))
		{
			Node* bleh = new Node;
			bleh = meh;
			meh = ha;
			ha->pNext = bleh;
		}
	}
}
//exchg(index1, index2)		//Switches the payload data of specified indexex.
void LinkedList::exchg(int index1, int index2)
{
   Node* ha = first;
   Node* bla;
   double lo;
   double la;
   string na;
   for (int i = 0; i < index2; i++)
   {
      if (i == index1)
      {
         lo = ha->longi;
         la = ha->lat;
         na = ha->name;
         bla = ha;
      }
      else if (i == index2)
      {
         ha->longi = lo;
         ha->lat = la;
         ha->name = na;
         lo = ha->longi;
         la = ha->lat;
         na = ha->name;
      }
      ha = ha->pNext;
   }
   bla->longi = lo;
   bla->lat = la;
   bla->name = na;
}
// isEmpty()				//Returns true if this list contains no elements.
bool LinkedList::isEmpty()
{
   if (first == NULL)
   {
      return true;
   }
   else
   {
      return false;
   }
}
// remove(index)			//Removes the element at the specified index from this list.
void LinkedList::remove(int index)
{
   Node* ha = first;
   for (int i = 0; i < index; i++)
   {
      ha = ha->pNext;
   }
   delete ha;
}
// set(index, value)		//Replaces the element at the specified index in this list with a new value.
void LinkedList::set(int index, string nm, double la, double lo)
{
   Node* ha = first;
   for (int i = 0; i < index; i++)
   {
      ha = ha->pNext;
   }
   ha->name = nm;
   ha->lat = la;
   ha->longi = lo;
}
// size()					//Returns the number of elements in this list.
int LinkedList::size()
{
   Node* ha = first;
   int s = 0;
   while (ha != NULL)
   {
      s++;
      ha = ha->pNext;
   }
   return s;
}

// subList(start, length)	//Returns a new list containing elements from a sub-range of this list.
LinkedList LinkedList::subList(int start, int length)
{
  LinkedList newlist;
  Node* ha = first;
  for (int i = 0; i < start; i++)
  {
    ha = ha->pNext;
  }
  for (int i = start; i < start+length; i++)
  {
    NULL;
  }
}
// toString()				//Converts the list to a printable string representation.
void LinkedList::toString()
{
  Node* ha = first;
  while (ha != NULL)
  {
    cout << "Name: " << ha->name << ", Latitude: " << ha->lat << ", Longitude: " << ha->longi << endl;
    ha = ha->pNext;
  }
}
