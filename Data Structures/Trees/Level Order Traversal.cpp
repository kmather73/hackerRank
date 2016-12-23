
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
#include <queue> 
using namespace std;
void LevelOrder(node * root){
    queue<node*> nodes; nodes.push(root);
    while(nodes.size()){
        node* tmp = nodes.front(); nodes.pop();        
        
        if(tmp != nullptr){
            cout << tmp->data << " ";
            nodes.push( tmp->left); nodes.push(tmp->right);
        }
    }
}
