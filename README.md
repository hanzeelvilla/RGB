# RGB Library

The **RGB** library provides a simple and intuitive way to control RGB LEDs using Arduino. With basic methods to initialize and set RGB colors, you can easily add lighting effects to your projects.

---

## Features

- Initialize RGB pins for output.
- Set RGB LED colors using PWM for smooth transitions.
- Compatible with various Arduino-compatible boards.

---

## Installation

1. Download or clone the library from [GitHub](https://github.com/hanzeelVilla/RGBController).
2. Copy the library folder into your Arduino libraries directory:
   - On Windows: `Documents/Arduino/libraries`
   - On macOS: `~/Documents/Arduino/libraries`
   - On Linux: `~/Arduino/libraries`
3. Restart the Arduino IDE if it was already open.

---

## Usage

### 1. Include the Library
Include the `Rgb.h` file in your sketch:
```cpp
#include <Rgb.h>
```

### 2. Create a RGB object

```cpp
#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11

RGB myRgb(RED_PIN, GREEN_PIN, BLUE_PIN);
```


### 3. Initialize the Rgb
call the `init()` method to setup the Rgb led as an OUTPUT

```cpp
myRgb.init();
```

### 4. Change colors
Use the `setColor()` method to change colors, you can use the included colors or use your own.

```cpp
myRgb(red);
myRgb(163, 156, 232); // custom color
```


> [!WARNING]
> Ensure the RGB is connected properly to avoid short circuits or damage to the board.