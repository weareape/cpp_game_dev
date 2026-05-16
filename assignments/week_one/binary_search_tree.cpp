#include<iostream>

//Storing root node
struct Node{
    int data;
    Node* left;
    Node* right;
};

//Function to get new node and setting to root if root is null
Node* GetNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

//Function to insert a node to the tree
Node* Insert(Node* root,int data){
    if(root == nullptr) { //if tree is empty insert new node
        root = GetNewNode(data);
    }
    //Insert left is data is lesser
    else if(data <= root->data){
        root->left = Insert(root->left, data);
    }
    //Insert right if data is greater
    else{
        root->right = Insert(root->right, data);
    }
    
    return root;

}

//int leaves = 0;

int CountLeaves(Node *root){
    if(root == nullptr){
        return 0;
    }
    
    if(root->left == nullptr && root->right == nullptr){
            return 1;
        }
    
    return CountLeaves(root->left) + CountLeaves(root->right);    
    
}



int main(){
    //Creating root node
    Node* root = nullptr;
    //Creating list of nodes
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    root = Insert(root, 44);
    root = Insert(root, 32);
    root = Insert(root, 80);

    
    std::cout << CountLeaves(root) << "\n";
 
    return 0;

}