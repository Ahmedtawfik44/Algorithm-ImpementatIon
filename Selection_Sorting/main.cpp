#include <iostream>
using namespace std;

// Worst Case => O(n2)
// Avarage Case => O(n2)
// Best Case => O(n2)
// Space Complexity => S(1)
//In place & Not Stable


void selection_sort(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int mini=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[mini])
                mini=j;
        }
        if(mini!=i)
        {
            int temp=a[mini];
            a[mini]=a[i];
            a[i]=temp;
        }
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
    selection_sort(a,n);
    cout<<"\n After Sorted : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}
