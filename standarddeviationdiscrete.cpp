#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
    int n, i;
    float xarr[50],farr[50],xar[50],xar2[50],p1[50],p2[50],p3[50],armean,fxar=0, fsum=0,xfsum=0,xsum=0,p4,sd;
    cout<<"*******************************************************";
    cout<<"\nEnter Total No. of Elements = \t";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>xarr[i]; 
        xsum=xsum+xarr[i]; 
    }
    cout<<"\nEnter "<<n<<" Number of Frequency Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>farr[i];
        fsum = fsum+farr[i];
    }
    cout<<"\nSum of Frequency Elements ="<<fsum<<"\n";
    for(i=0; i<n; i++)
    {
        xfsum=xfsum+(xarr[i]*farr[i]);
        armean=xfsum/fsum;
    }
    cout<<"*******************************************************";
    cout<<"\nArithmetic Mean is Found to be = "<<armean<<"\n";
    cout<<"*******************************************************";
    for(i=0;i<n;i++)
    {
        p1[i]=xarr[i]-armean;
        p2[i]=pow(p1[i],2);
        p3[i] = farr[i]*p2[i];
        fxar=fxar+p3[i];
        p4=fxar/fsum;
    }
    sd = sqrt(p4);
    cout<<"\nStandard Deviation is Found to be = "<< sd << endl;
    cout<<"*******************************************************";
    return 0;
}