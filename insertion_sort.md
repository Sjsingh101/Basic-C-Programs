**Insertion_Sort**
<br><br>
Insertion sort is the sorting mechanism where the sorted array is built having one item at a time. The array elements are compared with each other sequentially and then arranged simultaneously in some particular order. The analogy can be understood from the style we arrange a deck of cards. This sort works on the principle of inserting an element at a particular position, hence the name Insertion Sort.
<br><br>
Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.
<br><br>
##Time Complexity: O(n*2)
<br><br>
**Pseudo Code** <br>
for(i=1;i<n;i++){                                   //outer loop  <br>
        for(j=i; j>0 && arr[j-1]>arr[j]; j--){      //comparing adjacent numbers and if the sequential number is greater, then swap to arrange the numbers in ascending order       <br>
            temp = arr[j-1];                 <br>        
            //swapped arr[j] and arr[j-1]    <br>
            arr[j-1] = arr[j];               <br>
            arr[j] = temp;                   <br>
        }
    }
    <br><br>
**Code Explaination:**
User first enters the number of elements of the array.
In the first *for loop* we are taking input of array elements from the user.
<br><br>
Then in the next *for loop*, the first step involves the comparison of the element with its adjacent element.
And if at every comparison reveals that the element can be inserted at a particular position, then space is created for it by shifting the other elements one position to the right and inserting the element at the suitable position.
The above procedure is repeated until all the element in the array is at their apt position.
<br><br>
In the last *loop* we are printing the array which is now sorted.
<br><br>
Hence, you get the desired output.
