#include <iostream>
using namespace std;

int main() {
	 const int month = 49;  
    float money[month];  
    money[48] = 1000;  
    for (int i = 47;i>0;--i)  
    {  
        money[i] = (money[i+1]+1000)/(1+0.0171/12);  
    }  
    for (int i = 48;i>0;--i)  
    {  
        printf("%dmonth, total is %f\n",i,money[i]);  
    }  
    return 0;  
}
