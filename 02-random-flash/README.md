# Project 2: Random Flash ✨

Three LEDs flash in a totally random pattern — the Arduino "rolls dice"
to decide which lights turn on and how long to wait. It never repeats
the same show twice!

## What you need

Same parts as Project 1:

- 1 Arduino Uno
- 1 breadboard
- 3 LEDs (any colors you like!)
- 3 resistors (220 ohm)
- 4 jumper wires

## Wiring

Exactly the same as the traffic light — if it's still wired up,
you don't have to change anything!

| Arduino pin | Goes to | LED |
|-------------|---------|-----|
| Pin 8  | resistor → long leg | LED 1 |
| Pin 9  | resistor → long leg | LED 2 |
| Pin 10 | resistor → long leg | LED 3 |
| GND    | all the short legs  | (shared) |

```
 ARDUINO UNO
┌────────────┐
│     pin 8  ├──[220Ω]──▶|── LED 1 ──┐
│     pin 9  ├──[220Ω]──▶|── LED 2 ──┤
│     pin 10 ├──[220Ω]──▶|── LED 3 ──┤
│        GND ├────────────────────────┘
└────────────┘
```

## How the code works

- `random(0, 2)` picks either **0 or 1**, like flipping a coin.
  0 means off (LOW), 1 means on (HIGH) — so each LED randomly
  turns on or off!
- `delay(random(100, 1001))` waits a **random amount of time**
  between 100 and 1000 milliseconds (0.1 to 1 second).
- `randomSeed(analogRead(A0))` is the coolest trick: pin A0 isn't
  connected to anything, so it picks up tiny bits of electrical
  static from the air. The Arduino uses that static to shuffle its
  dice, so the pattern is different every time you turn it on!

## Challenges 🏆

1. Make it flash **faster** — change the wait to be between 50 and
   200 milliseconds.
2. Make one LED **always stay on** while the other two flash randomly.
3. Add a 4th LED on pin 11. You'll need to add it in **three places**
   in the code — can you find them all?
