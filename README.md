The above code implements 4 type of sorting algorithms ,
those being:
1:Bubble sort-this is the most basic and brute force way to sort an array.
in this we iterate through every element and compare it with all the next elements to see if any of them is smaller than it,
if it is there ,we swap the place of these 2 indices.
the above code takes O(n^2) time complexity as we are using 2 loops and O(1) space complexity as no extra space is used.

2:selection sort-in this approach we iterate through every element and check whats the smallest elements index,we then swap the place of the curent index and 
smallest index eventually sorting the entire array.
the code takes O(n^2) time complexity as we are using 2 loops and O(1) space complexity as no extra space is used.it performs similar to bubble sort.

3:insertion sort-in this approach,we iterate through every elemntand try to put it at its correct spot in the array by swapping the consecutive elements.
the code takes O(n^2) time complexity as we are using 2 loops and O(1) space complexity as no extra space is used.its performance is similar to bubble sort and selection sort .

4:merge sort-this is the fastest sorting algorithm ,in this we first divide the array into its smallest component ,and then merge 2 arrays while sorting them simiultaneously.
the code takes O(nlogn)time complexity as we are dividing the array log n times .
the only downside is that it takes O(n) extra space .
