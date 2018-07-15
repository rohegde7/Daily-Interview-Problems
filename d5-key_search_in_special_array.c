/*
# Author: https://www.github.com/rohegde7 (Rohit Hegde - hegde.rohit7@gmail.com)

# Status: Success

Day 5 Question:

Given an array, the difference between the elements is one, find if the “key” element is present or not.
Example:

Array:
{5, 6, 7, 6, 5, 4, 3, 4, 5, 6}
Key:
4

Output:
The element 4 is found at the index 6.

Difficulty: Easy
Note: This answer can be solved by iterating throught all the array elements as a brute force method. But that answer is not acceptable. Please solve by different logic.

Post your answers in the comment section of the link below. Night I shall provide you with answer.
https://www.prodevelopertutorial.com/given-an-array-the-difference-between-the-elements-is-one-find-if-the-key-element-is-present-or-not/
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int num_elements;    //number of elements
    int i;  //temporary iterable variable
    int key;
    int key_pos = -1;

    printf("Enter the number of elements:\n");
    scanf("%d", &num_elements);

    int arr_numbers[num_elements];  //to store the numbers

    printf("Enter the array elements:\n");
    for(i=0; i<num_elements; i++){
        scanf("%d", &arr_numbers[i]);
    }

/*
    printf("Array elements:\n");
    for(i=0; i<num_elements; i++){
        printf("%d ", arr_numbers[i]);
    }
*/   

    printf("Enter the key:\n");
    scanf("%d", &key);

    /*Now we are gonna iterate through the loop but...
      the increment in 'i' will be equal to the difference between the current element and the key.

      This is so because if current element is 10 and key is 12 then we are sure that
      the key(12) won't be found in the next place as the next element should be either 11 or 9
      according to the question. So we can skip the next element.

      So the key, 12, can be found only in the 2nd place after 10 i.e. if the next element after 10 is 11
      and the next element after 11 is 12. This is the best case.

      So we are sure that the key, 12, won't be found in the next place and it can only be found, in best case,
      in the 'p'th position after the current element, which is the difference between
      the current element and the key to be searched.
    */

    for(i=0; i<num_elements;){

        //printf("Current element: %d\n", arr_numbers[i]);

        if(arr_numbers[i] == key){
            key_pos = i;
            break;
        }

        //i++;
        i = i + abs(arr_numbers[i]-key);
    }

    if(key_pos == -1)
        printf("Not found\n");
    else
        printf("The position of key %d is: %d\n", key, i+1);

    return 0;
}