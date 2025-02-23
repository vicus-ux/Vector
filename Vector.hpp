#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <iostream>


class ArithmVectorN {
public:
    static const int N = 10;
    ArithmVectorN();
    double& operator[](int index);
    ArithmVectorN operator+(ArithmVectorN b);
    ArithmVectorN operator-(ArithmVectorN b);
    ArithmVectorN operator*(double b);
    ArithmVectorN operator/(double b);
    ArithmVectorN& operator+=(ArithmVectorN b);
    ArithmVectorN& operator-=(ArithmVectorN b);
    bool operator==(ArithmVectorN b);
    bool operator!=(ArithmVectorN b);

    double abs();
    double dot(ArithmVectorN b);

    friend std::istream& operator>>(std::istream& in, ArithmVectorN& a);
    friend std::ostream& operator<<(std::ostream& out, ArithmVectorN a);

private:
    double arr[N];
};
#endif //VECTOR_HPP
