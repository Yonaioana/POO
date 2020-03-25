#ifndef VECTOR_COMPLEX_H_INCLUDED
#define VECTOR_COMPLEX_H_INCLUDED
#include"COMPLEX.h"
#include"COMPLEX.cpp"

class VECTOR_COMPLEX
    { friend class COMPLEX;
public:
    VECTOR_COMPLEX(int n);                //   vector n elemente        // Constructor
    VECTOR_COMPLEX();                               //vector 0 elemente
    ~VECTOR_COMPLEX();                           // Destructor
    VECTOR_COMPLEX(const VECTOR_COMPLEX &);  //   Copy constructor
    VECTOR_COMPLEX(int,int);
    VECTOR_COMPLEX & operator =(const VECTOR_COMPLEX &);
    VECTOR_COMPLEX& operator = (int);
    float vector_module(VECTOR_COMPLEX w,int n, COMPLEX c);
    int sortare_crescatoare(VECTOR_COMPLEX w,int n,COMPLEX c);
    int suma(VECTOR_COMPLEX w,int n,COMPLEX c);
   VECTOR_COMPLEX(VECTOR_COMPLEX , int);
private:
    int len;
    COMPLEX *v;


    };

#endif // VECTOR_COMPLEX_H_INCLUDED
