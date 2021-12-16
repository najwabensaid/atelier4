#include <iostream>
#include <exception> // bibliotheque exception qui contient class exception

using namespace std;
class Test{
public:

static int tableau[] ;
public :
static int division(int indice, int diviseur){
return  tableau[indice]/diviseur;
}
};
class MyException : public exception{
public:
const char * what() const throw()
{
return "erreur :le diviseur ne doit pas etre nul \n";
}
};
class MyException2 : public exception{
public:
const char * what() const throw()
{
return "erreur :l indice doit etre compris entre 0 et9 \n"  ;
}
};int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;

int main()

 {
    try
{
int x, y;
cout << "Entrez l indice de l entier a diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;

 if (y == 0)
{  MyException z;
throw z;
}
else if (x > 9 || x<0){

  MyException2 z;
throw z;

}
else{  cout << "Le resultat de la division est: "<< endl;
        cout <<Test::division(x,y) << endl;}}
catch(exception& e)
{
cout << e.what();
}
return 0;
}
