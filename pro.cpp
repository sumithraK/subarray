#include <iostream>
#include<string>

using namespace std;

int main()
{
  string a;
  cin>>a;
  int i,c,k,j;
  int n= a.length();
  for(i=0;i<n;i++){
        c=0;
        k=0;
        for(j=0;j<i;j++){
                if(a[i]==a[j])
                k++;
        }
        for(j=0;j<n;j++)
        {

            if(a[i]==a[j]){
                    c++;

            }

        }
        if(k==0){

    cout<<a[i]<<c;}
  }
    return 0;
}
