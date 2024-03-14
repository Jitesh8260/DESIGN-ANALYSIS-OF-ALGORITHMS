#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void mergeSort(int [],int,int);
void merge(int [],int,int,int);
int main(){
	clock_t start,end;
	double time_used;
	int sz = 1000000;
	int randArray[sz];
	int l=0;
	int r=sz-1;
	srand(time(0)); 
	for(int i=0; i<sz; i++) {
        randArray[i] = rand() % 100; 
    }
	for(int i=0; i<1000000; i++) {
        printf("Elements no %d::%d\n", i+1, randArray[i]);
    }
	start = clock();
	mergeSort(randArray,l,r);
	end = clock();
	time_used=(double)(end-start) / CLOCKS_PER_SEC;
	printf("Time Used = %f",time_used);
	return 0;
}
void merge(int randArray[], int l, int m, int r)
{
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;
        int L[n1], R[n2];

        for (i = 0; i < n1; i++)
                L[i] = randArray[l + i];
        for (j = 0; j < n2; j++)
                R[j] = randArray[m + 1 + j];
        k = l;
        while (i < n1 && j < n2) {
                if (L[i] <= R[j]) {
                        randArray[k] = L[i];
                        i++;
                }
                else {
                        randArray[k] = R[j];
                        j++;
                }
                k++;
        }
        while (i < n1) {
                randArray[k] = L[i];
                i++;
                k++;
        }
        while (j < n2) 
                randArray[k] = R[j];
                j++;
                k++;
        }
void mergeSort(int randArray[], int l, int r)
{
        if (l < r) {
                int m = l + (r - l) / 2;
                mergeSort(randArray, l, m);
                mergeSort(randArray, m + 1, r);

                merge(randArray, l, m, r);
        
}
}

