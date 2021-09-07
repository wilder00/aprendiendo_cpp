#include <iostream>
using namespace std;

int main(){
	int opcion;
	int num1;
	int num2;
	int result;

	cout << "caso del eperador << y >>"<<endl;
	while(true){
		cout << "ingresar el número 1: \n";
		cin >> num1;
		num1+=0;

		cout << "ingresa el número 2: \n";
		cin >> num2;
		num2+=0;

		result= num1 << num2;
		cout << "num1("<< num1 <<") << num2("<< num2 <<"): " << result <<endl; 
	}

	return 0;
}
