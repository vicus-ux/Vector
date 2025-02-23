#include "Vector.hpp"
#include <iostream>

int main()
{
    double arr[ArithmVectorN::N] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
    ArithmVectorN res;

    ArithmVectorN a;
    for (int i = 0; i < ArithmVectorN::N; i++)
    {
        a[i] = arr[i];
    }
    std::cout << "Vector a: " << a << "\n";

    ArithmVectorN b;
    for (int i = 0; i < ArithmVectorN::N; i++)
    {
        b[i] = arr[i];
    }
    std::cout << "Vector b: " << b << "\n";

    res = a + b;
    std::cout << "a + b = " << res << '\n';

    res = a - b;
    std::cout << "a - b = " << res << '\n';

    double scal = 2.0;
    res = a * scal;
    std::cout << "a * scal = " << res << '\n';

    res = a / scal;
    std::cout << "a / scal = " << res << '\n';

    a += b;
    std::cout << "Vector a after a += b: " << a << '\n';

   a -= b;
    std::cout << "Vector a after a -= b: " << a << '\n';

    if (a == b) {
        std::cout << "a = b\n";
    }
    else {
        std::cout << "a != b\n";
    }

    std::cout << "The length of the vector a:" << a.abs() << std::endl;
    std::cout << "The product of vectors a and b: " << a.dot(b) << std::endl;

    return 0;
}