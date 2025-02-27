
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

public class Solution {
    public boolean isValidBST(TreeNode root) {
       
        return isValidBSTHelper(root, Long.MIN_VALUE, Long.MAX_VALUE);
    }
    
    private boolean isValidBSTHelper(TreeNode node, long min, long max) {
        
        if (node == null) {
            return true;
        }
        
        if (node.val <= min || node.val >= max) {
            return false;
        }
        
        return isValidBSTHelper(node.left, min, node.val) && 
               isValidBSTHelper(node.right, node.val, max);
    }
}

Input
root =
[2,1,3]
Output
true
Expected
true
