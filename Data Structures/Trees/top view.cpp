/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root){
    map<int, int> topview;
    queue<int> pos; pos.push(0);
    queue<node*> nodes; nodes.push(root);
    while(nodes.size()){
        node* tmp = nodes.front(); nodes.pop();
        int cpos = pos.front(); pos.pop();
        
        if(tmp != nullptr){
            if(!topview.count(cpos)) topview[cpos] = tmp->data;
            pos.push(cpos-1); pos.push(cpos+1);
            nodes.push( tmp->left); nodes.push(tmp->right);
        }
    }
    
    for(const auto& x : topview){
        cout << x.second << " ";
    }
}
