#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{

    vector<int>values;
    int inum,ielem;
    cout<<"enter the number of elements ";
    cin>>inum;
    cout<<"enter "<< inum<<"values";
    for(int i=0;i<inum;i++)

{

     cin>>ielem;
    values.push_back(ielem);

}
for(int i=0;i<inum;i++)
{

    cout<<values[i]<<" ";
}
cout<<endl;
cout<<"sorting in descending order"<<endl;
for(int i=0;i<inum;i++)
{
for(int j=0;j<inum;j++)
{

    if(values[i]<values[j])
    {
        int temp=values[i];
        values[i]=values[j];
        values[j]=temp;

    }
}

}
for(int i=0;i<inum;i++)
{
    cout<<values[i]<<" ";
}
cout<<endl;
cout<<"sorting in descending order"<<endl;
for(int i=0;i<inum;i++)
{

    for(int j=0;j<inum;j++)
    {

        if(values[i]>values[j])
        {

            int temp = values[i];
            values[i] = values[j];
            values[j] = temp;
                    }
    }
}
for(int i=0;i<inum;i++)
{

    cout<<values[i]<<" "";

}
cout<<endl;
return 0;
}
