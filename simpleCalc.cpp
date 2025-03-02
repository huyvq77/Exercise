#include <iostream>
#include <cstdlib>
using namespace std;
int arithmetic(int num1, int num2, char op);

int main(int argc, char* argv[]){
int num1, num2;
char op;

num1 = atoi(argv[1]);
op = argv[2][0];
num2 = atoi(argv[3]);
cout << arithmetic(num1, num2, op) << endl;
return 0;
}

int arithmetic(int num1, int num2, char op){
switch (op){
case '+':
    return num1+num2;
    break;
case '-':
    return num1-num2;
    break;
case 'x':
    return num1*num2;
    break;
case '/':
    if (num2==0){
        cout << "Math error" << endl;
        exit(1);
    }
    else return num1/num2;
    break;
case '%':
    if (num2==0){
        cout << "Math error" << endl;
        exit(1);
    }
    else return num1%num2;
    break;
default:
    cout << "Invalid" << endl;
    exit (1);
}
}
