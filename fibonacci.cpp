#include<iostream>
 
using namespace std;
 
int main()
{
   int n, c, first = 0, second = 1, next;
 
   cout << "Enter the number of terms of Fibonacci series you want" << endl;
   cin >> n;
   
  if (n >0)
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
      cout << "First " << n << " terms of Fibonacci series are :- " << endl;      
   }   
   else 
   cout<<"input error,pls amend the correct one "<<endl;
   
   return 0;
}
