// Example program
#include <iostream>
using namespace std;

int main()
{
 int n,c, first=0, second=1,next;    
  cout<<"input your number"<<endl;
  cin>>n;
  cout<<"the fibonacci sequence is"<<endl;
  
  if(n>0)
  for(c=0;c<=n;c++){
      if(c<1)
       next = c;
      else
      next=first+second;
      first = second;
      second =next;
      cout<<next<<endl;
      }
  else
  cout<<"pls input the correct possitive integer"<<endl;
  return 0;
  
}
