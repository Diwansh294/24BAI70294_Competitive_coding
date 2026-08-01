class Solution {
  public:
    
    int inOrderSuccessor(Node *root, Node *x) {
    
        int val=x->data;
        int ans=-1;
        if(root==NULL){
            return ans;
        }
        while(root){
            if(root->data<=val){
                root=root->right;
            }
            else{
                ans=root->data;
                root=root->left;
            }
        }
        return ans;
    }
};
