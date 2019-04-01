Arrays
===========

The Basics
----------
Arrays are one of the simplest data structures second only to variables. Arrays are declared like any other variable, but can be initialized in three different ways. However, arrays are generally declared and initialized in the first two ways.

```js
let arr = [];
let arr2 = [1, 2, 3];
let arr3 = new Array();
```

Arrays can be filled with any data type: booleans, strings, numbers, etc.. Each item is the array is referred to as an ***element*** of the array. ***Each element in an array is given an index beginning from the number 0.*** ```[]``` are used to access an element of the array by its index. Calling ```arr.length``` returns the number of elements in the array, also known as its size.

```js
let arr = [1, 2, 3];
console.log(arr.length) // outputs 3
x = arr[0]; // x is 1
y = arr[arr.length - 1] // y is 3
```

The two essential methods of arrays are:
* ```push(x)``` - adds x to the end of the array and returns the new size
* ```pop()``` - removes and returns the last element in the array
