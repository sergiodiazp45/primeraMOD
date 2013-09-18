#include <iostream>
using namespace std;

double diametro (double);
double circunferencia (double);

int main()
{
double radios [5];
for (int i = 0; i < 5; i++)
{ cout << "\nIngrese el radio numero " << i << ": ";
cin >> radios[i];
cout << "Diametro del circulo: " << diametro(radios[i]) << endl;
cout << "Circunferencia: " << circunferencia(radios[i]) << endl;
}
system("pause");
}
double diametro (double r)
{ return r * 2; }
double circunferencia (double r)
{ return diametro(r) * 3.1616;}

