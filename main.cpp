#include <iostream>
using namespace std;

string palindrome(string name)
{  
string rev;
string copy;
copy=name;
  for(int i=name.length()-1;i>=0;i--)
    {
      rev+=name[i];
    }
  if(rev==copy)
  {
    return name + " is palindrome";
  }
  else{
    return name + " is not a palindrome";
  }
  }
int main() {
  cout << palindrome("mam");
  return 0;
}