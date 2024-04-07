#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Cliente
{

private: // atributos o variables class "cliente"
    string customerName;
    string Address;
    string Email;
    string CreditcardInfo;
    float AccountBalance;

public:        // metodos
    Cliente(); // Constructor
    void signup();
    void login();
};

// Constructor, nos sirve para inicializar los atributos
Cliente::Cliente()
{
}

void Cliente::signup()
{
    cout << "Ingrese su nombre:\n ";
    cin >> customerName;
    cout << "Ingrese su direccion:\n ";
    cin >> Address;
    cout << "Ingrese su correo electronico:\n ";
    cin >> Email;
    cout << "Ingrese su información de tarjeta de crédito o débito:\n ";
    cin >> CreditcardInfo;
    cout << "Ingrese su saldo actual: \n";
    cin >> AccountBalance;
}

void Cliente::login()
{

    cout << "Bienvenido a su cuenta, " << customerName << ". La informacion de su cuenta es:\n " << endl;
    cout << "Nombre: \n"
         << customerName << endl;
    cout << "Direccion: \n"
         << Address << endl;
    cout << "Email: \n"
         << Email << endl;
    cout << "Informacion de tarjeta: \n"
         << CreditcardInfo << endl;
    cout << "Saldo actual: \n"
         << AccountBalance << endl;
}

int main()
{

    Cliente c1;

    c1.signup();

    string respuesta;
    cout << "Bienvenido, desea consultar su información?\n";
    cin >> respuesta;
    if (respuesta == "si" || respuesta == "yes")
    {
        c1.login();
    }
    else
    {
        cout << "Gracias por su visita.\n"
             << endl;
    }

    return 0;
}