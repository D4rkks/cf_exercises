#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n = 0; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cout << "vetor: " << a[i] << endl;
    }

    int contador = 0;
    for(int i = 0; i < a.size(); i++){
       vector<int>::iterator min = min_element(a.begin(), a.end());
       cout << "min: " << *min << endl;
       if(*min != a[i]){
        int temp = a[i];
        a[0] = *min;
        a[i] = temp;
        contador++;
       }
    }
    cout << contador << endl;
}
