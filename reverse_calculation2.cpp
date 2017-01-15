#include <iostream>
using namespace std;

int main() {
    
    int c,x=1000;
    for(c=47;c>0;c--)
    {
        
        x=1000+(x/(1+0.0171/12));
        
    }
    
    cout<<x;
	return 0;
}
