#include <iostream>
using namespace std;

class node{
		public:
		// Data 
		int data;
		// Pointer to the next Node
		node * next;
		// Constructor that makes pointer to null.
		node(){
		  next = NULL;
		}

	};

class LinkedList{
		//head+circle inside linked with each other
		public:
		// Head -> Node type ptr
		node * head;
		node * tail;
		// Construct
		LinkedList(){
	  	head = NULL;
	  	tail = NULL;
		} 
   
	   	//circle inside linked with each other
		//rules how circle will be linked
   
	// Insert

	void insert(int value){
		// addition of first node
		node * temp = new node; 
		// Insert value in the node
		temp -> data = value;
		// for first node
		if(head == NULL){
		 head = temp;
		 }
		// for other nodes
		else{
			tail->next = temp;
		 }
		tail = temp;
		} 


	//insertAt

	void insertAt(int pos, int value){
		// Reach the place before the pos
		node * current = head;
		int i =1;
        
		while(i < pos-1){
			i++;
			current = current->next;
			}
		// Create a node
		node*temp = new node;
		temp->data = value;

		// pointers moving
		temp->next = current->next;
		current->next = temp;
		}

	// Deletion of last element

	void delet(){
		// store the tail in temp
		node * temp = tail;
		// before tail has to point to null
		node * current = head;
		while(current->next != tail){
			current = current->next;
			}
		current->next = NULL; 
		// update tail
		tail = current;
		// delete temp
		delete temp;
		}
    
	//count

	void count(){
		node*current=head;
		int i=1;
		while(current!=tail)
			{
			current=current->next;
			i++;
			}
			cout<<i<<endl;
		}
	//deletAt
	
	void deletAt(int pos){
		// Reach the place before the pos
		node * current = head;
		int i =1;
		while(i < pos-1){
			i++;
			current = current->next;
			}

		// delete a node
		node*delet = current->next;
		current->next=delet->next;
		delete delet ;
		}
	
	// Display
	void display(){
		node * current = head;
		while(current != NULL){
			cout << current->data << "->";
			current = current->next;
			}
			cout << endl;
			}
		};


int main(){
	LinkedList l1;
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.insert(4);
	l1.display();
	l1.delet();
	l1.display();
	l1.insertAt(1,3);
	l1.display();
	l1.count();
	l1.display();
	l1.deletAt(2);
	l1.display();
	return 0;
}
