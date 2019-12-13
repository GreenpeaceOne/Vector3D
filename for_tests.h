//
// Created by victor on 23.10.2019.
//
#include <cassert>
#include "Vector3D.h"


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

void test_mul(){
    assert(Vector3D(12,45,56)*Vector3D(1,1,1)==Vector3D(-11, 44, -33));
    assert(Vector3D(22.5,17.9,43.2)*Vector3D(19.1,72.5,39.7)==Vector3D(-2421.37012, -68.1299438, 1289.35999));
    assert(Vector3D(59.3,23.9,2)*Vector3D(15.3,83.4,99)==Vector3D(2199.2998, -5840.09961, 4579.9502));
    assert(Vector3D(55.2,23,29)*Vector3D(12,13,19)==Vector3D(60, -700.800049, 441.600037));
    assert(Vector3D(78.5,33.6,29.5)*Vector3D(17,5,8)==Vector3D(121.299988, -126.5, -178.699951));

}

void test_scalar(){
    assert(Vector3D(12,45,56).scalar(Vector3D(1,1,1))==113);
    assert(Vector3D(22.5,17.9,43.2).scalar(Vector3D(19.1,72.5,39.7))==3442.54f);
    assert(Vector3D(59.3,23.9,2).scalar(Vector3D(15.3,83.4,99))==3098.55f);
    assert(Vector3D(55.2,23,29).scalar(Vector3D(12,13,19))==1512.4f);
    assert(Vector3D(78.5,33.6,29.5).scalar(Vector3D(17,5,8))==1738.5);


}

void test_mul_num() {
    assert(Vector3D(12,45,56)*5==Vector3D(60, 225, 280));
    assert(Vector3D(22.5,17.9,43.2)*4==Vector3D(90, 71.6, 172.8));
    assert(Vector3D(59.3,23.9,2)*22.5==Vector3D(1334.25, 537.75, 45));
//    assert(Vector3D(55.2,23,29)*39.7==Vector3D(2191.44, 913.1, 1151.3));
//    assert(Vector3D(78.5,33.6,29.5)*18.4==Vector3D(1444.4, 618.24, 542.8));

};

void test_mix() {
    assert(Vector3D(12,45,56).mix(Vector3D(1,1,1), Vector3D(11, 44, 55))==0);
    assert(Vector3D(22.5,17.9,43.2).mix(Vector3D(19.1,72.5,39.7), Vector3D(3.5, -54.5, 3.5))==float(-248.949219));
    assert(Vector3D(59.3,23.9,2).mix(Vector3D(15.3,83.4,99), Vector3D(44, -59, -97))==-2920.0625);
    assert(Vector3D(55.2,23,29).mix(Vector3D(12,13,19), Vector3D(43, 10, 10))==-12);
    assert(Vector3D(78.5,33.6,29.5).mix(Vector3D(17,5,8), Vector3D(61.5, 28, 21.5))==float(75.9003906));
}

void test_lenght(){
    assert(Vector3D(12,45,56).length()==float(72.835434));
    assert(Vector3D(22.5,17.9,43.2).length()==float(51.8931618));
    assert(Vector3D(59.3,23.9,2).length()==float(63.9663963));
    assert(Vector3D(55.2,23,29).length()==float(66.4608154));
    assert(Vector3D(78.5,33.6,29.5).length()==float(90.3407974));
}
