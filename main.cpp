#include <iostream>

using namespace std;

int main()
{
    string mensaje;
    cout << "Ingrese su mensaje:" << endl;
    getline(cin, mensaje);

    for(int i = 0; i < mensaje.length(); i++)
    {
    if (mensaje[i] == ' ')
    {
        mensaje[i] = ' ';
    }
    else if (mensaje[i] == 'a')
    {
        mensaje[i] = '1';
    }
    else if (mensaje[i] == 'A')
    {
        mensaje[i] = '1';
    }
    else if (mensaje[i] == 'e')
    {
        mensaje[i] = '2';
    }
    else if (mensaje[i] == 'E')
    {
        mensaje[i] = '2';
    }
    else if (mensaje[i] == 'i')
    {
        mensaje[i] = '3';
    }
    else if (mensaje[i] == 'I')
    {
        mensaje[i] = '3';
    }
    else if (mensaje[i] == 'o')
    {
        mensaje[i] = '4';
    }
    else if (mensaje[i] == 'O')
    {
        mensaje[i] = '4';
    }
    else if (mensaje[i] == 'u')
    {
        mensaje[i] = '5';
    }
    else if (mensaje[i] == 'U')
    {
        mensaje[i] = '5';
    }
    else if (mensaje[i] == 'x')
    {
        mensaje[i] = 'a';
    }
    else if (mensaje[i] == 'X')
    {
        mensaje[i] = 'A';
    }
    else if (mensaje[i] == 'y')
    {
        mensaje[i] = 'b';
    }
    else if (mensaje[i] == 'Y')
    {
        mensaje[i] = 'B';
    }
    else if (mensaje[i] == 'z')
    {
        mensaje[i] = 'c';
    }
    else if (mensaje[i] == 'Z')
    {
        mensaje[i] = 'C';
    }
    else
    {
        mensaje[i] = mensaje[i] + 3;
    }
    }
    cout<<endl;
    cout << "Mensaje cifrado:" << endl;
    cout<<mensaje;
    return 0;
}
