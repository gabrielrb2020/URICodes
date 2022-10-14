#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    string str2;

    cout << "Escrita de Strings: " << endl;
    cin >> str1;                            //scanf("%s", &str1); ou gets(str1);
    cin >> str2;                            //scanf("%s", &str2); ou gets(str2);

    if(str1 == str2){
        cout << "Sao iguais!" << endl;
    }else{
        cout << "Sao diferentes!" << endl;
    }

    cout << "Concatenacao: " << endl;
    str1.append(" " + str2);
    cout << str1;
    cout << endl;

    cout << "Contagem de A's" << endl;
    cout << count(str1.begin(), str1.end(), 'a');
    cout << endl;

    cout << "Reverse: " << endl;
    reverse(str1.begin(), str1.end());
    cout << str1;



}