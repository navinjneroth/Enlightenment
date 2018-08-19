/* ACCEPTED */

#include <vector>
#include "TreeHelper.h"
using namespace std;


class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
    
        vector<vector<int>> matchingPaths;
        vector<int> currentPath;

        findPathSums(root, sum, matchingPaths, currentPath, 0);

        return matchingPaths;
    }

private:
  void findPathSums(TreeNode *root, int sum, vector<vector<int>> &matchingPaths, vector<int> currentPath, int currentSum)
  {
      if (root == nullptr)
      {
          return;
      }

      currentPath.push_back(root->val);

      if (root->left == nullptr && root->right == nullptr)
      {
          if (sum == currentSum + root->val)
          {
              matchingPaths.push_back(currentPath);
          }
      }
      else
      {
          findPathSums(root->left, sum, matchingPaths, currentPath, currentSum + root->val);
          findPathSums(root->right, sum, matchingPaths, currentPath, currentSum + root->val);
      }
  }
};

int main()
{
    TreeCreate tree;
    TreeNode* root = tree.CreateTree();

    Solution soln;
    
    vector<vector<int>> pathSums = soln.pathSum(root, 4);

    for(unsigned int i = 0; i < pathSums.size(); i++)
    {
        vector<int> path = pathSums.at(i);
        
        for(unsigned int j = 0; j < path.size(); j++)
        {
            int val = path.at(j);
        }
    }

    return 0;
}

