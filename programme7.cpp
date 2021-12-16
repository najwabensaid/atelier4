#include <iostream>
#include <list>
#include <iterator>
using namespace std ;
class repas ; //declaration du class repas
class elements ;//declaration du class elements
class entraineur ;//declaration du class entraineur
class chien  ;//declaration du class chien
class compitition ;//declaration du class compitision
class repas {
private:
int atta ;
list<elements> *lisb ;
//composition association
public :
repas(){
// get in instance in the A instance because its a composition relation
lisb = new list<elements>();
}
void setAtta(int atta){
this->atta = atta ;
}
int getAtta(){
return this->atta ;
}
void setlistB(list<elements> *lisb ){
this->lisb = lisb ;
}
list<elements>* getlistB(){
return this->lisb ;
}
~repas(){
// destroy the lisb in the same time as A boject "composition"
delete this->lisb ;
cout << "call dist of repas" << endl ;
}
};
class elements {
private:
string nom , type ;
repas a ;
public :
void setAttb(string nom , string type){
this->nom = nom ;
this->type = type ;
}
string getAttb(){
return this->nom ;
return this->type ;
}
void setA( repas a){
this->a = a ;
}
repas getA(){

return this->a ;
}
~elements(){
cout << "call dist of elements" << endl ;
}
};
//association classe.
class entraineur {
private:
string description , nom ;
list<chien> lisb ;
public :
void setAtta(string description ,string nom ){
this->description = description ;
this->nom = nom ;
}
string getAtta(){
return this->description ;
return this->nom ;
}

void setlistB(list<chien> lisb ){
this->lisb = lisb ;
}
list<chien> getlistB(){
return this->lisb ;
}
};

class chien {
private:
string taille ;
public: ischass3();
list<entraineur> lista ;
public :
void setAttb(string taille){
this->taille = taille ;
}
string getAttb(){
return this->taille ;
}
void setlistA(list<entraineur> lista){
this->lista = lista ;
}
list<entraineur> getlistA(){
return this->lista ;
}
};
class compititionS {
private :
 string date , nom ;
chien b ;
entraineur a ;
public :
    int order ;
void setAttc(string date , string nom , int order ){
this->date = date ;
this->nom = nom ;
this->order = order ;
}
string getAttb(){
return this->date ;
return this->nom ;
}
int getAttbI(){
return this->order ;
}
void setA(entraineur a){
this->a = a ;
}
entraineur getA(){
return this->a ;
}
void setB(chien b){
this->b = b ;
}
chien getB(){
return this->b ;
}
} ;
int main(){
return 0 ;
}
