#include<iostream>
#include<string>
using namespace std;

void togglecase(string str)
{
  //write your code here
   for (int i=0; i<str.length(); i++)
    {
        if (str[i]>='A' && str[i]<='Z') //if uppercase
            str[i] = str[i] + 'a' - 'A'; //subtract difference accordingly
        else if (str[i]>='a' && str[i]<='z') //if lowercase
            str[i] = str[i] + 'A' - 'a';
    }
  cout<<str<<endl;
}

int main() {
  string str;
  getline(cin, str);
  togglecase(str);
  return 0;
}
