#include <iostream>
#include<stdlib.h>
#include<time.h>
  using namespace std;
   int arr[1000];
  void heapify(int arr[], int n, int i)
  {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
      largest = left;

    if (right < n && arr[right] > arr[largest])
      largest = right;

    if (largest != i)
        {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
    }
  }

  void heapSort(int arr[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);

      heapify(arr, i, 0);
    }
  }

  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }

  int main() {
     int i,j,n;
    cout<<"Enter the number of elements to be sorted:";
    cin>>n;
   srand(time(NULL));
    for(i=1;i<=n;i++)
    {
        arr[i]=(rand()%100);
    }
    cout<<endl;
    cout<<"Sort the numbers:"<<endl;
     for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,n);
    cout<<endl;
    cout<<"Sorted:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
  }
