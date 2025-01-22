# CS121 Project 2
## Bubble Sorting Algorithm
The program is a bubble sorting algorithm and it is expected to sort a preset array of numbers.
### Functions
* printValues
* sort
* swap
### Program
function void printValues(pointer)
function void sort(pointer)
function void swap(pointer, pointer)

function integer main():
  array values = {7, 3, 9, 4, 6, 1, 2, 8, 5}
  print "before: \n"
  printValues(values)

  variable integer x = 3
  variable integer y = 5
  print "x: {x}, y: {y} \n"
  swap(address of x, address of y)
  print "x: {x}, y: {y} \n"

  sort(values)
  print "After: "
  printValues(values)

  return 0

function void printValues(pointer list):
  for integer i from zero if its less than 9, increment i by 1:
    print "list[i]"
  print "\n"

function void swap(pointer px, pointer py):
  integer a = value of px
  value of px = value of py
  value of py = a

function void sort(pointer array):
  create integer MAX = 9
  for i from zero to MAX, increment i by one:
    for j from zero to MAX, increment j by one:
      if array[j] is greater than array[j+1]:
        create variable integer value of p1 = address of array[j]
        create variable integer value of p1 = address of array[j+1]
        swap(p1,p2)
        printValues(array)
