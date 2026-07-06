# Project 1: Traffic Light 🚦

Make three LEDs work just like a real traffic light:
**green** (go!) → **yellow** (slow down!) → **red** (stop!) → and back to green.

## What you need

- 1 Arduino Uno
- 1 breadboard
- 1 red LED, 1 yellow LED, 1 green LED
- 3 resistors (220 ohm — the ones with red-red-brown stripes)
- 4 jumper wires

## Wiring

| Arduino pin | Goes to | LED |
|-------------|---------|-----|
| Pin 10 | resistor → long leg | 🔴 Red |
| Pin 9  | resistor → long leg | 🟡 Yellow |
| Pin 8  | resistor → long leg | 🟢 Green |
| GND    | all the short legs  | (shared) |

**Remember:** the LED's **long leg** is the + side. The **short leg**
goes to GND (ground).

```
 ARDUINO UNO
┌────────────┐
│     pin 10 ├──[220Ω]──▶|── RED LED ────┐
│     pin 9  ├──[220Ω]──▶|── YELLOW LED ─┤
│     pin 8  ├──[220Ω]──▶|── GREEN LED ──┤
│        GND ├───────────────────────────┘
└────────────┘
      ▶|  = LED (long leg on the left, short leg on the right)
```

## How the code works

- `pinMode(...)` in `setup()` tells the Arduino those pins will
  **send power out** (OUTPUT).
- `digitalWrite(pin, HIGH)` turns a light **on**.
  `digitalWrite(pin, LOW)` turns it **off**.
- `delay(5000)` means **wait 5000 milliseconds** — that's 5 seconds.
  (1000 milliseconds = 1 second)
- `loop()` runs over and over forever, so the traffic light keeps cycling.

## Challenges 🏆

1. Make the green light stay on **twice as long**.
2. Make the yellow light **blink 3 times** before turning red.
   (Hint: turn it on, wait, turn it off, wait — three times!)
3. Real traffic lights in some countries show red+yellow together
   right before green. This one already does — can you find that
   part of the code and make it last longer?
