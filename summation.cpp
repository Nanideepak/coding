#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int inum,isum=0;
    cout<<"enter the value of n:";
    cin>>inum;
    for(int i=1;i<=inum;i++)
    {

        isum +=i;

    }
    cout<<"sum of 1 to " <<inum <<" is :" <<isum << endl;
    cout<< "sum of 1 to " << inum <<"using formula is:"<<inum*(inum+1)/2<<endl;
    return 0;
}
