#include <iostream>

using namespace std;

int main()
{
    int x[100],y[100],n,i,procent;
    cout<<"Cate produse se vor ieftini? ";cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Pretul produsului "<<i+1<<" inainte de ieftinire este de ";
        cin>>x[i];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Pretul produsului "<<i+1<<" dupa ieftinire este de ";
        cin>>y[i];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        procent=((((x[i]-y[i])*100)/x[i]));
        cout<<"Produsul "<<i+1<<" s-a ieftinit cu "<<procent<<"%"<<endl;
    }
    return 0;
}
