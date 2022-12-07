#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>


using namespace std;

 class Sifra
 {
 public:
    int duzina,duzina_niza,n;
    string niz;
    bool velika_slova, mala_slova, brojevi, znakovi;
    string niz_vs="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string niz_ms="abcdefghijklmnopqrstuvwxyz";
    string niz_b="01234567890123456789";
    string niz_z="!@#$%^&*?!@#$%^&*?!@#$%^&*?";
    int duzina_vs=niz_vs.size()-1;
    int duzina_ms=niz_ms.size()-1;
    int duzina_b=niz_b.size()-1;
    int duzina_z=niz_z.size()-1;

    void unos(int x)
    {
    unos2:cout<<"Unesite zeljenu duzinu passworda: ";
    cin>>duzina;
    while(duzina<8)
    {
        cout<<"Duzina passworda mora biti najmanje 8 znakova, unsite ponovno: ";
        cin>>duzina;
    }
    unos:cout<<endl;
    cout<<"Velika slova (1-da, 0-ne): ";
    cin>>velika_slova;
    cout<<endl;
    cout<<"Mala slova (1-da, 0-ne): ";
    cin>>mala_slova;
    cout<<endl;
    cout<<"Brojevi (1-da, 0-ne): ";
    cin>>brojevi;
    cout<<endl;
    cout<<"Specijalni znakovi (1-da, 0-ne): ";
    cin>>znakovi;
    cout<<endl;
     if (velika_slova==0 and mala_slova==0 and brojevi==0 and znakovi==0)
    {
        cout<<"Morate odabrati bar jednu opciju!"<<endl;
        goto unos;
    }

    srand(time(0));
    cout<<"Generisani password"<<endl;
    for(int i=0;i<duzina;i++)
    {
        if (velika_slova==1 and mala_slova==0 and brojevi==0 and znakovi==0)
        {
            cout<<niz_vs[rand()%duzina_vs];
        }
        if (velika_slova==0 and mala_slova==1 and brojevi==0 and znakovi==0)
        {
            cout<<niz_ms[rand()%duzina_ms];
        }
        if (velika_slova==0 and mala_slova==0 and brojevi==1 and znakovi==0)
        {
            cout<<niz_b[rand()%duzina_b];
        }
        if (velika_slova==0 and mala_slova==0 and brojevi==0 and znakovi==1)
        {
            cout<<niz_z[rand()%duzina_z];
        }
        if (velika_slova==1 and mala_slova==1 and brojevi==0 and znakovi==0)
        {
            niz=niz_vs+niz_ms;
            duzina_niza=duzina_vs+duzina_ms;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==1 and mala_slova==0 and brojevi==1 and znakovi==0)
        {
            niz=niz_vs+niz_b;
            duzina_niza=duzina_vs+duzina_b;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==1 and mala_slova==0 and brojevi==0 and znakovi==1)
        {
            niz=niz_vs+niz_z;
            duzina_niza=duzina_vs+duzina_z;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==0 and mala_slova==1 and brojevi==1 and znakovi==0)
        {
            niz=niz_ms+niz_b;
            duzina_niza=duzina_ms+duzina_b;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==0 and mala_slova==1 and brojevi==0 and znakovi==1)
        {
            niz=niz_ms+niz_z;
            duzina_niza=duzina_ms+duzina_z;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==0 and mala_slova==0 and brojevi==1 and znakovi==1)
        {
            niz=niz_b+niz_z;
            duzina_niza=duzina_b+duzina_z;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==1 and mala_slova==1 and brojevi==1 and znakovi==0)
        {
            niz=niz_vs+niz_ms+niz_b;
            duzina_niza=duzina_vs+duzina_ms+duzina_b;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==0 and mala_slova==1 and brojevi==1 and znakovi==1)
        {
            niz=niz_ms+niz_b+niz_z;
            duzina_niza=duzina_ms+duzina_b+duzina_z;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==1 and mala_slova==0 and brojevi==1 and znakovi==1)
        {
            niz=niz_vs+niz_b+niz_z;
            duzina_niza=duzina_vs+duzina_b+duzina_z;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==1 and mala_slova==1 and brojevi==0 and znakovi==1)
        {
            niz=niz_vs+niz_ms+niz_z;
            duzina_niza=duzina_vs+duzina_ms+duzina_z;
            cout<<niz[rand()%duzina_niza];
        }
        if (velika_slova==1 and mala_slova==1 and brojevi==1 and znakovi==1)
        {
            niz=niz_vs+niz_ms+niz_b+niz_z;
            duzina_niza=duzina_vs+duzina_ms+duzina_b+duzina_z;
            cout<<niz[rand()%duzina_niza];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"Da li zelite novu sifru (1-da, 0-ne): "<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<endl;
        goto unos2;
    }
    }


 };
int main()
{

   cout<<"==============================================================================="<<endl;
   cout<<"                            Password Generator"<<endl;
   cout<<"==============================================================================="<<endl;
   cout<<endl;
   Sifra Pass;
   int x1;
   Pass.unos(x1);


return 0;
}
