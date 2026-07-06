# Project 4: Circuit Drills 💪

Time to take the training wheels off. No wiring tables, no diagrams —
**you** design these circuits, using what you learned in
[Circuit School](../circuit-school/README.md).

Drills 1–5 don't use any code at all. We'll steal power straight from
the Uno's **5V pin** (it's always on when the board is plugged in).
Just circuits, just you.

Each drill has one hint. Try without it first! Dad has the answer key,
but only ask after you've traced the loop with your finger and drawn
your circuit on paper.

---

## Drill 1: First light

**Goal:** Make one LED light up. No code, no help.
**Parts:** 1 LED, 1 resistor (220Ω), 2 jumper wires.

> **Hint:** Remember the loop: start at the **5V pin**, end at **GND**.
> Every part goes somewhere along that path.

## Drill 2: The speed bump moves

**Goal:** Take your Drill 1 circuit and move the resistor to the
**other side** of the LED. Before you power it on: will it still work?
Say your answer out loud, then test it.

**Parts:** same as Drill 1.

> **Hint:** Think about the line of cars and the speed bump.

## Drill 3: Two lights, one board

**Goal:** Light up TWO LEDs at the same time, both at full brightness.
**Parts:** 2 LEDs, 2 resistors, jumper wires.

> **Hint:** Each LED wants its OWN loop from 5V to GND. The − rail
> on the edge of the breadboard is great for sharing GND.

## Drill 4: The mystery of the dim lights 🔍

**Goal:** Now wire the two LEDs the OTHER way — in one single loop,
one after the other, like train cars:
`5V → resistor → LED 1 → LED 2 → GND`

Look closely: how bright are they compared to Drill 3? Why?

> **Hint:** In one big loop, the two LEDs have to **share** the push
> from the 5V pin. In Drill 3, each LED had its own loop and got the
> full push. Sharing = dimmer. Engineers call the train version
> **series** and the own-loop version **parallel**.

## Drill 5: Button, no code

**Goal:** Add a push button to your Drill 1 circuit so the LED only
lights **while you hold the button down**. Still no code!
**Parts:** 1 LED, 1 resistor, 1 button, jumper wires.

> **Hint:** A button is a drawbridge — a gap in the road. Where in
> the loop should the gap go? (Trick answer: anywhere in the loop!)

## Drill 6: Graduation 🎓 — bring back the code

Here's the secret that connects everything you've built so far:

**A pin like pin 8 is just a 5V pin that the Arduino can switch on
and off with code.**

**Goal:** Move your Drill 1 wire from the 5V pin to **pin 8**, then
upload the sketch in this folder (`04-circuit-drills.ino`). Your
hand-built circuit now blinks under computer control.

You designed the circuit. You loaded the program. That's the whole
game — everything from here on is just bigger loops and smarter code.

---

## When you finish

Tell Dad which drill was hardest. Then design a **bonus circuit of
your own invention** — anything you want, on paper first — and build
it. That one goes in the family hall of fame.
