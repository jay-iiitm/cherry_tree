#include<iostream>
#include<queue>
using namespace std;
class stack
{
    public:
    queue<int> q1;
    queue<int> q2;

    void push(int val)
    {
        q1.push(val);
    }
    void pop()
    {
        if(q1.empty())
        {
            cout<<"No elements to pop\n";return;
        }
        int count=0;
         while(!q1.empty())
         {
             int peak = q1.front();
             q2.push(peak);
             q1.pop();
             count++;
         }
         if(!q2.empty())
         q2.pop();

         while(!q2.empty() && count--)
         {
             int peak = q2.front();
             q1.push(peak);
             q2.pop();
         }
    }
    int top()
    {
        if(q1.empty())
        {
            cout<<"No elements on top\n";return -1;
        }
         while(!q1.empty())
         {
             int peak = q1.front();
             q2.push(peak);
             q1.pop();
         }
         int top = q2.front();

         while(!q2.empty())
         {
             int peak = q2.front();
             q1.push(peak);
             q2.pop();
         }
         return top;
    }
    bool empty()
    {
        if(q1.empty())
        return 1;

        return 0;
    }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();
    s.pop();
    // s.pop();
    // s.pop();



    cout<<s.empty()<<'\n';
    cout<<s.top()<<'\n';

}


class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
      int n=nums.size();
        vector<int>o;
        vector<int>e;
        for(int i=0;i<n;i+=2)
        {
            e.push_back(nums[i]);
           
        }
        for(int j=1;j<n;j+=2)
        {
         o.push_back(nums[j]);
        }
        sort(e.begin(),e.end());
        sort(o.begin(),o.end(),greater<>());
        vector<int>res(n,0);
        int k=0;
        for(int i=0;i<n;i+=2)
        {
            res[i]=e[k];
            k++;
        }
         k=0;
        for(int j=1;j<n;j+=2)
        {
            res[j]=o[k];
            k++;
        }
        return res;
    }
};
