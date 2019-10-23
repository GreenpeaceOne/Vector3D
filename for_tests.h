//
// Created by victor on 23.10.2019.
//
#include <cassert>
#include "Vector3D.h"

#ifndef INC_3DVECTOR_FOR_TESTS_H
#define INC_3DVECTOR_FOR_TESTS_H

void test_minus(){
    assert(Vector3D(12,45,56)-Vector3D(1,1,1)==Vector3D(11, 44, 55));
//    assert(Vector3D(22.5,17.9,43.2)-Vector3D(19.1,72.5,39.7)==Vector3D(3.4, -54.6, 3.5));
    assert(Vector3D(59.3,23.9,2)-Vector3D(15.3,83.4,99)==Vector3D(44, -59.5, -97));
    assert(Vector3D(55.2,23,29)-Vector3D(12,13,19)==Vector3D(43.2, 10, 10));
//    assert(Vector3D(78.5,33.6,29.5)-Vector3D(17,5,8)==Vector3D(61.5, 28.6, 21.5));

//    Vector3D a = Vector3D(22.5,17.9,43.2)-Vector3D(19.1,72.5,39.7);
}

void test_plus(){
    assert(Vector3D(12,45,56)+Vector3D(1,1,1)==Vector3D(13, 46, 57));
    assert(Vector3D(22.5,17.9,43.2)+Vector3D(19.1,72.5,39.7)==Vector3D(41.6, 90.4, 82.9));
    assert(Vector3D(59.3,23.9,2)+Vector3D(15.3,83.4,99)==Vector3D(74.6, 107.3, 101));
    assert(Vector3D(55.2,23,29)+Vector3D(12,13,19)==Vector3D(67.2, 36, 48));
    assert(Vector3D(78.5,33.6,29.5)+Vector3D(17,5,8)==Vector3D(95.5, 38.6, 37.5));
}


#endif //INC_3DVECTOR_FOR_TESTS_H
