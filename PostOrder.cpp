#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }

};

void PostOrder(Node* node, vector<int>&res){
    if(node == nullptr)
        return;

    PostOrder(node-> left, res);
    PostOrder(node-> right,res);
    res.push_back(node-> data);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    vector <int> res;
    PostOrder(root, res);
    for(int node: res){
        cout<<node<<" ";
    }
    return 0;
}
