
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

public class Solution {
    public int maxDepth(TreeNode root) {
       
        if (root == null) {
            return 0;
        }
        
       
        int leftDepth = maxDepth(root.left);
        int rightDepth = maxDepth(root.right);
        
        
        return Math.max(leftDepth, rightDepth) + 1;
    }
}

Input
root =
[3,9,20,null,null,15,7]
Output
3
Expected
3
