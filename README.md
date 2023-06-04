# LED Control with Push Button using AB+C Logic Function and Arduino Uno in Proteus
This experiment focuses on implementing the "AB+C" logic function using an Arduino Uno
microcontroller in the Proteus simulation software. By connecting three push buttons and an
LED, we can observe how the LED's illumination status changes based on different
combinations of button presses.

<p align="center"><img src="https://user-images.githubusercontent.com/52858312/243196967-22058939-e989-4571-be6f-ba349abcd70e.png"width=40% height=40%></p>

The LED light will be lit when the output of the function AB+C is true, and it will not be lit when the output is false. The output depends on the states of the push buttons A, B, and C, which can be either pressed (HIGH) or not pressed (LOW).

<div align="center">

| Case | A | B | C | AB | AB+C | LED |
|:----:|:-:|:-:|:-:|:--:|:----:|:---:|
|   1  | 0 | 0 | 0 |  0 |   0  | Off |
|   2  | 0 | 0 | 1 |  0 |   1  |  On |
|   3  | 0 | 1 | 0 |  0 |   0  | Off |
|   4  | 0 | 1 | 1 |  0 |   1  |  On |
|   5  | 1 | 0 | 0 |  0 |   0  | Off |
|   6  | 1 | 0 | 1 |  0 |   1  |  On |
|   7  | 1 | 1 | 0 |  1 |   1  |  On |
|   8  | 1 | 1 | 1 |  1 |   1  |  On |
  
</div>

# How to run this?
