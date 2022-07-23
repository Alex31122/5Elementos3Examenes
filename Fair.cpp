#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int arr[4], aux, aux2;
    int cases;
    cin >> cases;

    for(int i=0; i<cases; i++){
        cin >> arr[0];
        cin >> arr[1];
        cin >> arr[2];
        cin >> arr[3];

        if(arr[0] < arr[1]){
            aux = arr[1];
        }else{
            aux = arr[0];
        }

        if(arr[2] < arr[3]){
            aux2 = arr[3];
        }else{
            aux2 = arr[2];
        }
        sort(arr,arr+4);

        if((aux == arr[3] || aux == arr[2]) && (aux2 == arr[3] || aux2 == arr[2])){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}