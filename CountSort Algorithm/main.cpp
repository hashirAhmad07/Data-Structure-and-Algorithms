#include <iostream>
using namespace std;
int maximum(int arr[],int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}
void countSort(int* array, int size) {

  //finding maximum element of array
  int max = maximum(array,size);

  //creating the count array
  int* count = new int[max+1];

  // Initialize count array with all zeros.
  for (int i = 0; i < max+1; i++) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

    int i =0; // counter for count array
    int  j =0; // counter for given array A

    while(i<= max){
        if(count[i]>0){
            array[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    }
    delete count;
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1, 0};
  int n = sizeof(array) / sizeof(array[0]);
  countSort(array, n);
  printArray(array, n);

  return 0;
}
