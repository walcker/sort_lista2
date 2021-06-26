#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main ()
{
   char aux;
   char vetor[10];
   int cont = 0;

   cout <<"Entre com os elementos a serem ordenados" << endl;
   for(int i = 0; i < 10; i++) {
      cin >> vetor[i];
   }

    cout<<endl;

    for(int i = 0; i < 10; i++) {
       for(int j = i+1; j < 10; j++)
       {
          if(vetor[j] < vetor[i]) {
             aux = vetor[i];
             vetor[i] = vetor[j];
             vetor[j] = aux;
          }
       }
    cont++;
    }

    cout <<"Elementos alinhados do menor para o maior" << endl;
    for(int i = 0; i < 10; i++) {
       cout <<vetor[i]<< " ";
    }

    cout << endl;

    return 0;
    }
