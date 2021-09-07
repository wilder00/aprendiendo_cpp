#include <iostream>
using namespace std;

int main(){

    // inserting lines 
    cout << "Hello world \n\n";
    cout << "another flow insertion";

    cout << "another line" << endl; // "endl" is an manipulator  is prefered \n 



    cout<< "declaring variables: \n";
    int myNumber = 5;
    int x=5, y=0, z = 50;
    cout<< x+y+z << endl;



    //use undertantdable names for variables
    cout<< "C++ Identifier: \n";
    int minutesPerHourConst = 60; //good one     //names can start by underscore
    int m = 60; // what???




    //Constants
    cout << "C++ Constant: \n";
    const int myNum = 15;

    const int minutesPerHour = 60;
    const float PI = 3.14;



    //User Input
    cout << "C++ user input: \n"; //output uses insertion operator
    string userInput;
    cout << "type something: ";
    cin >> userInput; //we use estaaction operator to get user input from the keyboard //just get all untls a white space usually an enter, but also an simple aspace
    cout << "you have typed: " << userInput <<endl;



    //Basic data types
    cout << "C++ Data user input: \n";
    int intInt = 4 ; //4 bytes
    float floatFloat = 4.0; //4 bytes, 7decimal digits
    double doubleDouble = 4.0; //8 bytes, 15 decimal digits
    bool boolBool = true ; // 1 byte, Boolean  true or false
    char charChar = '1'; // 1 byte, store a single character/letter/number, or ASCII value



    //Numeric data type
    cout << "C++ Numeric Data types: \n";
    int myNumI = 1000;
    cout << myNumI;
    float myNumF = 5.75;
    cout << myNumF;
    double myNumD = 19.99;
    cout << myNumD;
        //cientific number
    float f1 = 35e3; //e indicate the power of 10
    double d1 = 35E4; //at simple view, no difference between e and E;
    cout<< "\n f1: "<< f1;
    cout<< "\n d1: "<< d1 << endl;




    //Boolean Type
    cout<<"C++ Boolean Data type: \n";
    bool isCodingFun = true;
    bool isFinishTasty = false;

    cout << "\n isCodingFun: "<< isCodingFun; //returns 0 or 1 for false and true resoectly
    cout << "\n isFinishTasty: "<< isFinishTasty << endl;



    //Character Data Type

    cout << "C++ Character Data types: \n";
    char myGrade = 'B';
    cout << myGrade;
        //using ASCII Values
    char a = 65, b = 66, c = 67;
    cout << "\na: " << a;
    cout << "\nb: " << b;
    cout << "\nc: " << c << endl;
    




    //string data type
    /*
        w3school says its required #include <string>  library at header to use strings
        I don't know, I could compile satisfactorily the below code 
    */
    cout << "C++ String Data Types: \n";
    string greeting = "Hello";
    cout << greeting;



    //Operators
    cout << "C++ Operator: \n";
    int x1 = 100 + 50; //add together to values 
    int y1 = x1 + 200;
    int z1 = x1 + y1;

        //groups of operators
        /*
            Arithmetic Operators
            Assigment operators
            Comparison operators
            Logical Operators
            Bitwise Operators
        */
       
        //Arithmetic Operators
        cout << "\n Arithmetic Operators: \n";
        cout << "\n\t addition: x + y";
        cout << "\n\t substraction: x - y";
        cout << "\n\t Multiplication: x * y";
        cout << "\n\t Division: x / y";
        cout << "\n\t Modulus: x % y"; //returns the division remainder
        cout << "\n\t Increment: ++x";
        cout << "\n\t Decrement: --x"<<endl;

        //Assignment Operator;
        cout << "\n Assignment Operators: \n";
        int x3 = 243; //Usamos el signo = para asignar
        cout << "\n\t|Operator" << "\t|Example" << "\t|Same As" <<"\t| x val";
        
        x3=243;   
        cout << "\n\t| =" << "\t\t| x=243" << "\t\t| x= 243   \t| " << x3;
        x3=243;   
        x3+=3;
        cout << "\n\t| +=" << "\t\t| x+=3" << "\t\t| x= x+3   \t| " << x3;
        x3=243;   
        x3-=3;  
        cout << "\n\t| -=" << "\t\t| x-=3" << "\t\t| x= x-3   \t| " << x3;
        x3=243;   
        x3*=3;  
        cout << "\n\t| *=" << "\t\t| x*=3" << "\t\t| x= x*3   \t| " << x3;
        x3=243;   
        x3/=3;  
        cout << "\n\t| /=" << "\t\t| x/=3" << "\t\t| x= x/3   \t| " << x3;
        x3=243;   
        x3%=3;  
        cout << "\n\t| %=" << "\t\t| x%=3" << "\t\t| x= x%3   \t| " << x3;
        x3=243;   
        x3&=3;  
        cout << "\n\t| &=" << "\t\t| x&=3" << "\t\t| x= x&3   \t| " << x3; //a nivel binario
        x3=243;   
        x3|=3;  
        cout << "\n\t| |=" << "\t\t| x|=3" << "\t\t| x= x|3   \t| " << x3;  //a nivel binario 3 => 011
        x3=243;   
        x3^=3;  
        cout << "\n\t| ^=" << "\t\t| x^=3" << "\t\t| x= x^3   \t| " << x3;//^ linux es con altgr y { //No es exponente, es como un XOR
        x3=243;   
        x3>>=3;  
        cout << "\n\t| >>=" << "\t\t| x>>=3" << "\t\t| x= x>>3\t| " << x3;
        x3=243;   
        x3<<=3; 
        cout << "\n\t| <<=" << "\t\t| x<<=3" << "\t\t| x= x<<3\t| " << x3;
        

    return 0;
}