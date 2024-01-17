#include <iostream>

using namespace std;

int main()
{
    int n,i,j,v[100],k=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if((v[i]/10)%10==(v[j]/10)%10 && v[i]!=v[j])
                k++;
    cout<<k/2;
    return 0;
}
