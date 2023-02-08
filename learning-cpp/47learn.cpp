#include <bits/stdc++.h>
using namespace std;

// TOPIC : Binary tree

class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){
    int d;
    cin>>d;
    if(d == -1){
        return NULL;
    }
    Node* root = new Node(d);
    cout<<"Enter left child of "<<d<<endl;
    root->left = buildTree();
    cout<<"Enter right child of "<<d<<endl;
    root->right = buildTree();

    return root;
}

Node* buildTreeLevelOrder(){
    int d;
    cin>>d;

    Node* root = new Node(d);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        int l, r;
        cin>>l>>r;

        if(l!= -1){
            Node* left = new Node(l);
            q.push(left);
            temp->left = left;
        }
        else{
            temp->left = NULL;
        }

        if(r!= -1){
            Node* right = new Node(r);
            q.push(right);
            temp->right = right;
        }
        else{
            temp->right = NULL;
        }

    }

    return root;

}

void printTree(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}

void levelOrderTreversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* space = new Node(-1);
        Node* temp = q.front();
        q.pop();

        if(temp && temp->data == -1){
            cout<<" ";
        }
        else if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<< temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        else{
           q.push(space); 
        } 
        if(temp->right){
            q.push(temp->right);
        }
        else{
            q.push(space);
        }
        }


    }
}

void reverseOrder(Node* root){
    queue<Node*> q;
    vector<vector<int>> ans;
    vector<int> level;

    q.push(root);

    while(!q.empty()){
        Node* empty = new Node(-1);
        Node* temp = q.front();
        q.pop();

        level.push_back(temp->data);

        if(q.empty()){
            ans.push_back(level);
            level.clear();
        }

        if(temp->left){
                q.push(temp->left);
        }
        // else{
        //     q.push(empty);
        // }
        if(temp->right){

            q.push(temp->right);
        }
        // else{
        //     q.push(empty);
        // }

    }    
    reverse(ans.begin(), ans.end());

    for(int i =0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
 
int main(){

    // 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
    // 1 2 3 -1 -1 -1 4 -1 -1 
    Node* root = buildTreeLevelOrder();
    levelOrderTreversal(root);
    reverseOrder(root);
    return 0;
 
}