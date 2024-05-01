//Guljar type:1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sereja=0;
    int dima=0;
    for(int i=0; i<n; i++)
        cin>> arr[i];
        int l=0;
        int r=n-1;
        int z=0;
        while(l<=r)
        {
           if(z%2==0)
           {
               if(arr[l]>arr[r])
               {
                   sereja += arr[l];
                   l++;
               }
                else{
                sereja +=arr[r];
                r--;

           }


               }
               else{
              if(arr[l]>arr[r])
               {
                   dima += arr[l];
                   l++;
               }
                else{
                dima +=arr[r];
                r--;

        }


           }
           z++;

        }
        cout<<sereja << " " << dima << endl;

}
/*

   type:2

 #include<iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0,j=n-1,max,k=0;
    int play1=0,play2=0;
    while(i<=j)
    {
        if(a[i]>=a[j])
        {
           max=a[i];
           i++;
        }
        else{
            max=a[j];
            j--;
        }
        if(k%2==0)
          play1=play1+max;
        else
          play2=play2+max;
     k++;
    }
    cout<<play1<<" "<<play2<<endl;
    return 0;

}
*/
