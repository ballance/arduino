# Answer Key (for Dad) 🔐

Don't peek, Bash! Trace the loop first.

## Drill 1: First light

```
5V pin → resistor (220Ω) → LED long leg → LED short leg → GND pin
```

On the breadboard: 5V jumper to a row; resistor from that row to a
second row; LED long leg in the second row, short leg in a third row;
jumper from the third row back to GND. (Any arrangement that completes
this loop is correct.)

**Common failure:** LED backwards, or both LED legs in the same
5-hole row (shorts across the LED — no light).

## Drill 2: Resistor on the other side

```
5V → LED long leg → LED short leg → resistor → GND
```

**Works identically.** In a series loop the resistor limits current
everywhere in the loop, regardless of position. If he predicted
"still works," he's got it.

## Drill 3: Two LEDs in parallel

Each LED gets its own resistor and its own path:

```
5V ─┬─ resistor → LED 1 → ─┬─ GND
    └─ resistor → LED 2 → ─┘
```

Cleanest build: 5V to the + rail, GND to the − rail, then two
independent resistor+LED branches between the rails.
**Both LEDs full brightness.**

**Watch for:** one resistor feeding both LEDs from the same row —
it works, but dimmer, and violates "every LED gets its own resistor."
Good discussion moment, not a failure.

## Drill 4: Two LEDs in series

```
5V → resistor → LED1 long → LED1 short → LED2 long → LED2 short → GND
```

**Expected result: noticeably dimmer, possibly barely lit.** Two red
LEDs drop ~1.8–2V each; two of them eat most of the 5V budget, so
little current flows. (Two blue/white LEDs at ~3V each may not light
at all — also a correct observation!)

**The lesson:** series divides the voltage; parallel gives every
branch the full voltage.

## Drill 5: Button in the loop

```
5V → button → resistor → LED → GND
```

The button can go **anywhere** in the loop (before the resistor,
after the LED — all correct). It just opens/closes the one loop.
Opposite-corner legs on the button, or it may be always-on.

## Drill 6: Graduation

Move the 5V jumper to pin 8, upload the sketch, LED blinks at
half-second intervals. If it doesn't blink: right port/board
selected, and the circuit still complete? (Same debugging as ever:
trace the loop.)

## The bonus circuit

Whatever he invents: check every LED has a resistor and the loop is
complete before power-on. Then frame the paper drawing. 🏆
