#include<stdio.h>
#include<stdlib.h>


void SelectionSort(int *arr, int size) {
    int i, j, min = 0;
    for (i = 0; i < size; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

int main(){
    FILE *fp ;
    FILE *fn;
    fn = fopen("new.txt","w");
    fp = fopen("doc.txt","r");
    int arr[100];
    int count = 0;
    int data;
    while(fscanf(fp,"%d",&data) == 1){
        arr[count] = data;
        count ++;
    }
    SelectionSort(arr,count);
    for(int i =0 ; i< count ; i++){
        fprintf(fn,"%d \n",arr[i]);
    }
    return 0;
}
/*try the following data as the file content aside
45
12
77
3
98
25
6
51
30
81
15
64
39
90
20
7
56
8
71
34
2
88
59
18
27
42
63
10
78
23
50
69
35
94
28
66
19
73
5
84
47
14
61
31
80
21
55
9
76
*/
