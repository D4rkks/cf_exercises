#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    int c = 0; cin >> c;
    while(c--){
        string a; cin >> a;
        if(a.size()%2 == 0){
            int s = 0;
            int e = a.size() - 1;
            int m = (e + s)/2;
            bool t = true;
            while(t){
                if(m == -1 || e == (e + s)/2){
                    cout << "YES" << endl;
                    break;
                }
                if(a[m] == a[e]){
                    t = true;
                    m--; e--;
                } else{
                    t = false;
                    cout << "NO" << endl;
                }
            }
            
        } else{
            cout << "NO" << endl;
        }

    }
}
