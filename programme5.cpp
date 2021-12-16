#include <iostream>
#include <iterator>
#include <set>
using namespace std;
/*void a_rechercher;
 bool rechercher( set<int, greater<int> > s1 , int nbr){// fonction booliene qui affiche si un nombre existe ou non dans le set
auto a_rechercher = s1.find(nbr); //Le automot clé indique au compilateur d'utiliser l'expression d'initialisation d'une variable déclarée
if(a_rechercher != s1.end()){ // si il n' a pas cerclee tous le set "il l'a trouve'
     cout << "\n\n";
  return true;
}
 else // si il a cercle tous la liste
       cout << "\n\n";
  return false;
};
*/
bool rechercherM( set<int, greater<int> > s1 , int nbr){
set<int, greater<int> >::iterator itr;
for (itr = s1.begin(); itr != s1.end(); itr++) 
if(s1.find(nbr) != s1.end()){ 
     cout << "\n\n";
  return true;
}


    else
       cout << "\n\n";
  return false;
}

int main()
{
    int i , nbr ;
    set<int, greater<int> > s1;
for(i=100 ; i >0 ; i--){s1.insert(i);} 
set<int, greater<int> >::iterator itr;
cout << "\nThe set s1 is : \n";
for (itr = s1.begin(); itr != s1.end(); itr++) 
{
cout << *itr<<" ";

}
cout << "\t\nentrer le nombre a rechercher \n ";
cin>>nbr ;

/*cout << "\npour la fonction  \n";
cout   << rechercher( s1 , nbr)  ; // apel fonction avec ses paramétres*/
cout << "\npour la fonction modilisee \n";
cout   << rechercherM( s1 , nbr)  ;





}
