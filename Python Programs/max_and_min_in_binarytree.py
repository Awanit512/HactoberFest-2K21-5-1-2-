class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

INF = 1000000000000

def max_value_in_tree(root: Node) ->int:
    if root is None:
        return -INF
    curr = root.data
    left_min = max_value_in_tree(root.left)
    right_min = max_value_in_tree(root.right)

    curr = max(curr, left_min)
    curr = max(curr, right_min)
    
    return curr

def min_value_in_tree(root: Node) ->int:
    if root is None:
        return INF
    curr = root.data
    left_min = min_value_in_tree(root.left)
    right_min = min_value_in_tree(root.right)

    curr = min(curr, left_min)
    curr = min(curr, right_min)
    
    return curr

def main():
    root = Node(10)
    root.left = Node(20)
    root.right = Node(30)
    root.left.left = Node(5)
    root.left.right = Node(24)
    root.right.left = Node(12)
    root.right.right = Node(23)

    print(max_value_in_tree(root))
    print(min_value_in_tree(root))

main()