class MaxValBinaryTree {

    static int MaxInTree(Node root) {
        if(root == null)
            return Integer.MIN_VALUE;
        int curr = root.data;
        int leftMax = MaxInTree(root.left);
        int rightMax = MaxInTree(root.right);

        curr = Math.max(curr, leftMax);
        curr = Math.max(curr, rightMax);

        return curr;
    }
    static int MinInTree(Node root) {
        if(root == null)
            return Integer.MAX_VALUE;
        int curr = root.data;
        int leftMax = MinInTree(root.left);
        int rightMax = MinInTree(root.right);

        curr = Math.min(curr, leftMax);
        curr = Math.min(curr, rightMax);

        return curr;
    }
    public static void main(String[] args) {
        Node root = new Node(10);
        root.left = new Node(20);
        root.right = new Node(30);
        root.left.left = new Node(5);
        root.left.right = new Node(24);
        root.right.left = new Node(12);
        root.right.right = new Node(23);

        System.out.println(MaxInTree(root));
        System.out.println(MinInTree(root));
    }
}
class Node{
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}