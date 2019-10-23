//
// Created by Victor Ph. on 20.10.2019.
//

#include <iostream>
#include <math.h>
#include <string>

using namespace std;
typedef float f;

#ifndef INC_3DVECTOR_VECTOR3D_H
#define INC_3DVECTOR_VECTOR3D_H

class Vector3D {
private:
    f x_,y_,z_;
public:
    Vector3D();
    Vector3D(f x_, f y_, f z_);
    Vector3D &operator=(const Vector3D &vec);
    Vector3D operator+(const Vector3D &vec);
//    Vector3D operator+=(const Vector3D &vec);
    Vector3D operator-(const Vector3D &vec);
//    Vector3D operator-=(const Vector3D &vec);
    Vector3D operator*(const Vector3D &vec);
    Vector3D operator*(f num);

    ~Vector3D();

    f operator[] (int i);

    f length();
    f getX();
    f getY();
    f getZ();
    f* GetValue();

    f scalar(const Vector3D &vec);
    f mix(const Vector3D &b, const Vector3D &c);

    friend ostream& operator<< (ostream& out, const Vector3D& t);
    friend istream& operator>> (istream& in, Vector3D& t);
    friend bool operator==(const Vector3D& left, const Vector3D& right);
};

Vector3D::Vector3D() {
    x_=0;
    y_=0;
    z_=0;
}

Vector3D::Vector3D(f x, f y, f z) {
    x_=x;
    y_=y;
    z_=z;
}

Vector3D &Vector3D ::operator=(const Vector3D &vec) {
    x_=vec.x_;
    y_=vec.y_;
    z_=vec.z_;
    return *this;
}

Vector3D Vector3D ::operator+(const Vector3D &vec) {
    x_+=vec.x_;
    y_+=vec.y_;
    z_+=vec.z_;

    return *this;
}

//Vector3D Vector3D ::operator+=(const Vector3D &vec) {
//    x_+=vec.x_;
//    y_+=vec.y_;
//    z_+=vec.z_;
//
//    return *this;
//}

Vector3D Vector3D ::operator-(const Vector3D &vec) {
    x_-=vec.x_;
    y_-=vec.y_;
    z_-=vec.z_;

    return *this;
}

//Vector3D Vector3D ::operator-=(const Vector3D &vec) {
//    x_-=vec.x_;
//    y_-=vec.y_;
//    z_-=vec.z_;
//
//    return *this;
//}

Vector3D Vector3D ::operator*(const Vector3D &vec) {
    f c1=y_*vec.z_ - z_ * vec.y_;
    f c2 = - (x_*vec.z_ - z_*vec.x_);
    f c3 = x_*vec.y_ - y_*vec.x_;

    return Vector3D(c1, c2, c3);
}

Vector3D Vector3D ::operator*(f num) {
    f c1 = x_*num;
    f c2 = y_*num;
    f c3 = z_*num;

    return Vector3D(c1, c2, c3);
}

f Vector3D ::operator[](int i) {
    switch (i) {
        case 0:
            return x_;
            break;
        case 1:
            return y_;
            break;
        case 2:
            return z_;
            break;
    }
}

f Vector3D::length() {
    f length = sqrt(x_*x_ + y_*y_ + z_*z_);

    return length;
}

f Vector3D ::getX() {
    return x_;
}

f Vector3D ::getY() {
    return y_;
}

f Vector3D ::getZ() {
    return z_;
}

f* Vector3D::GetValue() {
    f *a = new float(3);
    a[0]=x_;
    a[1]=y_;
    a[2]=z_;

    return a;
}

f Vector3D::scalar(const Vector3D &vec){
    f sum;

    x_*=vec.x_;
    y_*=vec.y_;
    z_*=vec.z_;

    sum = x_+y_+z_;

    return sum;
}

f Vector3D::mix(const Vector3D &b, const Vector3D &c) {
     f sum = x_*b.y_*c.z_
           + y_*b.z_*c.x_
           + z_*b.x_*c.y_
           - z_*b.y_*c.x_
           - y_*b.x_*c.z_
           - x_*b.z_*c.y_;

    return sum;
}

ostream& operator<< (ostream& out, const Vector3D &vec) {
    out <<"[" << vec.x_<< ", "<< vec.y_<< ", "<< vec.z_<< "]"<<"\n";
    return out;
}

istream& operator>> (istream& in, Vector3D &vec) {
    in >> vec.x_ >> vec.y_ >> vec.z_;

    return in;
}

bool operator==(const Vector3D& left, const Vector3D& right) {

    return right.x_==left.x_ and right.y_==left.y_ and right.z_==left.z_;
}




Vector3D::~Vector3D() {

}

#endif //INC_3DVECTOR_VECTOR3D_H
