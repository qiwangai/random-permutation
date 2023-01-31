//
// Created by 王琦 on 27/1/23.
//
#include<iostream>
#include<vector>
using namespace std;
class Permutation {
    int numbers[6];
    int calls;
public:
    Permutation() {
        calls = 0;
        randomization();
    }

    void print() {
        for (int i = 0; i < 6; i++) {
            numbers[i] = i + 1;
            cout << " number: " << numbers[i] << endl;
        }

    }

    void randomization() {
        cout <<"Add your code here" << endl;
        for (int i = 5; i > 0; i--) {
            int j = rand() % (i + 1);
            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
            calls +=1;
        }
        cout << " random calls: " << calls << endl;
    }

    void Printrandomization() {
        for (int i = 0; i < 6; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }

};

int main() {
    srand(time(0));
    Permutation p;
    p.print();
    p.randomization();
    p.Printrandomization();
    cout << endl;
}