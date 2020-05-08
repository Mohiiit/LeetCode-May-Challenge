class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
       if(root==NULL)
       {
           return false;
       }
       int parx = 0;
       int pary = 0;
       queue<pair<TreeNode*, int>>q;
       q.push(make_pair(root, root->val));
       while(!q.empty())
       {
           int num = q.size();
           parx = 0;
           pary = 0;
           while(num)
           {
               pair<TreeNode*, int> curr = q.front();
               q.pop();
               if(curr.first->val==x)
               {
                   parx = curr.second;
               }
               if(curr.first->val==y)
               {
                   pary = curr.second;
               }
               if(curr.first->left)
               {
                   q.push(make_pair(curr.first->left, curr.first->val));
               }
               if(curr.first->right)
               {
                   q.push(make_pair(curr.first->right, curr.first->val));
               }
               num--;
               cout<<parx<<" "<<pary<<endl;
               if(parx!=0 && pary!=0)
               {
                   break;
               }
               
           }
           if(parx!=0 && pary!=0 && parx!=pary)
           {
               return true;
           }
       }
       return false;
    }
};
