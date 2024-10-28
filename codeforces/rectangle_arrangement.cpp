#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int c = 0; cin >> c;
    while(c--){
        int n = 0; cin >> n;
        vector<int> sizes(n * 2);
        for(int i = 0; i < sizes.size(); i++){
            cin >> sizes[i];
        }
        int oldH = 0;
        int oldW = 0;
        for(int j = 0; j < (n * 2); j++){
            if(j % 2 == 0){ // par = width
                if(sizes[j] > oldW){
                oldW = sizes[j];

                }
            } else {
                if(sizes[j] > oldH){ // impar = height
                    oldH = sizes[j];
                }
            }
        }
        cout << (oldH * 2) + (oldW * 2) << endl;

    }
}
