#include <iostream>

using namespace std;

int main()
{
    int n,i,v[100],k=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n/2;i++)
        if((v[i]/10)%10==(v[n-i+1]/10)%10)
            k++;
    cout<<k;
    return 0;
}
