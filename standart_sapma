#include <iostream>
#include <cmath>
using namespace  std;
int  veriler[30] = {
    58,78,2,31,12,38,46,64,15,45,48,58,78,3,31,12,
    38,46,64,15,98,78,39,73,91,82,28,1,2,27,
};

double aritmetik_ort();
double kareler_farki();
double standart_sapma();
void goster();

int main() {
    cout<<"aritmetik ortalama : "<<aritmetik_ort()<<endl;
    cout<<"kareler farki : "<<kareler_farki()<<endl;
    cout<<"standart sapma : "<<standart_sapma()<<endl;
    goster();

	
}

double aritmetik_ort(){
    double toplam;   
    for(int i=0; i < 30; i++){
        toplam += veriler[i];
    }
    double aortalama = toplam/30;
    return aortalama;
}

double kareler_farki(){
    double aOKareFarkToplami;
    for(int i = 0; i<30; i++){
    aOKareFarkToplami += pow((aritmetik_ort()-veriler[i]), 2);
    return aOKareFarkToplami;
    }
}

double standart_sapma(){
    double standart_sapma;
    standart_sapma = pow((kareler_farki()/29), 0.5);
    return standart_sapma;
}

void goster(){
    for(int i=0; i<30; i++){
        if(aritmetik_ort()-3*standart_sapma() <= veriler[i] || veriler[i] >= aritmetik_ort()+ 3*standart_sapma()){
            cout<<"veriler("<<i<<") : "<< veriler[i]<<endl;
        }
    }
}
