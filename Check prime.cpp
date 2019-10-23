#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i=2;
    cin>>n;
    for(i;i<=sqrt(n);i++)
    {if (n%i==0)
     {
         cout<<"Not Prime";
         return 0;
     }
    }
    cout<<"Prime";

return 0;
}
