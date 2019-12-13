//
// Created by victor on 28.11.2019.
//
#include <iostream>

using namespace std;

#ifndef INC_3DVECTOR_DOUBLE_H
#define INC_3DVECTOR_DOUBLE_H

class Double {

private:
    double value;

public:
    Double(double val);
    Double();
    Double operator+(double right);
    Double operator+(Double right);
    Double operator-(double right);
    Double operator-(Double right);
    Double operator*(double right);
    Double operator*(Double right);
    Double operator/(double right);
    Double operator/(Double right);
    friend ostream& operator<< (ostream& out, const Double& right);
    friend istream& operator>> (istream& in, Double& right);
    friend bool operator==(const Double& left, const Double& right);
};


Double::Double(double val) {
    value = val;
}

Double::Double() {
}

Double Double::operator+(double right) {
    return Double(value + right);
}

Double Double::operator+(Double right) {
    return Double(value + right.value);
}

Double Double::operator-(double right) {
    return Double(value - right);
}


Double Double::operator-(Double right) {
    return Double(value - right.value);
}

Double Double::operator*(double right) {
    return Double(value * right);
}

Double Double::operator*(Double right) {
    return Double(value * right.value);
}

Double Double::operator/(double right) {
    return Double(value / right);
}

Double Double::operator/(Double right) {
    return Double(value / right.value);
}

ostream &operator<<(ostream &out, const Double &right) {
    out << right.value;
    return out;
}

istream &operator>>(istream &in, Double &right) {
    in >> right.value;
    return in;
}

bool operator==(const Double &left, const Double &right) {

    return left.value == right.value;
}





#endif //INC_3DVECTOR_DOUBLE_H
