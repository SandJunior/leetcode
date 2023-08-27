# Sandro Frizon Junior (M1) - Leetcode 671. Second Minimum Node In a Binary Tree

Given a non-empty special binary tree consisting of nodes with the non-negative value, where each node in this tree has exactly two or zero sub-node. If the node has two sub-nodes, then this node's value is the smaller value among its two sub-nodes. More formally, the property root.val = min(root.left.val, root.right.val) always holds.

Given such a binary tree, you need to output the second minimum value in the set made of all the nodes' value in the whole tree.

If no such second minimum value exists, output -1 instead.

## Considerações sobre o código
- O resultado dos dois casos de exemplo do Leetcode dão certo e o código é aceito;
- O primeiro caso consiste na entrada com a árvore [2,2,5,null,null,5,7] e saída de valor 5;
- O segundo caso ocorre quando não há um segundo menor valor na entrada da árvore [2 ,2 , 2], então acaba retornando -1 nesse caso.
- ![image](https://github.com/SandJunior/leetcode/assets/114614503/b9143177-1d31-4c64-a771-e24ffe0efc0f)
