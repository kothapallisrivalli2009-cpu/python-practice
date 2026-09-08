//read and dispaly 5 elements of an array
/* #include <stdio.h>
int main()
{int i,n,arr[100];
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("arr[%d]=",i);
scanf("%d",&arr[i]);
    }
printf("the array elements are\n");
for(i=0;i<n;i++)
printf("\t%d",arr[i]);
    
}*/

//find the sum of the all the elements in an array
/* #include<stdio.h>
int main()
{
    int i,arr[20],n,sum=0;
    printf("enter  the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
printf("total sum %d\n",sum);
return 0;
} */

//finding average of all elements
/* #include<stdio.h>
int main()
{
    int i,arr[20],n,avg,sum=0;
    printf("enter  the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        avg=sum/n;
    }
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
printf("total avg %d\n",avg);
return 0;
}  */

//find the largest element in an array
/* #include<stdio.h>
int main()
{int i,large,n,c[100];
    printf("enter the number of eleme:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("c[%d]=",i);
    scanf("%d",&c[i]);}
    large=c[0];
    for(i=0;i<n;i++){
    if(c[i]>large)
        large=c[i];}
        printf("the largest num is=%d",large);
    } */

//find the smallest element in an array
/* #include<stdio.h>
int main()
{int i,small,n,c[100];
    printf("enter the number of eleme:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("c[%d]=",i);
    scanf("%d",&c[i]);}
    small=c[0];
    for(i=0;i<n;i++){
    if(c[i]<small)
        small=c[i];}
        printf("the smallest num is=%d\n",small);
    } */

 //count the number of even and odd elements in an array   
/* #include<stdio.h>
int main()
{int i,n,c[100],even=0,odd=0;
    printf("enter the number of eleme:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("c[%d]=",i);
    scanf("%d",&c[i]);}
    for(i=0;i<n;i++){
        if(c[i]%2==0)
    even++;
else
odd++;
    }
    printf("number of even numbers=%d\n",even);
    printf("Number of odd numbers=%d\n",odd);
    
    } */

//count the number of positive,negative,zeros in an array
/* #include<stdio.h>
    int main()
    {int i,n,c[100],positive=0,negative=0,zero;
        printf("enter the number of eleme:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {printf("c[%d]=",i);
        scanf("%d",&c[i]);}
        for(i=0;i<n;i++){
            if(c[i]>0)
        positive++;
    else if(c[i]<0)
    negative++;
else
zero++;
        }
        printf("number of positive numbers=%d\n",positive);
        printf("Number of negative numbers=%d\n",negative);
        printf("number of zeros=%d\n",zero);
        } */

//print all the elements of an array in reverse order
/* #include<stdio.h>
int main()
{int i,n,c[100],positive=0,negative=0,zero;
printf("enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("c[%d]=",i);
scanf("%d",&c[i]);}
for(i=n;i>=0;--i)
{printf("\t%d",c[i]);}
} */

//copy all elements of an array into another array
    /* #include <stdio.h>
    int main()
    {int i,a[5],b[5];
        printf("enter 5 elements:");
        for(i=0;i<5;i++)
        {
    scanf("%d",&a[i]);
        }
        for(i=0;i<5;i++)
        {
    b[i]=a[i];
        }
        printf("first array:");
        for(i=0;i<5;i++){
        printf("%d\n",a[i]);
        }
        printf("second array:");
        for(i=0;i<5;i++){
        printf("%d\n",b[i]);
        } 
        return 0;
    }*/

//find the sum of even elements and sum of odd elements
/* #include<stdio.h>
int main()
{int i,n,a[100],even_sum=0,odd_sum=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
 {even_sum=even_sum+a[i];}
else
{odd_sum=odd_sum+a[i];}
}
printf("even sum=%d\n",even_sum);
printf("odd sum=%d\n",odd_sum);
} */

//search for am element in an array and print its position
/* #include<stdio.h>
int main()
{
    int i,n,a[100],key,found=0;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("a[%d]=",i);
       scanf("%d",&a[i]);
    }
    printf("enter the element you want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
    if(a[i]==key){
    printf("the element is found at the position %d %d\n",key,i+1);
found=1;
break;}
    }
    if(found==0)
    printf("the element doesnt found:");
return 0;
}
 */
//search for an element and print its index
/* #include<stdio.h>
int main()
{
    int i,n,a[100],key,found=0;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("a[%d]=",i);
       scanf("%d",&a[i]);
    }
    printf("enter the element you want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
    if(a[i]==key){
    printf("the element is found at the position %d %d\n",key,i);
found=1;
break;}
    }
    if(found==0)
    printf("the element doesnt found:");
return 0;
} */

//count how many times a given element occurs in an array
/* #include<stdio.h>
int main()
{
    int i,n,a[100],key,count=0;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("a[%d]=",i);
       scanf("%d",&a[i]);
    }
    printf("the element you want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
        count++;}
    }
    printf("the given element repeats%d:",count);
    return 0;
}
 */

 //find the first occurence of an element
 /* #include<stdio.h>
int main()
{
    int i,n,a[100],key,count=0;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("a[%d]=",i);
       scanf("%d",&a[i]);
    }
    printf("the element you want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
    printf("the given element occured at the index position%d\n:",i);
break;}
    }
    return 0;
} */

//find the last occurence of an element
/* #include<stdio.h>
int main()
{
    int i,n,a[100],key,count=0,k;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("a[%d]=",i);
       scanf("%d",&a[i]);
    }
    printf("the element you want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
        k=i;
}
    }printf("the last occurence of an element%d:",k);

    return 0;
}  */

//print all elements that occur more than once
#include<stdio.h>
int main()
{
    int i,n,a[100],key,count=0,j;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("a[%d]=",i);
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        key=a[i];
        count=0;
        for(j=0;j<n;j++){
        if(a[j]==key)
        count++;}
    if(count>1)
    {printf("%d",key);
    }}
        return 0;
}
