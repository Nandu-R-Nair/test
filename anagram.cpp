#include <iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
bool anagram(string str1,string str2);
int main()
{
    string str1,str2;
    cout << "Enter first string: ";
    cin>>str1;
    cout << "Enter second string: ";
    cin>>str2;
    if(anagram(str1,str2))
    {
      cout<<"string is anagram";
    }
    else
    {
      cout<<"not an anagram";
    }
    return 0;
}
bool anagram(string str1,string str2)
{
  int l1,l2;
  l1=str1.length();
  l2=str2.length();
  if(l1!=l2)
  {
    return false;
  }
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    transform(str2.begin(),str2.end(),str2.begin(),::toupper);
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<l1;i++)
    {
      if(str1[i]!=str2[i])
      {
        return false;
      }
    }
  return true;



}
