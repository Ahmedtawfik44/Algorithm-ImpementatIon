#include <iostream>
#include <algorithm>
using namespace std;

// Worst Case => O(logn)
//avarage Case => O(logn)
//Best Case => O(1)

//Space Complexity
//  S(n)=h*1=logn

int binary_search_Rec(int a[],int target,int l,int h){
  if(l<=h){
    int m=(l+h)/2;
    if(target==a[m])
        return m;
    if(target>a[m])
          return binary_search_Rec(a,target,m+1,h);
    if(target<a[m])
          return binary_search_Rec(a,target,l,m-1);
  }
  return -1;
}

int main()
{
    int n=5;
    while(n--){
    int n,target;
    cout<<"Enter Length Of Array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"\n Enter The Item "<<i+1<<" : ";
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"\n Enter Target : ";
    cin>>target;
    int r=binary_search_Rec(a,target,0,n-1);
    if(r!=-1)
        cout<<"The Item Found"<<endl;
    else
        cout<<"The Item Not Found"<<endl;
    }
    return 0;
}
