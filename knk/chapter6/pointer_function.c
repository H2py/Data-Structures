#include <stdio.h>
#define N (10)

void get_max_min(int arr[], int size, int* out_max, int* out_min)
{
    *out_max = *out_min = arr[0];
    for (int i =0; i < size; i++) 
    {
        if(*out_max < arr[i]) {
            *out_max = arr[i];
        } else if (arr[i] < *out_min) {
            *out_min = arr[i]; 
        }
    }
}

int* get_max(int* left, int* right) {
    if (*left > *right) {
        return left;
    } else {
        return right;
    }
}

void swap(int *p, int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;        
}

/*
When passed an array a of length n, the function will search a for its largest and secondlargest elements,
storing them in the variables pointed to by largest and
second_largest, respectively.
*/

void find_two_largest(int a[], int n, int* largest, int* second_largest) {
    int* p;

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }

    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
    } else {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (p = &a[2]; p < a + n; p++) {
        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest) {
            *second_largest = *p;
        }
    }

}

int main(void)
{
    int b[10] = {34, 82, 49, 102, 7, 94, 23, 11, 50, 31};
    int *p = b;




    printf("%p\n", (void *)p);  
    return 0;
}


/*
| 표현식      | 의미                             |
| -------- | ------------------------------ |
| `*p++`   | `*p`를 읽고 `p`를 다음으로 이동          |
| `(*p)++` | `*p`의 값을 먼저 사용하고, 그 값을 +1      |
| `*++p`   | `p`를 먼저 다음으로 이동하고, 그 다음의 값을 읽음 |
| `++*p`   | `*p`의 값을 먼저 +1                 |
| `*--p`   | `p`를 하나 줄인 후, 그 값을 읽음          |
| `--*p`   | `*p`의 값을 하나 줄임                 |

2. If i is an int variable and p and q are pointers to int, which of the following assignments
are legal?

(a) p = i; (d) p = &q; (g) p = *q;
(b) *p = &i; (e) p = *&b; (h) *p = q;
(c) &p = q; (f) p = q; (i) *p = *q;


(e), (f), (i) 

4. Write the following function:

void swap (int *p, int *q);
When passed the addresses of two variables, swap should exchange the values of the variables:
swap (&i, &j); /* exchanges values of i and j 

*/