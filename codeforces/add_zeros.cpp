#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int c = 0; cin >> c;
    while(c--){
        int s = 0; cin >> s;
        vector<int> numbers(s, 0);

        for(int i = 0; i < s; i++){
            cin >> numbers[i];
        }

        int size = s;
        for(int j = s - 1; j > 0; j--){
          //  cout << "size: " << size << " j: " << j << endl;
            int temp = numbers.size() + 1 - j;
           // cout << "temp: " << temp << endl;
            if(temp <= s-1){
                size += numbers[temp - 1] - 1;
            }
        }
        cout << size << endl;
    }
}
