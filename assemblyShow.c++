#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    int acu;
    map<string, int> memoria;
    int b;
    string a, line, ins;
    ifstream file ("programa3.txt");

    while (getline(file, line))
    {
        istringstream iss(line);
        iss >> ins >> a >> b;

        if (ins == "END")
        {
            break;
        }
        if (ins == "SET")
        {
            memoria[a] = b;
        }
        else if (ins == "LDR")
        {
            acu = memoria[a];
        }
        else if (ins == "ADD")
        {
            acu = acu + memoria[a];
        }
        else if (ins == "STR")
        {
            memoria[a] = acu;
        }
        else if (ins == "SHW")
        {
            cout << memoria[a] << endl; 
        }
        else if (ins == "INC")
        {
            memoria[a] += 1;
        }
        else if (ins == "DEC")
        {
            memoria[a] -= 1;
        }
        else if (ins == "PAUSE")
        {
            cout << "PAUSA. Para continuar presiona alguna tecla. Estos son los registros:" << endl;
            for (const auto& par : memoria) 
            {
                cout << par.first << ": " << par.second << endl;
            }
            cout << "Acumulador: " << acu << endl;
            cin.get();
        }
    }
    if (!file.is_open())
    {
        cerr << "No se pudo abrir el archivo." << endl;
    }
    file.close();
}