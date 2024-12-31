#ifndef RGB_H
#define RGB_H

#include <Arduino.h>

#define red 255, 0, 0
#define green 0, 255, 0
#define blue 0, 0, 255
#define cyan 0, 255, 255
#define yellow 255, 255, 0
#define orange 255, 165, 0
#define pink 255, 192, 203
#define purple 128, 0, 128
#define white 255, 255, 255
#define off 0, 0, 0

class RGB {
    private:
        int pinR;
        int pinG;
        int pinB;
    
    public:
        RGB(int pinR, int pinG, int pinB) {
            this->pinR = pinR;
            this->pinG = pinG;
            this->pinB = pinB;
        }

        void init();
        void setColor(int r, int g, int b);
};

#endif