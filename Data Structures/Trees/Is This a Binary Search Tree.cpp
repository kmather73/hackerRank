The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
void f(Node* root, int& max, int& min, bool& valid){
    if( (root->left == nullptr && root->right == nullptr )|| !valid){
      min = max = root->data;  
      return;
    }
    
    int lMax, lMin;
    int rMax, rMin;
    
    rMax = lMax = lMin = rMin = root->data;
    bool lValid=true, rValid=true;
    
    f(root->left, lMax, lMin, lValid);
    f(root->right, rMax, rMin, rValid);
    
    if(!lValid || !rValid || lMax >= root->data || rMin <= root->data){
        valid = false;
        return;
    }
    
    max = std::max(root->data, rMax);
    min = std::min(root->data, lMin);
}

bool checkBST(Node* root) {
    bool valid = true;
    int mi, mx;
       
    f(root, mx, mi, valid);
    return valid;
}
