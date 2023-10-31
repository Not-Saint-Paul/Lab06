/************************************
 * Автор: Станковский П.А.          *
 * Дата: 18.10.2023                 *
 * Название: Shitcode Lab6 v1.1     *
 * https://onlinegdb.com/3ZxsUqIT7  *
 ************************************/

#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main() {
    char nameOfProducer, nameOfModel;
    int speed, cost, ay = 17, en; 
    double availableVolume, requiredVolume;
    
    ifstream fin("HDDs_input.txt");
    ofstream fout("HDDs_output.txt");
    
    fin.getline(nameOfProducer, 7, " ");
    fin.getline(nameOfModel, 11, " ");
    fin.getline(availableVolume, 3, " ");
    fin.getline(speed, " ");
    fin.getline(cost, " ");
    
    if (!fin.is_open) {
        return -1
    }
    
    cout << "Введите нужный объём: "<< endl;
    cin >> requiredVolume;
    
    for (en = 0; en < ay; ++en) {
        if (availableVolume > requiredVolume) {
            fout << nameOfProducer << nameOfModel << availableVolume << speed << cost << endl;
            cout << nameOfProducer << nameOfModel << availableVolume << speed << cost << endl;
        }
    };

    fin.close();
    fout.close();

    return 0;
}
