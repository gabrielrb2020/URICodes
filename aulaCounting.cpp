#include<bits/stdc++.h>

using namespace std;

// void mostraVet(vector<int> vet){
//     for (auto i: vet){
//         cout << i << " ";
//     }
//     cout << endl;
// }

// int main(){
//     vector<int> vet = {1,4,5,2,7,5,0};
//     int maxValue = *max_element(vet.begin(), vet.end());
//     vector<int> vetAux(maxValue+1, 0);

//     mostraVet(vetAux);

//     for(int i = 0; i < vet.size(); i++){
//         vetAux[vet.at(i)] += 1; 
//         mostraVet(vetAux);
//     }

//     for(int i = 0; i < vetAux.size(); i++) {
//         cout << vetAux.at(i) << " ";
//     }
//     cout << endl;
// }


int main(){
    vector<int> vet;
    int qtd, aux;
    cin >> qtd;
    for(int i = 0; i < qtd; i++) {
        cin >> aux;
        vet.push_back(aux);
    }
    int maiorElemento = *max_element(vet.begin(), vet.end());
    vector<int> vetorContador(maiorElemento+1, 0);

    for(int i = 0; i < vet.size(); i++) {
        vetorContador[vet.at(i)] += 1;
    }
    
    vector<int> vetorOrdenado;
    for(int i = 0; i < vetorContador.size(); i++){
        for(int j = 0; j < vetorContador.at(i); j++){
            vetorOrdenado.push_back(i);
        }
    }
    
    for(int i = 0; i < vetorOrdenado.size(); i++) {
        cout << vetorOrdenado.at(i) << " ";
    }
    cout << endl;
}

