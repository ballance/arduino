# Project 3: Button Light 🔘

Your first project where **you** control the Arduino while it's running!
Hold the button down and the LED turns on. Let go and it turns off.

This is a big deal: projects 1 and 2 only had **outputs** (lights).
Now the Arduino has an **input** — it can listen to the world.

## What you need

- 1 Arduino Uno
- 1 breadboard
- 1 LED (any color)
- 1 resistor (220 ohm)
- 1 push button
- 4 jumper wires

## Wiring

| Arduino pin | Goes to |
|-------------|---------|
| Pin 8  | resistor → LED long leg |
| GND    | LED short leg |
| Pin 2  | one leg of the button |
| GND    | the other leg of the button |

**No resistor needed for the button!** (Read "The pull-up trick" below
to find out why.)

```
 ARDUINO UNO
┌────────────┐
│     pin 8  ├──[220Ω]──▶|── LED ──┐
│        GND ├─────────────────────┘
│            │
│     pin 2  ├────────┤ BUTTON ├───┐
│        GND ├─────────────────────┘
└────────────┘
```

**Button tip:** push buttons have 4 legs, but they work in pairs.
Use two legs on **opposite corners** and it will always work.

## How the code works

- `pinMode(button, INPUT_PULLUP)` tells the Arduino this pin is for
  **listening**, not for turning things on.
- `digitalRead(button)` asks: "what is the button doing right now?"
- The `if / else` is a choice: **if** the button is pressed, turn the
  LED on. **Else** (otherwise), turn it off.
- There's no `delay()` anywhere — the loop runs thousands of times a
  second, so the LED reacts the instant you press!

## The pull-up trick 🧲

Here's the surprising part: the code checks for `LOW` when the button
is **pressed**. Backwards, right?

`INPUT_PULLUP` turns on a tiny helper inside the Arduino that gently
pulls the pin up to HIGH when nothing is happening. When you press
the button, you connect the pin straight to GND, which yanks it down
to LOW. So:

- Not pressed → **HIGH**
- Pressed → **LOW**

Without that helper, the pin would just pick up random static from
the air (remember project 2?) and the LED would flicker like crazy.

## Challenges 🏆

1. Swap the `HIGH` and `LOW` in the code so the LED is on all the
   time and pressing the button turns it **off**.
2. Make the button start a **light show**: while you hold it, the LED
   blinks fast. (Hint: put a blink with small `delay()`s inside the `if`.)
3. Wire up all three LEDs from project 1 and make the button turn on
   all of them at once — your own flashlight!
