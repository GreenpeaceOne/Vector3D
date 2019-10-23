#include <iostream>
#include <cassert>
#include "Vector3D.h"
#include "for_tests.h"


int main() {

    Vector3D a0;
    float *a0_t = a0.getValue();
    assert(*(a0_t+0) == 0 && *(a0_t+1)==0 && *(a0_t+1)==0);

    Vector3D a(1, 2, 3);
    float  *a_t = a.getValue();
    assert(*(a_t+0) == 1 && *(a_t+1)==2 && *(a_t+2)==3);

    Vector3D a_cpy = a;
    float *a_cpy_t = a_cpy.getValue();
    assert(*(a_t+0) == *(a_cpy_t+0) && *(a_t+1)==*(a_cpy_t+1) && *(a_t+2)==*(a_cpy_t+2));

    assert(a[0]==1 && a[1]==2 && a[2]==3);

    assert(a.getX()==1 && a.getY()==2 && a.getZ()==3);

    test_minus();
    test_plus();

//    cout<<Vector3D(12,45,56)+Vector3D(1,1,1)<<"\n";
//    cout<<Vector3D(22.5,17.9,43.2)+Vector3D(19.1,72.5,39.7)<<"\n";
//    cout<<Vector3D(59.3,23.9,2)+Vector3D(15.3,83.4,99)<<"\n";
//    cout<<Vector3D(55.2,23,29)+Vector3D(12,13,19)<<"\n";
//    cout<<Vector3D(78.5,33.6,29.5)+Vector3D(17,5,8)<<"\n";





    return 0;
}

