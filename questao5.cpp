#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2;
    float media;
    cout << "Digite a primeira nota do aluno" << endl;
    cin >> nota1;
    cout << "Digite a segunda nota do aluno" << endl;
    cin >> nota2;
    media = (nota1 + nota2)/2;
    cout << "--------------------------------" << endl;
    if(media >= 7 and media <= 9.99 ){
        cout << "Aprovado" << endl;
    }
    else if(media == 10){
        cout << "Aprovado com Distinção" << endl;
    }
    else{
        cout << "Reprovado" << endl;
    }
    return 0;
}
