#include "librgb.h"
#include <Arduino.h>

RGB::RGB(int r, int g, int b){
    this->r_pin = r;
    this->g_pin = g;
    this->b_pin = b;
    pinMode(this->r_pin, OUTPUT);
    pinMode(this->g_pin, OUTPUT);
    pinMode(this->b_pin, OUTPUT);
};

void RGB::close() {
    digitalWrite(this->r_pin, LOW);
    digitalWrite(this->g_pin, LOW);
    digitalWrite(this->b_pin, LOW);
}

void RGB::red() {
    digitalWrite(this->r_pin, HIGH);
    digitalWrite(this->g_pin, LOW);
    digitalWrite(this->b_pin, LOW);
};

void RGB::green() {
    digitalWrite(this->r_pin, LOW);
    digitalWrite(this->g_pin, HIGH);
    digitalWrite(this->b_pin, LOW);
};

void RGB::blue() {
    digitalWrite(this->r_pin, LOW);
    digitalWrite(this->g_pin, LOW);
    digitalWrite(this->b_pin, HIGH);
};

void RGB::yellow() {
    digitalWrite(this->r_pin, HIGH);
    digitalWrite(this->g_pin, HIGH);
    digitalWrite(this->b_pin, LOW);
}

void RGB::purple() {
    digitalWrite(this->r_pin, HIGH);
    digitalWrite(this->g_pin, LOW);
    digitalWrite(this->b_pin, HIGH);
}

void RGB::cyan() {
    digitalWrite(this->r_pin, LOW);
    digitalWrite(this->g_pin, HIGH);
    digitalWrite(this->b_pin, HIGH);
}

void RGB::white() {
    digitalWrite(this->r_pin, HIGH);
    digitalWrite(this->g_pin, HIGH);
    digitalWrite(this->b_pin, HIGH);
}

void RGB::custom_rgb_u8(int a, int b, int c) {
    analogWrite(this->r_pin, a);
    analogWrite(this->g_pin, b);
    analogWrite(this->b_pin, c);
}

void RGB::custom_rgb_u16(int a, int b, int c) {
    analogWrite(this->r_pin, a/256);
    analogWrite(this->g_pin, b/256);
    analogWrite(this->b_pin, c/256);
}

RGB::~RGB(){}