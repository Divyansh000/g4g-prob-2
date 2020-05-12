#include<bits/stdc++.h>
using namespace std;
int val(char a)
{
    if(a=='0')
    {
        return 0;
    }
    if(a=='1')
    {
        return 1;
    }
    if(a=='2')
    {
        return 2;
    }
    if(a=='3')
    {
        return 3;
    }
    if(a=='4')
    {
        return 4;
    }
    if(a=='5')
    {
        return 5;
    }
    if(a=='6')
    {
        return 6;
    }
    if(a=='7')
    {
        return 7;
    }
    if(a=='8')
    {
        return 8;
    }
    if(a=='9')
    {
        return 9;
    }
}
int no(string s)
{
    int n=s.length(),sum=0;
    for(int i=0;i<n;i++)
    {
        sum=(sum*10)+val(s[i]);
    }
    return sum;
}
void f(string s)
{
    int c=0;
    sort(s.begin(),s.end());
    do
    {
       int x=no(s);
       cout<<"x = "<<x<<endl;
       if(x%8==0)
       {
           cout<<"divisible = "<<x<<endl;
           c++;
       }
    }while(next_permutation(s.begin(),s.end()));
    if(c>0)
    {
        cout<<"c = "<<c<<" yes";
    }
    else
    {
        cout<<"no";
    }
}
int main()
{
    string s;
    cin>>s;
    f(s);
    return 0;
}
