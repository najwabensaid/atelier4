#include<iostream>S
#include<list>
#include<string>
using namespace std;
class personne{
	public : 
	string nom ; 
	string prenom ;
	int age;
	personne(string nom , string prenom , int age){
		this->nom = nom;
		this->prenom = prenom ;
		this->age = age;
	}
};
main(){
	list<personne> l;
	string nom , prenom ; 
	int age , n ;
	cout<<"entrer la taille de liste:"<<endl;
	cin>>n;
	for(int i =0 ; i<n ;i++){
		cout<<"entrer le nom de personne numero:"<<i+1<<":";
		cin>>nom;
		cout<<"entrer le prenom de personne numero:"<<i+1<<":";
		cin>>prenom;
		cout<<"entrer l'age de personne numero:"<<i+1<<":";
		cin>>age;
		l.push_back(personne(nom,prenom,age));
	
}
 std :: list<personne> :: iterator it;
 	cout<<" la liste est :"<<endl;
 for(it = l.begin() ; it != l.end() ; ++it){
 
 	std :: cout<<it->nom<<"  "<<it->prenom<<" l'age est:"<<it->age<<endl;
 }
   l.sort(l.nom.begin() , l.nom.end());


}
