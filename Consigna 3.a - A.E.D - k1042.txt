#include <iostream>

using namespace std;

int main()
{
    double km;

    cout << "Ingrese los kilometros por hora" << endl;
    cin >> km;
    cout << "Su equivalencia es: "<< (km*0.28) << " metros por segundo" <<endl;
    return 0;
}
