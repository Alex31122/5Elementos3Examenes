#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int i=-1, N, X=0;
    string statement;

    cin >> N;
    do{
        getline(cin, statement);
        if(statement[1] == '+'){
            X++;
        }
        if(statement[1] == '-' ){
            X--;
        }
        i++;
    }while(i<N);

    cout << X;
    return 0;
}