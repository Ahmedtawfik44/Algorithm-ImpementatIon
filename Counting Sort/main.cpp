#include <iostream>
using namespace std;

// Out of place & Stable

// Time Complexity
//  => Best Case , Worst Case , Avarage Case : O(n+max)

// Space Complexity
// S(n)=O(n+max)

void counting_sort(int a[],int n){
  if(n<=0)
    return;

  int maxx=a[0];
  for(int i=1;i<n;i++){
    if(a[i]>maxx)
        maxx=a[i]; // O(n)
  }

  int *count_a=new int[maxx](); //s(max)
  for(int i=0;i<n;i++){
    count_a[a[i]]++;  // O(n)
  }

   for(int i=1;i<=maxx;i++){
    count_a[i]+=count_a[i-1];  // O(max)
  }

  int *output=new int[n];  // S(n)
  for(int i=n-1;i>=0;i--){
    output[count_a[a[i]]-1]=a[i];
    count_a[a[i]]--;  // O(n)
  }

  for(int i=0;i<n;i++){
    a[i]=output[i];  // O(n)
  }

delete []count_a;
delete []output;
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
    counting_sort(a,n);
    cout<<"\n After Sorted : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}
