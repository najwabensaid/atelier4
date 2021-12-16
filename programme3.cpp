#include <iostream>
#include<list>
#include<iterator>


using namespace std;
void afficher_list (list <int> n){
list<int>::iterator it ;
for(it=n.begin();it!=n.end();++it)
 cout << "\t" << *it ;
  cout << "\n"  ;
}

int main()
{
    list <int> grlist1;
     int i ,r;
for (int i = 0; i < 10; ++i)
{
  cout << "VEUILLEZ SAISIR UN NOMBRE ENTIER :\n";
  cin >>r;
grlist1.push_back(r);
}
cout << "la liste est :";
afficher_list(grlist1);
cout << "\nla liste triee en ordre coissant : ";
grlist1.sort();
afficher_list(grlist1);

    return 0;
}

