# Problem

## Description

Finish ```void List::print()``` ```int List::popFront()``` 

## Code Description
1. class Node
2. class List (Linked List):
  * public member: ```Node *head```
  * public function ```void pushFront(int)``` ```void print()``` ```int popFront()```

## Input

輸入一個整數 ```N >= 0``` 
<br>
接下來輸入 ```N``` 個數，pushFront 到 Linked List

## Output

每做一次 popFront()，就印出 Linked List (格式詳見 sample output)
<br>
將所有 popFront() 的回傳值印出

### Sample Input 1

0

### Sample Output 1

NULL
-1

### Sample Input 2

5
<br>
6 3 7 2 9

### Sample Output 2

9 -> 2 -> 7 -> 3 -> 6 -> NULL
<br>
2 -> 7 -> 3 -> 6 -> NULL
<br>
7 -> 3 -> 6 -> NULL
<br>
3 -> 6 -> NULL
<br>
6 -> NULL
<br>
NULL
<br>
9 2 7 3 6 -1
