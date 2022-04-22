#include<iostream>
#include<vector>
using namespace std;

void removeprimes(vector<int> v)
{
    
  //write your code here
  for(int i=0;i<v.size();i++)
  {
      int flag=0;
      for(int j=2;j<v[i];j++) //checking if each element is prime
      {
          if(v[i]%j==0)
          {
              flag=1;
              break;
          }
      }
      if(flag==1)
      {
        cout<<v[i]<<endl;
      }
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  removeprimes(v);
}
