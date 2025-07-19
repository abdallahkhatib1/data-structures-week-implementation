# data-structures-week-implementation
# Language Used
- C++

# Source
Based on:  
Data Structures - Easy to Advanced Course – Full Tutorial from a Google Engineer
# YouTube: https://www.youtube.com/watch?v=RBSGKlAvoiM

# day-1 Codes 

## - Dynamic Arrays : An array that grows automatically when it gets full. You can access items quickly and add new ones easily.
-- push(value) – O(1) 
-- pop() – O(1)
-- get(index) – O(1)
-- print() – O(n)

  
## - Singly Linked List : A list where each item points only to the next one. You can add or remove items easily, one by one.
-- Inserting a node at a specific position – O(n)
-- Deleting a node by value – O(n)
-- Printing the list – O(n)

    
## - Stack using array : A simple structure where items are added and removed from the top. It follows the Last-In-First-Out (LIFO) rule and uses a fixed-size array.
-- push(value) – O(1)
-- pop() – O(1)
-- print() – O(n)

  
## - Stack using linked list : A stack made with nodes. You always add and remove from the top, and there’s no fixed size.
-- push(value) – O(1)
-- pop() – O(1)
-- print() – O(n)


# Day-2 Codes 
## - Queue using array : A simple structure where you add items at the end and remove from the front. It uses a fixed-size array.
-- enqueue(value) – O(1)
-- dequeue() – O(1)
-- display() – O(n)


## - Queue using linked list : A queue that uses nodes instead of an array. You can add and remove items without worrying about size limits.
-- enqueue(value) – O(1)
-- dequeue() – O(1)
-- display() – O(n)


## - Doubly Linked List : A list where each item points to both the next and the previous item. You can move forward or backward through the list.
-- addFirst(value) – O(1)
-- addLast(value) – O(1)
-- removeFirst() – O(1)
-- removeLast() – O(1)
-- printForward() – O(n)
-- printBackward() – O(n)
-- isEmpty() – O(1)
-- getSize() – O(1)


## - Circular Linked List : A list where the last item connects back to the first. You can keep going around the list in a circle.
-- addFirst(value) – O(1)
-- addLast(value) – O(1)
-- removeFirst() – O(1)
-- display() – O(n)
-- isEmpty() – O(1)


# Day-3 Codes


## -Binary Tree : A tree where each node has at most two children (left and right). No specific ordering between values.
--inorder() - O(n)
-- preorder() – O(n)
-- postorder() – O(n)
-- Node(int value) – O(1)


## -Binary Search Tree : A binary tree with ordering: left < root < right
-- insert() – O(log n) average, O(n) worst
-- inorder() – O(n)
-- BSTNode(int value) – O(1)

# Day-4 Codes

## - Hash Table : A data structure that maps keys to values using a hash function with collision handling (separate chaining)
-- put(key, value) – O(1) average, O(n/k) worst
-- get(key) – O(1) average, O(n/k) worst
-- remove(key) – O(1) average, O(n/k) worst
-- display() – O(n)

## - Min Heap : A complete binary tree where the parent is always smaller than its children
-- insert(value) – O(log n)
-- extractMin() – O(log n)
-- peek() – O(1)
-- display() – O(n)

## - Graph (Adjacency List) : A graph represented using an unordered map of lists for each node
-- addEdge(u, v) – O(1)
-- removeEdge(u, v) – O(k) where k is number of neighbors
-- printGraph() – O(V + E)

## - Trie : A tree-like structure to store words character by character  
-- insert(word) – O(L)  
-- search(word) – O(L)  
-- startsWith(prefix) – O(L)  
L is the length of the word or prefix

## - Union-Find (Disjoint Set) : A structure to track connected components  
-- find(x) – O(α(N))  
-- unite(x, y) – O(α(N))  
-- connected(x, y) – O(α(N))  
α(N) is the inverse Ackermann function

## - Graph (Adjacency List) : A graph represented using a vector of lists for each node  
-- addEdge(u, v) – O(1)  
-- depthFirstSearch(startVertex) – O(V + E)  
-- breadthFirstSearch(startVertex) – O(V + E)  
-- resetVisited() – O(V)





