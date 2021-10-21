#include <bits/stdc++.h>

using namespace std;


int main()
{
  string s, revs = "";
  cin >> s;
  
  for (int i = s.length(); i >= 0; i++)
    revs += s[i];
  
  if (revs == s)
     cout << "it is a palindrome" << endl;
  
  else     
    cout << "it is not a palindrome" << endl;
  
  return 0;
}
