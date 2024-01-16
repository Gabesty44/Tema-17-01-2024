#include <iostream>

using namespace std;

int main()
{
    int v[100],n,i,minim,maxim;
    cin>>n;
    cin>>v[0];
    minim=maxim=v[0];
    for(i=1;i<n;i++)
    {
        cin>>v[i];
        if(v[i]<minim)
            minim=v[i];
        if(v[i]>maxim)
            maxim=v[i];
    }
    for(i=0;i<n;i++)
    {
        if(v[i]==minim)
            minim=i;
        if(v[i]==maxim)
            maxim=i;
    }
    cout<<"Indicele minimului este "<<minim<<endl<<"Indicele maximului este "<<maxim;
    return 0;
}
