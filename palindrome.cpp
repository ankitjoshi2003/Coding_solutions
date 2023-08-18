# include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 int size=(int)s.size()-1;
 for(int i=0,j=size;i<j;i++,j--)
 {
   if(s[i]!=s[j])
    {
      cout<<"not a palindrome"<<endl;
         return 0;
    }
 }
  cout<<"palindrome"<<endl;
  return 0;
}