#include <iostream>

using namespace std;

int main()
{
    int cont = 0, n, chi;
    cin >> n;
    while (cont < n){
        cin >> chi;
        if (chi > 8000){
            cout << "Mais de 8000!"  <<endl;
        }else{
        cout << "Inseto!" <<endl;
        }
        cont ++;
    }
    return 0;
}
