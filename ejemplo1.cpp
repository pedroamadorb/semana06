#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream archivo("datos.txt");
    
    string texto;
    
    cout << "Ingrese e texto: ";
    
    while (texto != "*")
    {
        getline(cin, texto);
        //cout << "Linea Ingresada es: " << texto << endl;
        
        if (texto != "*")
        archivo << texto << endl;
    }
    
    archivo.close();
    
    
    return 0;
}