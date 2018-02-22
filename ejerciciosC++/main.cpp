#include <iostream>

using namespace std;

int main()
{
    float radio, area;
    cout << "Introduzca el radio del circulo: " << endl;
    cin >> radio;
    area =3.1416 * (radio*radio);
    if(area > 5000)
        {
            cout << " Datos Erroneos ";
        }
    else
        {
            cout << " El area del circulo es: " << area;
        }
    return 0;
}
