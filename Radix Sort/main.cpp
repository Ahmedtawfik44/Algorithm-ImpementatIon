#include <iostream>
using namespace std;


// Out of place & Stable

// Time Complexity
//  => Best Case , Worst Case , Avarage Case : O(d(n+max)) => O(d*n) Because K=10

// Space Complexity
// S(n)=O(n+max) => O(n) Because K=10

void Counting_sort(int a[],int n ,int pos){
  if(n<=0)
    return;

  int count_a[10]={0};
  for(int i=0;i<n;i++){
    int digit=(a[i]/pos) % 10;
    count_a[digit]++;
  }

  for(int i=1;i<10;i++){
   count_a[i]+=count_a[i-1];
  }

  int *output=new int[n];
  for(int i=n-1;i>=0;i--){
    int digit=(a[i]/pos) % 10;
    output[count_a[digit] - 1]= a[i];
    count_a[digit]--;
  }

  for(int i=0;i<n;i++){
    a[i]=output[i];
  }
delete []output;
}

void radix_sort(int a[],int n){
    int maxele=a[0];
    for(int i=1; i<n; i++){
        if(a[i]>maxele)
            maxele=a[i];
    }

    for(int pos=1; maxele/pos>0 ;pos*=10){
        Counting_sort(a,n,pos);
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
    radix_sort(a,n);
    cout<<"\n After Sorted : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}
