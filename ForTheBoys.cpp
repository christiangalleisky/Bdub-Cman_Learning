#include <iostream>

struct Node{
 int data;
 Node *next;
 //can you get a NodeStruct CONSTRUCTOR Here???? I couldn't.
 //at least tell me what would hypothetically be here.	
};

class SLL {
	private: //test this line for redundancy 
	Node *head;
	public:
	SLL();//singly linked list ie: SLL
	void insertAtHead(int);
	void insertAtTail(int); //get at it
	int deleteFromHead(); //get to it byob u gonna need it
	int deleteFromTail(); 
	void reverseSLL();//this is a fun one, make the first last and last first
					  //and so on
	void printSLL();
};

SLL::SLL(){
	
	head = NULL;
}

void SLL::insertAtHead(int data){
	
	Node *newElement = new Node;
	newElement->data = data;
	newElement->next = head;
	head = newElement;
}

int SLL::deleteFromTail(){

	int count = 1; 
	Node *runner = head;//try best to use meaningful names
	Node *stopper = head;//they give clues to whats coming

	if (runner == NULL){return 0;} //this is jenky we need an actual null value	

	while(runner->next != NULL){
		count++; //at this point accurately represents the number of nodes
		runner = runner->next;
	}
	
	if (count == 1){//we have just one node
		Node *temp = head;
		int x = temp->data;
		head = NULL;
		delete temp; //this is the essence of memory management. Dangling Pointers.
		return x;
	}
	else{//we have at least 2 nodes
		while(stopper->next != runner){
			stopper = stopper->next;
		}
		stopper->next = NULL;
		int x = runner->data;
		delete runner;
		return x;
	}
}

void SLL::printSLL(){
	Node *temp = head;
	while(temp != NULL){
		std::cout<<temp->data<<std::endl;
		temp = temp->next;
	}
}

int main(){
	
	SLL l0;
	l0.insertAtHead(9);
	l0.insertAtHead(13);
	l0.insertAtHead(16);
	l0.printSLL();
	l0.deleteFromTail();
	l0.printSLL();
	l0.deleteFromTail();
	l0.deleteFromTail();
	l0.printSLL();
	l0.deleteFromTail();//4th delete, trying to break the machine

	std::cout<<"HI YOU"<<std::endl;
	return 0;
}
