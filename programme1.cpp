#include <iostream>
using namespace std;

class complexe {
    double Re;
    double Img;

public:
    complexe(double a = 0, double b = 0)
    {
	Re = a;
	Img = b;
    }
    void afficher()
    {
    	cout <<" \n"<<Re ;
		//Pour ne pas afficher Re+-Img *i (si Img est negatif).
        if (Img >= 0)
            cout << " + ";
			cout << Img << "i\n" << endl;
    }
	//Opérateur d'addition: complexe + complexe
    complexe operator+(complexe a)
    {
        complexe s;
        s.Re = Re + a.Re;
        s.Img = Img + a.Img;
        return s;
    }
    //Opérateur de division: complexe / complexe
    complexe operator /(complexe a)
    {
        complexe s;
        if (a.Img==0){
       s.Re= Re/a.Re;
        s.Img = Img /a.Re;
     }
   else if (a.Re==0){
        s.Re= Img /a.Img ;
       s.Img = -Re/a.Img;
     }
   else{
  s.Re = ( Re*a.Re + Img *a.Img)/ (a.Re*a.Re + a.Img*a.Img);
   s.Img = ((Img *a.Re) + (Re *a.Img)) / ((a.Re*a.Re) + (a.Img*a.Img));

    }return s;}
 //Opérateur : complexe + double
    complexe operator+(double x)
    {
        complexe s;
        s.Re = Re + x;
        s.Img = Img;
        return s;
    }
//Opérateur de soustraction : complexe - complexe
    complexe operator-(complexe a)
    {
        complexe s;
        s.Re = Re - a.Re;
        s.Img = Img - a.Img;
        return s;
    }
//Opérateur de multiplication : complexe * complexe
    complexe operator*(complexe a)
    {
        complexe p;
        p.Re = Re * a.Re - Img * a.Img;
        p.Img = Re * a.Img + Img * a.Re;
        return p;
    }
};
int main()
{double a1, b1, a2, b2;
    cout<<"SAISIR LA PARTIE REELLE DU 1 ERE NOMBRE : ";// demender d'entrer le  premiere nombre complexe
         cin >>a1;
          cout<<"eSAISIR LA PARTIE IMAGINNAIRE DU 1 ERE NOMBRE : ";
     cin >>b1;
     cout<<"SAISIR LA PARTIE REELLE DU 2 EME NOMBRE : ";// demender d'entrer le deusiemme nombre complexe
         cin >>a2;
          cout<<"SAISIR LA PARTIE IMAGINNAIRE DU 2 EME NOMBRE: ";
     cin >>b2;
     complexe a(a1, b1), b(a2,b2) , c;
    cout << "Complexe A = ";
    a.afficher();
    cout << "COMPLEXE B = ";
    b.afficher();
int menu ; 
     do
    {
        cout<<endl<<" ------------- MENU ------------"<<endl<<endl; 
        cout<<"1.soustraction"<<endl;
        cout<<"2. addition"<<endl;
        cout<<"3. division "<<endl;
        cout<<"4.produit"<<endl;
        cout<<"0. annuler"<<endl<<endl;
        cout<<"Choix : ";
        cin>>menu;
        cout<<endl;
 switch(menu) 
        {
             case 0 : break;
				case 1 :cout << "LA SOUSTRACTION DE A ET B EST: \n";
                cout << "B - A = ";
    c = (b - a);
	c.afficher();
			break;
			case 2 :cout << "L'ADDITION DE A ET B EST: \n";
                 cout << "A + B = ";
    c = (a + b);
	c.afficher();
			break;
				case 3 :cout << "LA DIVITION DE A ET B EST: \n";
                cout << "B / A = ";
    c = (b / a);
	c.afficher();
            break;
             case 4 :cout << "LA MULTIPLICATION DE A ET B EST: \n";
                 cout << "A * B = ";
           c = (a * b);
	       c.afficher();
            break;
} }while (menu!=0);
}
