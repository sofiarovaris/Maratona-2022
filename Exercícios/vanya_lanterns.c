#include <stdio.h>
#include <stdlib.h>

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {

  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

double acha_maior_distancia(int v[], int n, int l){
    int i;
    double aux;
    double max, primeira = v[0], ultima = l - v[n-1];
    if(primeira >= ultima){
        if(v[0] == 0){
            max = primeira/2;
        }else{
            max = primeira;
        }
    }else{
        if(v[n-1] == l-1 && n!=1){
            max = ultima/2;
        }else{
            max = ultima;
        }
    }
    for(i=1; i<n; i++){
        aux = v[i] - v[i-1];
        if( (aux/2)>max){
            max = aux/2;
        }
    }
    return max;
}

int main(){
    int n, l, i;
    
    scanf("%d %d", &n, &l);

    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    
    int size = sizeof(v) / sizeof(v[0]);

    mergeSort(v, 0, size - 1);
    double a = acha_maior_distancia(v, size, l);
    printf("%.10f\n", a);
    return 0;
}