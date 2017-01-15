#include <iostream>
using namespace std;

int main() {
    
    int c;
    float x=1000.000000;
    for(c=47;c>0;c--)
    {
        
        x=1000+(x/(1+0.0171/12));
        
    }
    
    cout<<x;
	return 0;
}
