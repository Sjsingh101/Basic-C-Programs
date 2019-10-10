# Quicksort Algorithm

QuickSort is one of the most efficient sorting algorithms and is based on the splitting of an array into smaller ones. The name comes from the fact that quicksort is capable of sorting a list of data elements significantly faster than any of the common sorting algorithms. And like Merge sort, Quick sort also falls into the category of divide and conquer approach of problem-solving methodology.


## Quicksort Visualized

![QC](http://1.bp.blogspot.com/-KusCcLfBuN8/UwSJWF4DdxI/AAAAAAAACF8/OX2KlhfYpdQ/s1600/Quicksort-example.gif)


Quick Sort Algorithm

* If n < = 1, then return.

* Pick any element V in a[]. This is called the pivot.
 
* Rearrange elements of the array by moving all elements xi > V right of V and all elements x­i < = V left of V. If the place of the V after re-arrangement is j, all elements with value less than V, appear in a[0], a[1] . . . . a[j – 1] and all those with value greater than V appear in a[j + 1] . . . . a[n – 1].
 
* Apply quick sort recursively to a[0] . . . . a[j – 1] and to a[j + 1] . . . . a[n – 1].
