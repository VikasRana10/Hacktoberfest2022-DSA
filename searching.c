//This file include searching techniques in an array like linear search, binary search both (recusrive & iterative Method)


//(1)
//Linear Search
#include<stdio.h>
struct Array 
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{

}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int LinearSearch(struct Array *arr, int key)
{
   int i;
   for(i=0; i<arr->length; i++)
   {
       if(key==arr->A[i])
       {
           //swap(&arr->A[i],&arr->A[i-1]);  //Transposition Method
           swap(&arr->A[i],&arr->A[0]);    //Move To Head Method
           return i;
       }
   }
   return -1;
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    printf("%d", LinearSearch(&arr,4));
    Display(arr);

}








//(2)
//Binary search(ITERARTIVE METHOD)
#include<stdio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
 int BinarySearch(struct Array arr,int key)
 {
     int L,MID,H;
     L=0;
     H=arr.length-1;

     while (L<=H)
     { 
        MID=(L+H)/2;
        if (key==arr.A[MID])
        {
            return MID;
        }
        else if (key<arr.A[MID])
        {
            H=MID-1;
        }
        else
            L=MID+1;
    }
    return -1;
}











//(3)
// Binary serach(RECURSIVE METHOD)
int RBinSearch(int a[],int l,int h,int key)
{
 int mid=0;
 if(l<=h)
 {
 mid=(l+h)/2;
 if(key==a[mid])
 return mid;
 else if(key<a[mid])
 return RBinSearch(a,l,mid-1,key);
 }
 else
 return RBinSearch(a,mid+1,h,key);
return -1;
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    printf("%d", RBinSearch(arr.A,0,arr.length,5));
    Display(arr);
}











//(4)
//Binary Search in Array 
#include<stdio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
int BinarySearch(struct Array arr,int key)
{
 int l,mid,h;
 l=0;
 h=arr.length-1;
 while(l<=h)
 {
 mid=(l+h)/2;
 if(key==arr.A[mid])
 return mid;
 else if(key<arr.A[mid])
 h=mid-1;
 else
 l=mid+1;
 }
return -1;
}
int RBinSearch(int a[],int l,int h,int key)
{
 
 int mid=0;
 if(l<=h)
 {
 mid=(l+h)/2;
 if(key==a[mid])
 return mid;
 else if(key<a[mid])
 return RBinSearch(a,l,mid-1,key);
 }
 else
 return RBinSearch(a,mid+1,h,key);
return -1;
}
int main()
{
 struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
 printf("%d",BinarySearch(arr1,16));
 Display(arr1);
 return 0;
}
