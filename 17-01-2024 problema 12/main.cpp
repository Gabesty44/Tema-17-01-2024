#include <iostream>

using namespace std;

int main()
{
    int n,i,s=0,k=0,v[100];
    float mediaAritmetica;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
        k++;
    }
    mediaAritmetica=(float)s/k;
    for(i=0;i<n;i++)
        if(v[i]>mediaAritmetica)
            cout<<v[i]<<" ";
    return 0;
}
