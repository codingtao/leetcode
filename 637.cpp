/*
在使用层序遍历，为了知道每一层的元素个数，插入nullptr(或NULL)，
遍历到该值，说明，该层遍历结束，可以进行处理（求平均值等）
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>dvec;
        queue<TreeNode *>q;
        q.push(root);
        q.push(NULL);
        double sum =0;
        int cnt = 0;
        
        while(!q.empty()){
            TreeNode *cur = q.front();
            q.pop();
            
            if(cur == NULL){
                dvec.push_back(sum/cnt);
                sum=cnt=0;
                if(!q.empty())
                    q.push(NULL);
            }
            else{
                sum +=cur->val;
                cnt++;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);            
            }
        }
        return dvec;
    }
};