#include<bits/stdc++.h>
#pragma GCC optimize ("-O3")
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define double long double
#define pb push_back
#define mod 1000000007
#define int long long
#define endl "\n"
#define ss second
#define ff first
#define INF 1000000000
#define all(a) a.begin(),a.end()
#define gcd(a, b) __gcd((a), (b))

//ceil(a/b) is equal to (a+b-1)/b
using namespace std;
 
 
int power(int a,int n,int p)
{
    int res=1;
    while(n)
    {
        if(n%2)
        {
        res=(res*a)%p;
        n--;}
        else
        {
        a=(a*a)%p;
        n=n/2;}
    }
    return res;
}
 
 
int binarySearch(int arr[],int l,int r,int x) 
{ 
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]<x)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
} 
 
 class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int l=0;
       int r = arr.size()-1;
       while(r-l>=k)
       {
          if(x-arr[l]<=arr[r]-x)
          {
              r--;
          }
           else{
               l++;
           }
       }
        return vector<int>(begin(arr)+l,begin(arr)+r+1);
    }
};

int fact(int n,int k)       //for calculating nCk
{
    int ans=1;
    if(k>n-k)
    {
        k=n-k;
    }
    for(int i=1;i<=k;i++)
    {
        ans*=(n-i+1);
        ans/=i;
    }
    return ans;
}
// cout << std::fixed;
// std::cout << std::setprecision(9); 
// auto it = lower_bound(v.begin(), v.end(), n); 
 
 void prime(int arr[], int n)
 {
  arr[0]=1;
  arr[1]=1;
  for(int i=2; i*i <= n;i++)
    for(int j=2*i;j<=n;j+=i)
      if(arr[j]==0)
      {arr[j]=i;}
 }

std::vector<int> nop(int arr[],int n)
{std::vector<int> v;

for(int i=2;i<=n;i++)
  if(arr[i]==0)
  v.push_back(i);
  return v;
}

std::vector<int> fun(int arr[],int n)
{std::vector<int> v;
v.push_back(0);
v.push_back(0);
int var=0;
for(int i=2;i<=n;i++)
  {if(arr[i]==0)
      var++;
    v.push_back(var);}
  return v;
}

unsigned countBits(unsigned int number)
{      
      // log function in base 2 
      // take only integer part
      return (int)log2(number)+1;
}



 int32_t main()
{                   
    IOS;
//        #ifndef ONLINE_JUDGE
//     // for getting input from input.txt
//     freopen("input.txt", "r", stdin);
//     // for writing output to output.txt
//     freopen("output.txt", "w", stdout);
// #endif    
 
    ll T;       
    cin>>T;
     
    // ll N;
    
  // int arr[10000]={0};
  // prime(arr,10000);
  // std::vector<int> v=nop(arr,10000);
  // std::vector<int> v1=fun(arr,10000);

ll t=T;


while(t--)
{  ll N,K;
      cin>>N;
      
      vector<int> arr(N);
      for(int i=0;i<N;i++)
      {
        cin>>arr[i];
      }
      sort(arr.begin(),arr.end());
      ll ans1=0, ans2=0,max_i=mod,ans,l=1,r=N-2;
      
      if(N==2)
        ans=0;
    else if(N==3)
        ans=min(arr[1]-arr[0],arr[2]-arr[1]);
      else
      {
        for (int i = 0; i < N-1; ++i)
        {
            ans1 += abs(arr[i]-arr[(N-1)/2]);
        }
        for (int i = 1; i < N; ++i)
        {
            ans2 += abs(arr[i]-arr[1+(N-1)/2]);
        }
        max_i=min(ans1,ans2);
        int d1,d2;
        while(l<r)
        {   
            d2=arr[N-1]-arr[l];
            d1=arr[r]-arr[0];
            max_i=min(max_i,abs(d1-d2));
            if(d1<d2)
            l++;
            else
                r--;
        }
        ans=max_i;
      }
      cout<<ans<<'\n';

}


    
  
  return 0;
}

