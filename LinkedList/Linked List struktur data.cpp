 #include <iostream>
using namespace std;

class Node{
	public:
		char id; 
		Node *next;
		
		Node(){
			next = NULL;
		}
};

class LinkedList{
	public:
		Node *head;
		Node *tail;
		
		Linkedlist(){
			head = tail = NULL;
		}
		
		void insertToTail(char data){
			Node *node = new Node();
			node->id = data;
			
			tail->next = node;
			tail = node;
		}
		
		void insertTohead(char data){
			Node *node = new Node();
			node->id =data;
			
		}
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	LinkedList *link1 = new LinkedList();
	
	Node *node1 = new Node();
	node1->id= 'A';
	
	link1->head = node1;
	link1->tail = node1;
	
	cout << node1 <<endl;
	cout << link1->head << endl;
	cout << link1->head->id << endl;
	cout << link1->head->next << endl;
	cout << link1->tail->id <<endl;
	
	Node *node2 = new Node();
	node2->id= 'B';
	
	link1->tail->next = node2;
	link1->tail= node2;
	
	cout << link1->head->id << endl;
	cout << link1->tail->id << endl;
	
	Node *nodeX = new Node();
	nodeX->id= 'X';
	
	Node *tmp = link1->head;
	
	link1->head = nodeX;
	link1->head->next = tmp;
	
	cout << link1->head->id << endl;
	cout << link1->tail->id << endl;
	
	return 0;
}