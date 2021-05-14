#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, disc, x1, x2;

    cout << "Ingrese los coeficientes de su ecuacion lineal: 'a' 'b' y 'c' " << endl;
    cin >> a; cin >> b; cin >> c;

    if(a>0)
    {
        disc = (pow(b,2)-(4*a*c));
        if( (pow(disc,0.5)) >= 0)
        {
            x1 = ( ( -b + (pow(disc,0.5)) ) / (2*a) ) ;
            x2 = ( ( -b - (pow(disc,0.5)) ) / (2*a) ) ;
            cout << "Las raices de esta ecuacion lineal son: " << x1 << " y " << x2 << endl;
        }
        else
        cout << "Esta ecuacion tiene raices complejas" << endl;
    }
    else
        cout << "El coeficiente cuadratico debe ser distinto de cero" << endl;

    return 0;
}
