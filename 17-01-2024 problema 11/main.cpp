#include <iostream>

using namespace std;

int main()
{
    int n,i,v[100],primul,s=0,ultimul;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            primul=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(v[i]%2==0)
        {
            ultimul=i;
            break;
        }
    }
    for(i=primul;i<=ultimul;i++)
        s+=v[i];
    cout<<s;
    return 0;
}
