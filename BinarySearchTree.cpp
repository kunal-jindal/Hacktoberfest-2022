// While programming in C or C++, including the header file in beginning is always a good idea ;)
#include<bits/stdc++.h>

// Include this statement as you are going to use cin & cout
using namespace std;

// This will be our structure for BST node, you can use class as well
struct node{
    node* left;
    int data;
    node* right;
};

// T_Insert here simply means Tree Insert, it is the method for insertion in BST
void T_Insert(node** root, int a){
    if(root == NULL){
        node* newnode = new node;
        newnode->data = a;
        newnode->left = newnode->right = NULL;
        (*root) = newnode;
    }
    else if((*root)->data < a){
        T_Insert(&((*root)->right), a);
    }
    else if((*root)->data > a){
        T_Insert(&((*root)->left), a);
    }
}

// This function prints the inorder traversal of our BST, i.e., sorted result
void Inorder(node* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

// I hope you can figure out main() on your own, anyway, I have some demo inputs done...
int main(){
    node* root;
    int a = 10;
    int b = 11;
    int c = 9;

    T_Insert(&root, a);
    T_Insert(&root, b);
    T_Insert(&root, c);

    Inorder(root);

    return 0;
}
