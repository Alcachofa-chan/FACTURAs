#include <unordered_set>
#include <fstream>
#include <sstream>

//#include <utility>

// DNI, Nombre, Sexo, Edad

using namespace std;

const pair<int, int> rango_edad = make_pair(15, 30);

unordered_set<string> ObtenerNombres(string f_name){

    unordered_set<string> nombres;
    ifstream unisex_names(f_name);

    if(!unisex_names.is_open()){
        throw runtime_error("Could not open file");
    }

    string line;
    getline(unisex_names, line);

    stringstream ss(line);
    string tmp_word;
    
    while(getline(ss, tmp_word, ',')){
        nombres.insert(tmp_word);
    }

    return nombres;
}

int main (int argc, char *argv[])
{
    

    string name_file = "unisex_names.csv";
    unordered_set<string> nombres;
    nombres = ObtenerNombres(name_file);



    return 0;
}
