#include<iostream>
#include"COMPLEX.h"
#include<cmath>
std::istream& operator>>(std::istream &input, COMPLEX& c){
   input >> c.re>>c.im;
   return input;
   //return c.a >> c.b;
}

std::ostream &operator<<(std::ostream &output, COMPLEX &c){
   output << c.re << "+" << c.im << "i";
   return output;
   //return "a: " << c.a << "b: " << c.b;
}

float modul(COMPLEX a)
{
    return sqrt(pow(a.re,2)+pow(a.im,2));
}//return abs complex number

{
  COMPLEX &operator + (COMPLEX c)
       {
           COMPLEX result;
           result.re = re + c.re;
           result.im = im + c.im;

           return result;
       }
