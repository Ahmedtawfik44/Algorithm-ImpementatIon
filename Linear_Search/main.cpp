#include <iostream>
using namespace std;

// Worst case => O(n)
// avarage Case => O(n/2) => O(n)
// Best case => O(1)

bool linear_search(int a[],int n ,int target){
   for(int i=0;i<n;i++){
    if(a[i]==target)
        return true;
   }
   return false;
}

int main()
{
    int n,target;
    cout<<"Enter Length Of Array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"\n Enter The Elemnt "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"\n Enter Target : ";
    cin>>target;
    bool result=linear_search(a,n,target);
    if(result)
        cout<<" \n The Item Exit"<<endl;
    else
          cout<<" \n The Item Not Exit"<<endl;
    return 0;
}
