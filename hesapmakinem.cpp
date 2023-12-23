/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int secim=7,sayi1=0,sayi2=0,secim2=0;
do{
    cout<<"yapmak istediginiz islemi seciniz :"<<endl<<"1- Toplama"<<endl<<"2- Cikarma"<<endl<<"3- Carpma"<<endl<<"4- Bolme"<<endl<<"0- Cikis"<<endl<<"Seciminiz : ";
    cin>>secim;
    switch(secim){
        case 1:
        cout<<"Toplanacak Sayilari Giriniz"<<endl<<"İlk Sayi : ";
        cin>>sayi1;
        cout<<"\nİkinci Sayi : ";
        cin>>sayi2;
        sayi1+=sayi2;
        cout<<"Sonuc: "<<sayi1<<endl<<"Toplama Islemine Baska Sayi Eklemek İster Misiniz?"<<endl<<"1- Evet"<<endl<<"2- Hayir"<<endl<<"Cevabiniz :";
        cin>>secim2;
        if(secim2==2)
        break;
        else if(secim2==1){
                while(secim2==1){
                    cout<<"\nEklenecek Sayi : ";
                    cin>>sayi2;
                    sayi1+=sayi2;
                    cout<<"Sonuc: "<<sayi1<<endl<<"Toplama Islemine Baska Sayi Eklemek İster Misiniz?"<<endl<<"1- Evet"<<endl<<"2- Hayir"<<endl<<"Cevabiniz :";
                    cin>>secim2;
            }
            if(secim2==2)
            break;
            else
            cout<<"Yanlis Secimden Dolayi Ana Menuye Gonderildiniz\n\n";
            }
        else
        cout<<"Yanlis Secimden Dolayi Ana Menuye Gonderildiniz\n\n";
        case 2:
        cout<<"Cikarilacak Sayilari Giriniz"<<endl<<"İlk Sayi : ";
        cin>>sayi1;
        cout<<"\nİkinci Sayi : ";
        cin>>sayi2;
        sayi1-=sayi2;
        cout<<"Sonuc: "<<sayi1<<endl<<"Cikarma Islemine Baska Sayi Eklemek İster Misiniz?"<<endl<<"1- Evet"<<endl<<"2- Hayir"<<endl<<"Cevabiniz :";
        cin>>secim2;
        if(secim2==2)
        break;
        else if(secim2==1){
                while(secim2==1){
                    cout<<"\nEklenecek Sayi : ";
                    cin>>sayi2;
                    sayi1-=sayi2;
                    cout<<"Sonuc: "<<sayi1<<endl<<"Cikarma Islemine Baska Sayi Eklemek İster Misiniz?"<<endl<<"1- Evet"<<endl<<"2- Hayir"<<endl<<"Cevabiniz :";
                    cin>>secim2;
            }
            if(secim2==2)
            break;
            else
            cout<<"Yanlis Secimden Dolayi Ana Menuye Gonderildiniz\n\n";
            }
        else
        cout<<"Yanlis Secimden Dolayi Ana Menuye Gonderildiniz\n\n";
        case 3:
        
        cout<<"Carpilacak Sayilari Giriniz"<<endl<<"İlk Sayi : ";
        cin>>sayi1;
        cout<<"\nİkinci Sayi : ";
        cin>>sayi2;
        sayi1*=sayi2;
        cout<<"Sonuc: "<<sayi1<<endl<<"Carpma Islemine Baska Sayi Eklemek İster Misiniz?"<<endl<<"1- Evet"<<endl<<"2- Hayir"<<endl<<"Cevabiniz :";
        cin>>secim2;
        if(secim2==2)
        break;
        else if(secim2==1){
                while(secim2==1){
                    cout<<"\nEklenecek Sayi : ";
                    cin>>sayi2;
                    sayi1*=sayi2;
                    cout<<"Sonuc: "<<sayi1<<endl<<"Toplama Islemine Baska Sayi Eklemek İster Misiniz?"<<endl<<"1- Evet"<<endl<<"2- Hayir"<<endl<<"Cevabiniz :";
                    cin>>secim2;
            }
            if(secim2==2)
            break;
            else
            cout<<"Yanlis Secimden Dolayi Ana Menuye Gonderildiniz\n\n";
            }
        else
        cout<<"Yanlis Secimden Dolayi Ana Menuye Gonderildiniz\n\n";
        case 4:
        
        cout<<"Bolunecek Sayilari Giriniz"<<endl<<"İlk Sayi : ";
        cin>>sayi1;
        cout<<"\nİkinci Sayi : ";
        cin>>sayi2;
        sayi1/=sayi2;
        cout<<"Sonuc: "<<sayi1<<endl<<"Bolme Islemine Baska Sayi Eklemek İster Misiniz?"<<endl<<"1- Evet"<<endl<<"2- Hayir"<<endl<<"Cevabiniz :";
        cin>>secim2;
        if(secim2==2)
        break;
        else if(secim2==1){
                while(secim2==1){
                    cout<<"\nEklenecek Sayi : ";
                    cin>>sayi2;
                    sayi1/=sayi2;
                    cout<<"Sonuc: "<<sayi1<<endl<<"Toplama Islemine Baska Sayi Eklemek İster Misiniz?"<<endl<<"1- Evet"<<endl<<"2- Hayir"<<endl<<"Cevabiniz :";
                    cin>>secim2;
            }
            if(secim2==2)
            break;
            else
            cout<<"Yanlis Secimden Dolayi Ana Menuye Gonderildiniz\n\n";
            }
        else
        cout<<"Yanlis Secimden Dolayi Ana Menuye Gonderildiniz\n\n";
    }
}while(secim!=0);

    return 0;
}
