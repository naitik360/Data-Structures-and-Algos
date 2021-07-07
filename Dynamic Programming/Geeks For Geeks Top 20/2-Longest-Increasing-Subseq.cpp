#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int lis[n];
    for(int i=0;i<n;i++) lis[i]=1;
    lis[0]=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i] && lis[j]+1>lis[i])
                lis[i] = lis[j]+1;
        }
    }

    int ans = 1;
    for(int i=0;i<n;i++)
        ans = max(ans,lis[i]);
    cout<<ans<<endl;

    return  0;
}
