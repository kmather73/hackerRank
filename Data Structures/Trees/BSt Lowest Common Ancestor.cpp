/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2) {

    while(true){
        if(root->data < v1 && root->data < v2){
            root = root->right;
        } else if(root->data > v1 && root->data > v2){
            root = root->left;
        } else{
            return root;
        }
    }
}
