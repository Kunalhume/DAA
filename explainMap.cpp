#include <bits/stdc++.h>
using namespace std;

int main(){
  string s ="abfsdfsdxcsgsdfsefsd";
  map<char,int> mp;
  for (int i = 0; i < s.length(); i++)
  {
    char x = s[i];
    mp[x]++;
  }

  for (auto i: mp)
  {
    cout<<i.first<<" "<<i.second<<"\n";
  }


  
}