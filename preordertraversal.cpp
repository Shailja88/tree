// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
     Node* left;
    Node* right;
     Node(int v){
        data=v;
        left=right=NULL;
    }
};
void preorder( Node* root,vector<int>&pr){
    if(root==NULL)return;
    pr.push_back(root->data);
    preorder(root->left,pr);
    preorder(root->right,pr);
}

int main() {
    // Write C++ code here
   Node* root=new Node(1);
  root->left=new Node(2);
  root->right=new Node(3);
  root->left->left=new Node(4);
  root->left->right=new Node(5);
  root->left->right->left=new Node(6);
  root->right->left=new Node(7);
  root->right->right=new Node(8);
  root->right->right->left=new Node(9);
  root->right->right->right=new Node(10);
  vector<int>pr;
  preorder(root,pr);
  cout<<"the preorder traversal is ";
  for(int i=0;i<pr.size();i++){
      cout<<pr[i]<<" ";
  }
  
  return 0;
}
