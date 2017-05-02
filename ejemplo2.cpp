#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string pedro1 = "datos2.txt";
    ifstream archivo (pedro1);
    
    string texto;
    
    while (getline(archivo,texto))
    {
        cout << texto << endl;
    }
    
    archivo.close();
    
    
    return 0;
}