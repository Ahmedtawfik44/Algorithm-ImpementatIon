#include <iostream>
using namespace std;

// Worst Case => O(n2)
// Avarage Case => O(n2)
// Best Case => O(n) Already Sorted

// Space Complexity
// S(n) : 1

void insertion_sort(int a[],int n){
   for(int i=1;i<n;i++){
   int temp=a[i];
   int j=i-1;
    while(j>=0 && temp<a[j]){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
   }

}

int main()
{
    int n;
    cout<<"Enter Length Of Array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"\n Enter The Item "<<i+1<<" : ";
        cin>>a[i];
    }
    insertion_sort(a,n);
    cout<<"\n After Sorted : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }

    return 0;
}
