#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int c = 0; cin >> c;
    string letters = "xabcdefghijklmnopqrstuvwxyz";
    while(c--){
        int s = 0; string n; cin >> s >> n;
        vector<int> numbers(s);
        for (int i = 0; i < s; i++) {
            numbers[i] = n[i] - '0';
        }
        int inicio = 0;
        int fim = s-1;
        while (inicio < fim) {
            swap(numbers[inicio], numbers[fim]);
            inicio++;
            fim--;
        }
        
        string temp;
        for (int i = 0; i < s; i++) {
            if(numbers[i] != 0){
                temp += letters[numbers[i]];
            } else if(numbers[i] == 0 && i+2 < s){
                int t = (numbers[i+2]*10 )+ numbers[i+1];
                temp += letters[t];
                i += 2;
            }
        }
        for (int i = temp.size() - 1; i >= 0; i--){
        cout << temp[i];
        }
        cout << endl;
    }
}
