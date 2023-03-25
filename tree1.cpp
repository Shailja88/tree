// Online C++ compiler to run C++ program online
#include <iostream>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    struct Node(int v){
        data=v;
        left=right=null;
    }
}
int main() {
    // Write C++ code here
  struct Node* root=new Node(1);
  root->left=new Node(2);
  root->right=new Node(3);
  root->left->right=new Node(5);
    return 0;
}
