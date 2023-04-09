#include <bits/stdc++.h>
using namespace std;

        ///   ARRAY   LOWER BOUND    MID    UPER BOUND
void Merging(int arr[] , int lb , int mid , int ub)
{
    int i = lb;         ///lower bound (starting point of array ( arr[0] ) )
    int j = mid+1;      ///mid + 1 ( one index + from mid )
    int k = lb;         ///iterator starting from array[0] index

    int* b = new int[sizeof(arr)];      ///creating dynamic memory for storing merged element

    while(i<=mid && j<=ub)
    {
        if(arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while( j <= ub)
        {
            b[k] = arr[j];
            j++;k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=arr[i];
            i++;k++;
        }
    }

    for(auto m=lb; m<=ub; m++)          ///copying elements of array b[] into the original array
    {
        arr[m] = b[m];
    }
    delete b;
}
    ///          ARRAY    LOWER BOUND   UPER BOUND
void Mergesort(int arr[] , int lb , int ub)
{
    if(lb<ub)
    {
        int mid = (lb+ub)/2;        ///FINDONG MID POINT OF ARRAY

        Mergesort(arr,lb,mid);      ///RECURSIVELY CALLING MERGESORT
        Mergesort(arr,mid+1,ub);    ///==SAME AS BEFORE
        Merging(arr,lb,mid,ub);     ///CALLING MERGING FUNCTION TO MERGE SORTED PART OF ARRAY
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

    Mergesort(arr, 0, arr_size - 1);

    cout << "\n\n\n-------------ARRAY AFTER SORTING------------- \n\n";
    display(arr, arr_size);

    cout<<"\n\n";

    int arr2[] = { 1, 2, 3, 4, 5, 6 };

    auto arr_size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "-------------ARRAY BEFORE MERGING-------------\n";
    display(arr2, arr_size2);

    Mergesort(arr2, 0, arr_size2 - 1);

    cout << "\n\n\n-------------ARRAY AFTER SORTING------------- \n\n";
    display(arr2, arr_size2);

    cout<<"\n\n";

    int arr3[] = { 100, 20, 3, 44, 56, 6 };

     auto arr_size3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "-------------ARRAY BEFORE MERGING-------------\n";
    display(arr3, arr_size3);

    Mergesort(arr3, 0, arr_size3 - 1);

    cout << "\n\n\n-------------ARRAY AFTER SORTING------------- \n\n";
    display(arr3, arr_size3);

    cout<<"\n\n";


    return 0;
}
