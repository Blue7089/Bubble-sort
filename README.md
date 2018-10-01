# Bubble-sort
>Bubble sort is an sorting algorithem. In simpe term,It is setting up right order of array.More detail you can read about on wiki.
```
https://en.wikipedia.org/wiki/Bubble_sort

```
>I was asked by  interviewer this bubble sort alogrithm many times and find missing and greatest and smallest number from array or vector.So i wrote this small piece of code for beginner and explantion of this code.How it works? 

For example,
```
int number[8]= {1,3,6,6,2,1,7,8};
```
>we have array of interger and values of array integer is in random order.which we have to fix and make it in ascending order.
Algorithem which is used for fix this is known as Bubble sort.How do we do it?

>In order to do it, we used swap function to swap their position into right place and another thing is two compare value of two arrrays.Below i have done it this function.I didn't use swap function instead i wrote my own way.

```
        for(i=0; i<8; ++i)
        {
         if(number[i]>number[i+1])
         {
         int help=number[i];
         number[i]=number[i+1];
         number[i+1]=help;
         }
        }
  ```
 ## Gretest and Smallest missing number
 >In above example, in array we are missing digit 5. so how we will find that number or how we will find greatest missng number.To find that number i have written small piece of code below.
 ```
 for(i=0;i<8;i++)
  {

     if(number[i+1]>number[i] && abs(number[i]+1)!=abs(number[i+1]))
     {int z=number[i+1]-1;}

  }
 ```
 >So what we have done here that compare the absoule value and stored in "z" which is returning 5 which is missing and Now to find smallest number we will change only in equation int z instead of that,
 
 ```
 int z=number[i]+1;
 
 ```
 >This changes will return number 4 which is smallest missing number.
 
 # conclusion
 >To conclude,i have shown above piece of code of bubble sort algorithem and finding greatest and smallest number.In all of that we should keep one thing in mind that is quality of code.If you have better solution comment below.
 >Thank you so much. 
