#include<bits/stdc++.h>

using namespace std;

//EXEMPLO 1
// int main(){
//     vector<int> vet = {1,2,3,4,5,6,7,8,9,10};
//     int q;
//     cin >> q;
//     for(int j = 0; j < q; j++) {
//         int l, r;
//         cin >> l >> r;
//         int resultado = 0;
//         for(int i = l; i <= r; i++) {
//             resultado += vet.at(i);
//         }
//         cout << resultado << endl;
//     }
// }


//EXEMPLO 2
// int main(){
//     vector<int> vet = {1,2,3,4,5,6,7,8,9,10};
//     vector<int> somaAcumulada;
//     somaAcumulada.push_back(vet.at(0));

//     for(int i = 1; i < vet.size(); i++){
//         somaAcumulada.push_back(vet.at(i) + somaAcumulada.at(i-1));
//     }

//     int q;
//     cin >> q;
//     for(int i = 0; i < q; i++) {
//         int inicio, fim;
//         cin >> inicio >> fim;
//         if(inicio == 0){
//             cout << somaAcumulada.at(fim) << endl;
//         }else{
//             cout << somaAcumulada.at(fim) - somaAcumulada.at(inicio-1) << endl;
//         }
//     }
// }




//Faca um programa que guarde os lucros diarios recebidos por uma loja e mostre o total de acordo com o intervalo de dias selecionado
int main(){
    vector<int> mes, lucro;

    cout << "COLOQUE AQUI OS LUCROS DE CADA DIA: " << endl;
    int aux;
    for(int i = 0; i < 5; i++){
        cout << "Digite o lucro do dia " << i + 1 << ": ";
        cin >> aux;
        mes.push_back(aux);
    }

    lucro.push_back(mes.at(0));
    for(int i = 1; i < mes.size(); i++){
        lucro.push_back(mes.at(i) + lucro.at(i - i));
    }

    cout << "Quantas pesquisas voce deseja fazer?" << endl;
    int qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cout << "Digite o dia do inicio e do fim, respectivamente: ";
        int inicio, fim;
        cin >> inicio >> fim;
        int resultado;
        if(inicio == 0){
            resultado = lucro.at(fim);
        }else{
            resultado = lucro.at(fim) - lucro.at(inicio - 1);
        }
        cout << "O lucro entre o dia " << inicio << " e " << fim << " eh: " << resultado;
    }

}
























// int main(){
//     vector<int> mes, lucro;
//     cout << "COLOQUE AQUI O LUCRO DE CADA DIA: " << endl;
//     int aux;
//     for(int i = 0; i < 3; i++){
//         cout << "Digite o lucro do dia " << i + 1 << ": " << endl;
//         cin >> aux;
//         mes.push_back(aux);
//     }

//     lucro.push_back(mes.at(0));
//     for(int i = 1; mes.size(); i++){
//         lucro.push_back(mes.at(i) + lucro.at(i - 1));
//     }

//     cout << "Quantas pesquisas voce quer fazer?" << endl;
//     int qtd;
//     cin >> qtd;
//     for(int i = 0; i < qtd; i++){
//         cout << "Digite o dia do inicio e o dia do fim, respectivamente: ";
//         int inicio, fim;
//         cin >> inicio >> fim;
//         int resultado;
//         if(inicio > 30 || inicio < 0 || fim > 30){
//             cout << "Numero invalido" << endl;
//         }else{
//             resultado = lucro.at(fim) - lucro.at(inicio - 1);
//         }
//         cout << "O lucro entre o dia " << inicio << " e " << fim << " eh: " << resultado;

//     }
// }





// int main(){
//     vector<int> mes, lucro;

//     cout << "COLOQUE AQUI OS LUCROS DIARIOS: " << endl;
//     int aux;
//     for(int i = 0; i < 5; i++){
//         cout << "Digite aqui o lucro do " << i + 1 << " dia: ";
//         cin >> aux;
//         mes.push_back(aux);
//     }

//     lucro.push_back(mes.at(0));
//     for(int i = 1; i < mes.size(); i++){
//         lucro.push_back(mes.at(i) + lucro.at(i - 1));
//     }

//     cout << "Quantas pesquisas voce deseja fazer?";
//     int qtd;
//     cin >> qtd;
//     for(int i = 0; i < qtd; i++){
//         cout << "Digite o dia do inicio e do fim, respectivamente: ";
//         int inicio, fim;
//         int resultado;
//         cin >> inicio >> fim;
//         if(inicio > 30 || inicio < 0){
//             cout << "Numero invalido" << endl;
//         }else{
//             resultado = lucro.at(fim) - lucro.at(inicio - 1);
//         }
//         cout << "O lucro entro o dia " << inicio << " e " << fim << " eh: " << resultado;
//     }
// }













