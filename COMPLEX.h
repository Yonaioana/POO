#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#endif // COMPLEX_H_INCLUDED
class COMPLEX{

private:
    int re;
    int im;
public:
    int get_re()
    {
        return re;
    }
    int get_im()
    {
        return im;}

    friend std::ostream &operator<<(std::ostream &output, COMPLEX &c);
    friend std::istream &operator>>(std::istream &input, COMPLEX& c);
   float modul(COMPLEX a);
 COMPLEX &operator + (COMPLEX c);};

