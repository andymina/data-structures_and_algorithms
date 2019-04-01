let arr = [1, 2, 3];
console.log("Original array: ", arr);
console.log();

// Accessing an element
console.log("0th element:", arr[0]);
console.log("Last element: ", arr[arr.length - 1]);

console.log();

// Array.push()
let newSize = arr.push(4);
console.log("Updated arr: ", arr);
console.log("New size: ", newSize);
console.log("Array size: ", arr.length);

console.log();

// Array.pop()
let removedElement = arr.pop();
console.log("Updated arr: ", arr);
console.log("Removed element: ", removedElement);
