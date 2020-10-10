#include<bits/stdc++.h>
using namespace std;

class my
{
public:
    int x;
    my(){x=0;}
    my(int a){x=a;}
    int getx(){return x;}
};

int main()
{
    my o[7];
    my o1[5]={3,4,5,6,7};
    int i;
    for(i=0;i<5;i++)
    {
        cout<<o[i].getx()<<endl;
        cout<<o1[i].getx();

    }

}

