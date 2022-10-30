class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if(!p && !q) return true;
        // if((!p && q) || (!q && p)) return false;
        // if(p-> val != q-> val) return false;
        // return isSameTree(p-> left, q->left) && isSameTree(p->right, q->right);
        if(!p||!q)return (p==q);
        return (p->val==q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};