#include <iostream>
#include"VECTOR_COMPLEX.h"
#include"COMPLEX.h"
#include"COMPLEX.cpp"
VECTOR_COMPLEX::VECTOR_COMPLEX(int n)
    {
    len= n;
    v = new COMPLEX[n];
    }//vector cu n elemente
VECTOR_COMPLEX::VECTOR_COMPLEX()
    {
    len= 0;
    v= 0;
    }//vector cu 0 elemente

VECTOR_COMPLEX::VECTOR_COMPLEX(int c,int n){//initalizez cu c si aloc spatiu
len=n;
v=new COMPLEX[len];
for(INT i=1;i<=len;i++)
    v[i]=c;
}
VECTOR_COMPLEX::~VECTOR_COMPLEX()// Destructor
    {
    delete[] v;
    }

VECTOR_COMPLEX::VECTOR_COMPLEX(const VECTOR_COMPLEX& a)// Copy constructor
    {
    len = a.len;
    v = new float[len];
            for(int i=1;i<=len;i++)
            v[i]=a.v[i];
    }

float vector_module(VECTOR_COMPLEX w,int n,COMPLEX c){
len=n;
v=w;
for(int i=1;i<=len;i++)
    v[i]=modul(c[i]);
    return *v;}
      int sortare_crescatoare(VECTOR_COMPLEX w,int n,COMPLEX c)
      {
          v=w;
          len=n;
          for(int i=1;i<len;i++)
          for(int j=i+1;j<=len;j++)
            if (modul(c[i])> modul(c[j]))
          {

          }
      }

      int suma(VECTOR_COMPLEX w,int n,COMPLEX c)
      {
          int s=0;
          len=n;
          v=w;
          for(int i=1;i<=len;i++)
            s=s+v[i];
      return s;
      }
VECTOR_COMPLEX(VECTOR_COMPLEX w,int n)
{len=n;
v=w;
for(i=1;i<=len;i++)
    cin>>v[i];}




