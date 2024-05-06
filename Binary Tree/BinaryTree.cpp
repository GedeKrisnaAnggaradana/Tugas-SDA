 #include <iostream>
using namespace std;

class Node{
	public:
		Node *left;
		Node *right;
		int key;
		
		Node(){
			left = right = NULL;
		}
};

class BST {
	public:
		Node *root;
		
		BST(){
			root = NULL;
		}
		
		Node *insertRecursive(int inputKey, Node *currentRoot){
			
			if (currentRoot==NULL){
				Node *newNode = new Node();
				newNode->key = inputKey;
				return newNode;
			}
			
			if (inputKey < currentRoot->key){
				
				currentRoot->left = insertRecursive(inputKey, currentRoot->left);
				
			} else if (inputKey > currentRoot->key){
				
				currentRoot->right = insertRecursive(inputKey, currentRoot->right);
				
			}
			
			return currentRoot;
			
		}
		
		void insert(int inputKey){
			root = insertRecursive(inputKey, root);
		}
		
		void preOrderTraversal(Node *currentNode){
			if (currentNode!=NULL){
				cout << currentNode->key << " ";
				preOrderTraversal(currentNode->left);
				preOrderTraversal(currentNode->right);
			}
		}
		
		void preOrder(){
			cout << "Pre Order Traversal: ";
			
			preOrderTraversal(root);
			
			cout << endl;
		}
};





int main(int argc, char** argv){
	BST *bin1 = new BST();
	
	bin1->insert(6);
	bin1->insert(7);
	bin1->insert(4);
	bin1->insert(8);
	bin1->insert(5);
	bin1->insert(3);
	
	
	bin1->preOrder();
	
	return 0;

}