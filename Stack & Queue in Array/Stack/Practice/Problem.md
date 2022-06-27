# Problem 

## Description

Finish the 2 constructor and 4 function of ```class Stack```

---

## Input

第一行有一個整數 ```N```，代表接下來有 ```Ｎ``` 筆資料將被推進去 ```Stack```
<br>
接下來有 ```N``` 行，每行包含一組資料
<br>
> ```op``` = 1 時，一組資料為兩個整數 ```op``` ```data```
> <br>
> ```op``` = 1 代表 ```data``` 要被推進 ```Stack```
> 
> ```op``` = 0 時，一組資料為一個整數 ```op```
> <br>
> ```op``` = 0 ```Stack``` 頂部資料 要被推出

---

## Output
印出 ```Stack``` 中存的資料

---

### Sample Input 1

0

### Sample Output 1

bottom -> top

---

### Sample Input 2

5<br>
1 3<br>
1 4<br>
0 <br>
0<br>
1 5<br>

### Sample Output 2

bottom -> 5 -> top

---

### Sample Input 3

6<br>
1 3<br>
1 4<br>
0 <br>
0<br>
1 5<br>
0<br>

### Sample Output 3

bottom -> top
