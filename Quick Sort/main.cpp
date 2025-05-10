#include <iostream>
using namespace std;

// In PLace & Not Stable
// Worst Case => O(n2)
// avarage Case =>  O(nlogn)
// Best Case => O(nlogn)
// S(n)=1

int Partition(int a[],int l,int h){
 int pivot=a[h];
 int j=l-1;
 for(int i=l;i<=h-1;i++){
    if(a[i]<pivot){
        j++;
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
 }
    j++;
    int temp=a[j];
    a[j]=a[h];
    a[h]=temp;
    return j; // return index pivot
}

void quick_sort(int a[],int l,int h){
  if(l<h){
    int index=Partition(a,l,h);
    quick_sort(a,l,index-1);
    quick_sort(a,index+1,h);
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
    quick_sort(a,0,n-1);
    cout<<"\n After Sorted : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}
