#include <iostream>

using namespace std;

int main()
{
    int v[100],n,i,minim,maxim;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    minim=maxim=v[0];
    for(i=1;i<n;i++)
    {
        if(v[i]<minim)
            minim=v[i];
        if(v[i]>maxim)
            maxim=v[i];
    }
    cout<<"Minimul este "<<minim<<endl<<"Maximul este "<<maxim;
    return 0;
}
