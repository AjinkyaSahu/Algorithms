#include<bits/stdc++.h>
using namespace std;
void swapping(int &a, int &b) {      
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void display(int array[], int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void bubbleSort(int array[], int size) {
    cout<<"every iteration"<<endl;
   for(int i = 0; i<size; i++) {
      int swaps = 0;    
      for(int j = 0; j<size-i-1; j++) {
         if(array[j] > array[j+1]) {       
            swapping(array[j], array[j+1]);
            swaps = 1;    
         }
         
      }
     
         display(array, size);
      if(!swaps)
         break;       
   }
}
int main() {
   int n;
    clock_t time_req;

         time_req = clock();
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   bubbleSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
   
      time_req = clock()- time_req;
    cout << "Processor time taken for sorting: "
        << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;
}


// Enter the number of elements: 5
// Enter elements:
// 12 45 7 2 0  
// Array before Sorting: 12 45 7 2 0 
// every iteration
// 12 7 2 0 45 
// 7 2 0 12 45 
// 2 0 7 12 45
// 0 2 7 12 45
// 0 2 7 12 45
// Array after Sorting: 0 2 7 12 45
// Processor time taken for sorting: 14.508 seconds




// Time Complexity
// Best  -----> Ω(n)
// Average ---> θ(n^2)
// Worst -----> O(n^2)
