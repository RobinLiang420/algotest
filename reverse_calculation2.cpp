#include <iostream>
using namespace std;

int main() {
    
    int c;
    float x=1000; // The reminder of Month 48th is 1000
    for(c=47;c>0;c--)
    {
        
        x=1000+(x/(1+0.0171/12)); // reverse calculate deposit x
        
    }
    
    cout<<x;
	return 0;
}
