#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int arr[100];
int main()
{
    int a,b,c,i,mid,low,high,flag,key,n;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
          scanf("%d",&arr[i]);
        }

        low = 1;
        high = n;
        flag = 0;

        cin>>key;

        while(low<=high)
        {
            mid = (low+high)/2;
            printf("low = %d high = %d mid = %d  value = %d key = %d\n",low,high,mid,arr[mid],key);
            if(arr[mid]<key)
            {
                low = mid+1;
            }
            else if(arr[mid]>key)
            {
                high = mid-1;
            }
            if(arr[mid]==key)
            {
                high = mid-1;
                flag = 1;
            }
        }
        if(flag==0)
             erri
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }



    }


}

