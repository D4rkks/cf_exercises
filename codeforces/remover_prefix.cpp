#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int c = 0; cin >> c;
    while(c--){
        int s = 0; cin >> s;
        vector<bool> check(200001, false);
        vector<int> n(s);
        for(int i = 0; i < s; i++){
            cin >> n[i];
        }
        int v = 0;
        for(int j = (s-1); j >= 0; j--){
            if(check[n[j]] == false){
                v++;
                check[n[j]] = true;
            }else if(check[n[j]] == true){
                break;
            }
        }
        cout << s-v << endl;
    }
}
