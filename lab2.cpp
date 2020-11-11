#include <iostream>

class Wektor
{
public:
    Wektor(int dlugoscW)
    {
        st = new double[dlugoscW];
        for (int i = 0; i < dlugoscW; i++) {
            st[i] = 0.;
        }
        dlugosc = dlugoscW;
    }
    Wektor()
    {
        st = new double[5];
        for (int i = 0; i < 5; i++) {
            st[i] = 0.;
        }
    }
    int  getDlugosc() { return dlugosc; }
    int  getPojemnosc() { return pojemnosc; }
    void print()
    {
        for (int i = 0; i < dlugosc; i++) {
            std::cout << st[i] << " ";
            std::cout << "\n";
        }
    }

    void ZmienDlug(int b)
    {
        if (b < pojemnosc) {
            for (int i = b; i < pojemnosc; i++)
                st[i] = 0;
        }
        if (b > pojemnosc) {
            double* st2;
            st2 = st;
            st  = new double[b];
            for (int i = 0; i < pojemnosc; i++)
                st[i] = st2[i];
            delete[] st2;
            for (int i = pojemnosc; i < b; i++)
                st[i] = 0;
            pojemnosc = b;
        }
        dlugosc = b;
    }

private:
    int     dlugosc = 5;
    int     pojemnosc;
    double* st;
};

int main()
{
    puts("Hello, World!");
}
