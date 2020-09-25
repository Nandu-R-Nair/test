#include <bits/stdc++.h>
#include<string.h>
#include<array>
using namespace std;
string isValid(string s) {
    int k=0;
    int count=0;
    string str;
sort(s.begin(),s.end());
int len=s.length();
cout<<s<<"\n";
for(int i=0;i<len-1;i++)
{
  if(s[i]!=s[i+1])
  {
    count++;
  }
}
count=count+1;
//cout<<count<<"\n";
int arr[count];
for(int i=0;i<count;i++)
{
  arr[i]=0;
}
/*for(int i=0;i<count;i++)
{
  cout<<arr[i]<<"\n";
}*/
//cout<<sizeof(arr)/sizeof(arr[0]);;
int j=0;
for(int i=0;i<len-1;i++)
{

  if(s[i]==s[i+1])
  {
    arr[j]=arr[j]+1;
    if(i>=len-1)
    {
      arr[j]=arr[j]+1;
    }

  }
  else
  {
    arr[j]=arr[j]+1;
    j++;
    if(i>=len-1)
    {
      arr[j]=arr[j]+1;
    }

  }
}
for(int i=0;i<count;i++)
{
  cout<<arr[i]<<"\n";
}

}
int main()
{

    string s;
    s="aabbcc";
    isValid(s);


    return 0;
}
