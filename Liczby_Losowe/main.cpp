#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int proby=0;
int strzal;
int liczba;
int main()
{
    cout << "Witaj! W mojej glowie pojawila sie liczba od 1 do 100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        proby++;
        cout <<"Zgadnij jaka to liczba (To twoja "<<proby<<" proba):";
        cin>> strzal;

        if(strzal==liczba)
        cout <<"Udalo sie, wygrywasz w "<<proby<<" probie" << endl;

        else if(strzal<liczba)
            cout << "To za malo!" << endl;

        else if(strzal>liczba)
            cout << "To za duzo!" << endl;

    }
    system("pause");
    return 0;
}
