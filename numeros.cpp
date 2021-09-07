#include<iostream>
#include<math.h>
using namespace std;

int main(){
	unsigned int bigint = 60000000; 
	double big = 61234567;
	double anotherbig = 7.123456789e+9;
	long long int exp;
	cout << "El número es: " << big << endl;
	cout << "anotherbig es: "<< anotherbig<<endl;
	cout << "int unsigned: " << bigint<<endl; 
	
	exp = pow(bigint, 2);
	cout << "exp: " << exp;
  return 0;
}
