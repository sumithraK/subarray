#include <iostream>

using namespace std;

int main()
{
   int n,k;
      cin>>n;
   int a[n],i;
   for(i=0;i<n;i++){
        cin>>a[i];
   }
   cin>>k;

    for(i=k-1;i>=0;i--)
    {
        cout<<a[i];
    }
     for(i=k;i<n;i++)
    {
        cout<<a[i];
    }

    return 0;
}
