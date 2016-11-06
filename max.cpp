#include <iostream>
using namespace std;
int max(int num1,int num2);

int main() {
	// your code goes here
	int a=100;
	int b=500;
	int ret;
	ret=max(a,b);
	cout<<ret<<endl;
	return 0;
}
int max(int num1, int num2)
{
    int result;
    if(num1>num2)
    {
        result=num1;
    }
    else
    {
        result=num2;
    }
    return result;
}
