#include<iostream>

//Storing root node
struct Node{
    int data;
    Node* left;
    Node* right;
};

//Function to get new node and setting to root if root is null
Node* CreateNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

//Function to insert a node to the tree
Node* Insert(Node* root,int data){
    if(root == nullptr) { //if tree is empty insert new node
        root = CreateNode(data);
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

//Search through tree and count total amount of leaves
int CountLeaves(Node *root){
    if(root == nullptr){
        return 0;
    }
    //Return 1 for each leaf
    if(root->left == nullptr && root->right == nullptr){
            return 1;
        }
    //Add total leaves
    return CountLeaves(root->left) + CountLeaves(root->right);    
    
}
//Print each leaf node
void PrintLeafNodes(Node *root){
    //If null return
    if(!root)
        return;
    //Check if node is a leaf node and print data
    if(!root->left && !root->right){
        std::cout << root->data << " ";
        return;
    }
    //Check for left child
    if(root->left)
        PrintLeafNodes(root->left);
    //Check for right child
    if(root->right)
        PrintLeafNodes(root->right);
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

    std::cout << "Total Leaves" << "\n";
    std::cout << CountLeaves(root) << "\n";
    std::cout << "-----------------------\n";

    PrintLeafNodes(root);
 
    return 0;

}