#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector <string> split (string texto, char separador)
{
     vector <string> datos;
     string valor;
     
     for (auto i : texto)
    {
        if (i != separador)
        {
            valor = valor + i;
        }
        else
        {
            datos.push_back(valor);
            valor.clear();
        }
    }
    datos.push_back(valor);
    return datos;
}

int main()
{
 string na ="datos3.txt";
 
 ifstream archivo(na);
 
 string texto;
 
 vector<string> vlineas;
 
 while(getline(archivo, texto))
 {
     //cout << texto << endl;
     vlineas.push_back(texto);
 }
 for (auto i : vlineas)
 {
     cout << i << endl;
 }
 
 for ( int i = 0; i < vlineas.size(); i++)
 {
     cout << vlineas[i]<< endl;
 }
 
 vector<string> nombres;
 vector<float> notas1;
 vector<float> notas2;
 
 for (int i = 1; i < vlineas.size(); i++)
 {
     auto datos = split(vlineas[i], ',');
     nombres.push_back(datos[0]);
     
     
     notas1.push_back(atof(datos[1].c_str()));
     notas2.push_back(atof(datos[2].c_str()));
 }
 
 for (auto i: nombres)
        cout << i << endl;

 for (auto i: notas1)
        cout << i << endl;
        
 return 0;   
}