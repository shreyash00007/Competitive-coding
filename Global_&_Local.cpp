#include <iostream>

using namespace std;

int Aglobal[3]; // Global variable

int main()
{
    int Alocal[3]; // Local variable
    cout<<"Aglobal is:"<<Aglobal[0]<<" "<<Aglobal[1]<<" "<<Aglobal[2]<<"\n";
    cout<<"Alocal is:"<<Alocal[0]<<" "<<Alocal[1]<<" "<<Alocal[2]<<"\n";
    return 0;
}
