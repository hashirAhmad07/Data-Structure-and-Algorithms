#include <iostream>

using namespace std;

void Swap(int& x,int& b)
{
    int temp = x;
    x = b;
    b = temp;
}

int Partition(int arr[] , int lb , int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int End = ub;

    while(start < End)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[End] > pivot)
        {
            End--;
        }
        if(start < End)
        {
            Swap(arr[start],arr[End]);
        }
    }
    Swap(arr[lb],arr[End]);
    return End;

}


void Quicksort(int arr[],int lb, int ub)
{
    if(lb<ub)
    {
        int mid = Partition(arr,lb,ub);
        Quicksort(arr,lb,mid-1);
        Quicksort(arr,mid+1,ub);
    }
}


void display(int arr[] , int Size)
{
    for(int i=0;i<Size; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = { 15, 5, 24, 8, 1, 3, 16, 10, 20 };

    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "-------------ARRAY BEFORE MERGING-------------\n";
    display(arr, arr_size);

    Quicksort(arr, 0, arr_size - 1);

    cout << "\n\n\n-------------ARRAY AFTER SORTING------------- \n\n";
    display(arr, arr_size);

    cout<<"\n\n";

    int arr2[] = { 1, 2, 3, 4, 5, 6 };

    auto arr_size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "-------------ARRAY BEFORE MERGING-------------\n";
    display(arr2, arr_size2);

    Quicksort(arr2, 0, arr_size2 - 1);

    cout << "\n\n\n-------------ARRAY AFTER SORTING------------- \n\n";
    display(arr2, arr_size2);

    cout<<"\n\n";

    int arr3[] = { 100, 20, 3, 44, 56, 6 };

     auto arr_size3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "-------------ARRAY BEFORE MERGING-------------\n";
    display(arr3, arr_size3);

    Quicksort(arr3, 0, arr_size3 - 1);

    cout << "\n\n\n-------------ARRAY AFTER SORTING------------- \n\n";
    display(arr3, arr_size3);

    cout<<"\n\n";

    return 0;
}
