
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}
public class Solution {
    public boolean isSymmetric(TreeNode root) {
        if (root == null) {
            return true;
        } 
        return isMirror(root.left, root.right);
    }
    
    private boolean isMirror(TreeNode t1, TreeNode t2) {
        if (t1 == null && t2 == null) {
            return true;
        }
        if (t1 == null || t2 == null) {
            return false;
        }
        return (t1.val == t2.val) &&
               isMirror(t1.left, t2.right) && 
               isMirror(t1.right, t2.left);
    }
}

Input
root =
[1,2,2,3,4,4,3]
Output
true
Expected
true
