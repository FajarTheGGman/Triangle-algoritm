#include <iostream>
#include <string>

using namespace std;

void right_triangle(){
    for(int i = 0; i < 8; i++){
        cout << "*";
        for(int k = 1; k <= i; k++){
            cout << " ";
        }
        cout << "*" << endl;
    }
}

void pyramid(){
    for(int i = 1; i <= 8; i++){
        for(int a = 8; a > i; a--){
            cout << " ";
        }
        for(int c = 1; c <= i; c++){
            cout << " ";
            cout << "*";
        }
        cout << endl;
    }
}

void left(){
    cout << "*********" << endl;
    for(int i = 1; i <= 8; i++){
        cout << "*";
        for(int a = 8; a >= i; a--){
            cout << " ";
        }
        cout << "*" << endl;
    }
    cout << " *";
}

void right(){
    for(int a = 1; a <= 8; a++){
        for(int b = 8; b > a; b--){
            cout << " ";
        }
        for(int c = 1; c <= a; c++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int input;
    cout << "[ Triangle algoritm by fajar firdaus ]\n\n";
    cout << "[===========================]\n";
    cout << "Coder : Fajar Firdaus\n";
    cout << "Fb : Fajar Firdaus\n";
    cout << "IG : fajar_firdaus_7\n";
    cout << "YT : iTech7732\n";
    cout << "[===========================]\n\n";
    cout << "[=================]\n";
    cout << "1.left down triangle\n";
    cout << "2.pyramid\n";
    cout << "3.right\n";
    cout << "4.left up triangle\n";
    cout << "[=================]\n";

    cout << "root@Triangle-# ";
    cin >> input;

    if (input == 1){
        right_triangle();
    }else if (input == 2){
        pyramid();
    }else if (input == 3){
        right();
    }else if (input == 4){
        left();
    }
}