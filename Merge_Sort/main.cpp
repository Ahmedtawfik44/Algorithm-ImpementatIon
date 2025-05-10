#include <iostream>
using namespace std;

// Time Complexity
//    Worst-avarage-Best Case=> O(nlogn)

//Space Complexity
//     S(n)=n+logn=n

// Stable & Out Of Place

void Sort(int a[],int l,int m,int h){
     int i=l,j=m+1,k=l;
     int *new_a=new int[h+1];
     while(i<=m && j<=h){
        if(a[i]<=a[j])
            new_a[k++]=a[i++];
        else
            new_a[k++]=a[j++];
     }
     while(i<=m){
        new_a[k++]=a[i++];
     }
      while(j<=h){
        new_a[k++]=a[j++];
     }
     for(int z=l;z<=h;z++){
        a[z]=new_a[z];
     }
     delete []new_a;
}

void Merge_sort(int a[],int l,int h){
  if(l<h){
        int m=(l+h)/2;
        Merge_sort(a,l,m);
        Merge_sort(a,m+1,h);
        Sort(a,l,m,h);
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
    Merge_sort(a,0,n-1);
    cout<<"\n After Sorted : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}
