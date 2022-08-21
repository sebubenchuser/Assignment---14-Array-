                                                //Assignment - 14(Array) (completed)



/*1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
    array values from the user.*/

    #include<stdio.h>
    int main()
    {
        int a[10],sum=0,i;
        printf("Enter 10 numbers");
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<10;i++)
        {
            sum=sum+a[i];
        }
        printf("sum of 10 numbers%d",sum);
    }

/*2. Write a program to calculate the average of numbers stored in an array of size 10.
     Take array values from the user.*/

     /*#include<stdio.h>
     int main()
     {
         int a[10],sum=0, i;
         printf("Enter 10 numbers");
         for(i=0;i<10;i++)
         {
             scanf("%d",&a[i]);
         }
         for(i=0;i<10;i++)
         {
             sum=sum+a[i];
         }
         printf("average of numbers is =%f",sum/10.0);
         return 0;
     }*/

/*3. Write a program to calculate the sum of all even numbers and sum of all odd
     numbers, which are stored in an array of size 10. Take array values from the user.*/

     /*#include<stdio.h>
     int main()
     {
         int a[10],even_sum=0,odd_sum=0;
         printf("Enter 10 numbers");
         for(int i=0;i<10;i++)
         {
             scanf("%d",&a[i]);
         }
         for(int i=0;i<10;i++)
         {
             if(a[i]%2==0)
             {
                 even_sum=even_sum+a[i];
             }
             else
             odd_sum=odd_sum+a[i];
         }
         printf("Sum of all even number is=%d\n",even_sum);
         printf("Sum of all odd number is=%d",odd_sum);
     }*/


/*4. Write a program to find the greatest number stored in an array of size 10. Take array
     values from the user.*/

     /*#include<stdio.h>
     int main()
     {
         int a[10],greater;
         printf("Enter 10 number");
         for(int i=0;i<10;i++)
         {
             scanf("%d",&a[i]);
         }
         greater=a[0];
         for(int i=1;i<10;i++)
           {
               if(greater<a[i])
               {
                   greater=a[i];
               }
           }
           printf("Greater number is %d",greater);
     }*/


/*5. Write a program to find the smallest number stored in an array of size 10. Take array
   values from the user.*/

   /*#include<stdio.h>
   int main()
   {
       int a[10],smallest;
       printf("Enter 10 numbers");
       for(int i=0;i<10;i++)
       {
           scanf("%d",&a[i]);
       }
       smallest=a[0];
       for(int i=1;i<10;i++)
       {
           if(smallest>a[i])
           smallest=a[i];
       }
       printf("Smallest number is=%d",smallest);
   }*/

/*6. Write a program to sort elements of an array of size 10. Take array values from the user.*/

    /*#include<stdio.h>
    int main()
    {
        int a[10],i,j,temp;
        printf("Enter 10 numbers");
        for(int i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<10;i++)
        {
            for(j=0;j<10-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("sorted array is ");
        for(i=0;i<10;i++)
        {
        printf("%d ",a[i]);
        }
    }*/


//7. Write a program to find second largest in an array.Take array values from the user.

   /* #include<stdio.h>
    int main()
    {
        int a[10],i,temp,j=1;
        printf("Enter 10 numbers");
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<10;i++)
        {
           for(j=0;j<10-1-i;j++)
           {
               if(a[j]<a[j+1])
               {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
               }
           }
        }
        for(i=0;i<10;i++)
        {
            if(a[i]!=a[i+1])
            {
            break;
            }
        }
        printf("Second largest element is=%d",a[i+1]);
    }*/


/*8. Write a program to find the second smallest number in an array.Take array values
     from the user.*/

     /*#include<stdio.h>
     int main()
     {
         int a[10],j,second_smallest,i,temp;
         printf("Enter 10 numbers");
         for(i=0;i<10;i++)
         {
             scanf("%d ",&a[i]);
         }
         for(i=0;i<10;i++)
         {
             for(j=0;j<10-1-i;j++)
             {
                 if(a[j]>a[j+1])
                 {
                     temp=a[j];
                     a[j]=a[j+1];
                     a[j+1]=temp;
                 }
             }
         }
         for(i=0;i<10;i++)
         {
             if(a[i]!=a[i+1])
             break;
         }

         printf("Second smallest element is %d",a[i+1]);
     }*/


/*9. Write a program in C to read n number of values in an array and display it in reverse
     order. Take array values from the user.*/

     /*#include<stdio.h>
     int main()
     {
         int a[20],n,i;
         printf("Enter a number to how many element want in array");
         scanf("%d",&n);
         printf("Enter array element");
         for(i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
         }
         for(i=n-1;i>=0;i--)
         {
             printf("%d ",a[i]);
         }
         return 0;
     }*/

/*10. Write a program in C to copy the elements of one array into another array.Take array
     values from the user.*/

    /* #include<stdio.h>
     int main()
     {
         int a[10],n,i,a1[10];
         printf("Enter 10 numbers");
         for(i=0;i<10;i++)
         {
             scanf("%d",&a[i]);
         }
         for(i=0;i<10;i++)
         {
             a1[i]=a[i];
         }
         for(i=0;i<10;i++)
         {
         printf("%d ",a1[i]);
         }
         return 0;
     }*/


