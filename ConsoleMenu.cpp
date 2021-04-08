#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

int main(){

    int menu=-1;

    do{
        system("CLS");
        cout<<"|---------------------------------------------|"<<endl;
        cout<<"| 0- Leave                                    |"<<endl;
        cout<<"| 1- anything                                 |"<<endl;
        cout<<"| 2- anything                                 |"<<endl;
        cout<<"| 3- anything                                 |"<<endl;
        cout<<"|---------------------------------------------|"<<endl;
        cout<<"Enter a number:";
        cin>>menu;

        switch (menu)
        {
            case 0:
                cout<<"\nfinished program \n";

                break;

            case 1:                
                     system("pause");

                break;

            case 2:
                    system("pause");

                break;
            case 3:              
                    system("pause");
                break;

            default:
                cout<<"\n This number is not working, try another! \n";
                    system("pause");
                break;
            }


    }while (menu != 0);
    
}
