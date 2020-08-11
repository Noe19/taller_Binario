#include <iostream>
using namespace std;
#include <fstream>
void arreglo ();
 int  arreglo (int a[],int n,int dato);
 /*
#define tamanio(a)(sizeof(a)/sizeof(a[0]));
*/
//UN PROGRAMA DE ORDENAMIENTO  , UNIDO CON ARCHIVOS Y FUNCIONES 

int main() {
  
arreglo ();
 
 int    a[10]={1,2,3,4,5,6,7,8,9};
 ////////////
 if (arreglo(a,10,5)==-1){
   cout<<"elemtento no encontrado";
 }
 else{
   cout<<"elemento encontrado en la posicion:"<<arreglo (a,10,5);//arreglo,el numero de elemntos del arreglo,y el elemento que desemaos encontar;
 }
 
  return 0;
} void arreglo(){
ofstream Binario;
Binario.open("Binario.txt",ios::app);

  int b,i,j,k;
 int  a[10]={1,2,3,4,5,6,7,8,9};
 /*
 cout<< tamanio(a);
 */
  i=0;//posicon inicila
  j=10-1;//ultimo posicion
  b=5;//datos buscado
  do{
k=(i+j)/2;//el elemento medio
if(a[k]<=b){
  i=k+1;//parte isquierda

}
if (a[k]>=b){
  j=k-1;//parte derecha
}
  }
 while (i<=j);
 Binario<<"\nelemento encontrado :   "<< a[k]<<endl;
 cout <<"\n elemento buscado :"<<b<<endl;
 
////////////

}

int   arreglo(int a[],int n,int dato){
ofstream Binario;
int i=0;
Binario.open("Binario.txt",ios::app);
 
  for (int i=0;i<=n;i++){
    if (a[i]==dato){
        Binario<<"posicion "<<i;
   
       return i;
    }
  

  }
  

 

 
  return -1;
  
}