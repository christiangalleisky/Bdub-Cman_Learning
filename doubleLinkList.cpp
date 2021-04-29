#include <iostream>


struct Node{
 int data;
 Node *next;
 Node *prev;//what is thiss???? How curious...???
 //can you get a NodeStruct CONSTRUCTOR Here???? I couldn't.
 //at least tell me what would hypothetically be here.
 //Think about it. The class below, is a private member struct. 
 //It has a constructor right down there@!
};

class DLL {
	private: //test this line for redundancy 
	Node *head;
	public:
	DLL();//Doubly linked list ie: DLL
	void insertAtHead(int);
	void insertAtTail(int); //get at it
	int deleteFromHead(); //get to it byob u gonna need it
	int deleteFromTail(); //do or do not, there is no try
	void reverseDLL();//this is a fun one, make the first last and last first
					  //and so on
	void printDLL();
};

DLL::DLL(){
	
	head = NULL;
	
}

void DLL::insertAtHead(int data){

	Node *newElement = new Node();
	newElement->data = data;
	
	if (head == NULL){
		head = newElement;
		head->next = NULL;
		head->prev = NULL;
	}
	else{
		newElement->next = head;
		head->prev = newElement;
		newElement->prev = NULL;
		head = newElement;
	}
}	

void DLL::printDLL(){
	Node *temp = head;
	while(temp != NULL){
		std::cout<<temp->data<<std::endl;
		temp = temp->next;
	}
}

int main(){
	
	DLL l0;
	l0.insertAtHead(9);
	l0.insertAtHead(13);
	l0.insertAtHead(16);
	l0.printDLL();
	

	std::cout<<"HI YOU"<<std::endl;
	return 0;
}
