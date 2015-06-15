#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3;
    cout << "Digite o primeiro número" << endl;
    cin >> num1;
    cout << "Digite o segundo número" << endl;
    cin >> num2;
    cout << "Digite o terceiro número" << endl;
    cin >> num3;
    if(num1 > num2 and num1 > num3 ){
        cout << "O maior número é: " << num1 << endl;
    }
    else if(num2 > num1 and num2 > num3){
        cout << "O maior número é: " << num2 << endl;
    }
    else if(num3 > num1 and num3 > num2){
        cout << "O maior número é: " << num3 << endl;
    }
    else if(num1 == num2 and num1 > num3){
        cout << "O maior número é: " << num1 << endl;
    }
    else if(num3 == num2 and num2 > num1){
        cout << "O maior número é: " << num2 << endl;
    }
    else if(num1 == num3 and num1 > num2){
        cout << "O maior número é: " << num1 << endl;
    }
    else if(num1 == num2 and num1 == num3){
        cout << "Os valores são iguais" << endl;
    }
    return 0;
}
