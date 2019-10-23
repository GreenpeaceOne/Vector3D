#include <iostream>
#include <cassert>
#include "Vector3D.h"
using namespace std;

int main() {

    Vector3D a0;
    Vector3D a(1, 4, 6);
    Vector3D b(3, 4, 5);
    Vector3D c(6, 7, 8);


    float *aa = a0.GetValue();

    assert(*(aa+0) == 0 && *(aa+1)==0 && *(aa+1)==0);

    


//    assert(a[0] == 1 && a[1] == 2 && a[2]==3 );
//
//    assert(a.getX() == 1 && a.getY() == 2 && a.getZ()==3 );
//
//    assert(a == Vector3D(1, 2, 3));
//
//    Vector3D N_a = a;
//
//    assert(a == N_a);









    return 0;
}