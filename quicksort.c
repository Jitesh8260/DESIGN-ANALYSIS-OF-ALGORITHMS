//Program to implement Quick Sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void quicksort(int [],int,int);
int main(){
        clock_t start,end;
        double time_used;
        int sz=100000;
        int randArray[sz];
        int l=0;
        int r=sz-1;
        srand(time(0));
        for(int i=0; i<sz; i++) {
                randArray[i] = rand() % 100;
        }
        start = clock();
        quicksort(randArray,l,r);
        end = clock();
        time_used=(double)(end-start) / CLOCKS_PER_SEC;
        printf("Time Used = %f",time_used);
	time_used=0;
	start = clock();
        quicksort(randArray,l,r);
        end = clock();
        time_used=(double)(end-start) / CLOCKS_PER_SEC;
        printf("Time Used = %f",time_used);
        return 0;
}
void quicksort(int number[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }

}

 
