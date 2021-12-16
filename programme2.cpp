#include <iostream>
using namespace std;

void afficherDateEtHeure(const string& s)
{
    if ( s.length() != 12 )
        cerr << "Chaine invalide." << endl;
    else
    {
        cout << "Date  : " << s.substr(0,2) << "/" << s.substr(2,2) << "/" << s.substr(4,4) << endl;
        cout << "Heure : " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
    }
}

int main(int argc, char** argv)
{
    string s("010920091123");
    afficherDateEtHeure(s); // exemple
}
