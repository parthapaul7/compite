#include <iostream>
using namespace std;
// TOPIC : binary tree 
// tree traversal
class node{
    public: 
        int data;
        node* left;
        node* right;
    
    node(int value = 0){
        data = value;
        left = NULL;
        right = NULL;
    }

};
void preorder(node* root){
        if(root == NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

}
void inorder(node* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

}
void postorder(node* root){
        if(root == NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";

}

int main(){
    node* root = new node(1);
    //level 1;
    root->left = new node(2);
    root->right = new node(3);
    //level 2;
    root->left->left = new node(4);
    root->left->right =new node(5);
    root->right->left = new node(6);
    root->right->right= new node(7);

    cout<<root->right->right->data<<endl;
    postorder(root);
}