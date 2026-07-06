# Circuit School ⚡

Read this before Project 4. It teaches you how circuits actually
work, so you can design your own instead of copying wiring tables.

## Rule #1: Electricity travels in a loop

Electricity is lazy. It only flows if it can make a **complete trip**:

```
  out of the power source (5V)
        │
        ▼
  through your parts (LED, resistor...)
        │
        ▼
  back home to GND (ground)
```

If the loop has a gap anywhere — a wire not pushed in, an LED
backwards, a missing connection — **nothing happens**. No loop, no glow.

When a circuit doesn't work, don't panic. Just trace the loop with
your finger: *Can electricity get from 5V all the way back to GND?*
Somewhere, it can't. Find the gap.

## How a breadboard works inside

A breadboard looks like a bunch of random holes, but there are metal
strips hiding inside that connect certain holes together:

```
  + rail  ──────────────────────────  all connected, top to bottom
  - rail  ──────────────────────────  all connected, top to bottom

           a  b  c  d  e     f  g  h  i  j
  row 1  [ ●──●──●──●──● ] [ ●──●──●──●──● ]   ← row 1: a-e connected,
  row 2  [ ●──●──●──●──● ] [ ●──●──●──●──● ]     f-j connected
  row 3  [ ●──●──●──●──● ] [ ●──●──●──●──● ]   ← but row 1 and row 2
                                                  are NOT connected
```

The three things to remember:

1. **Each row of 5 holes is connected** — poke two wires into the
   same row and they're touching, like holding hands.
2. **The middle trench splits the board** — `a-e` and `f-j` in the
   same row are NOT connected to each other.
3. **The long rails on the edges** (marked + and −) run the whole
   length of the board. Perfect for sharing 5V and GND with lots
   of parts.

## Meet the parts

### LED — a one-way street 🚦

Light only flows through an LED in ONE direction.

- **Long leg** = + side (fancy name: *anode*). Points toward power.
- **Short leg** = − side (*cathode*). Points toward GND.
- Flat spot on the plastic rim? That's the short-leg side.

If an LED won't light and everything else looks right: flip it.

### Resistor — the speed bump 🚧

A resistor slows down the flow of electricity. LEDs are greedy —
straight 5V would burn one out (sometimes with a tiny *pop*).

- **Every LED gets its own resistor.** Always.
- Resistors work in **either direction** — no long or short leg.
- It can go on either side of the LED — before or after. The whole
  loop slows down, like one speed bump slowing a whole line of cars.
- Your kit's stripes: **red-red-brown = 220 ohms** — the right speed
  bump for an LED.

### Jumper wires

Just roads for electricity. Color doesn't change anything, but
smart builders use **red for power** and **black for GND** so
circuits are easy to check.

### Push button — a drawbridge 🌉

A button is just a **gap in the road** that closes when you press it.
Not pressed = gap (no loop, no flow). Pressed = bridge down, loop
complete! Use two legs on **opposite corners** and it always works.

## How to design a circuit from scratch

Follow this recipe every time:

1. **Say the goal out loud.** "I want the LED to light up."
2. **List your parts.** LED, resistor, wires.
3. **Draw the loop on paper first.** Start at 5V, end at GND, and
   put every part somewhere along the path:
   `5V → resistor → LED long leg → LED short leg → GND`
4. **Build it one hop at a time**, following your drawing.
5. **Check before you power on:** Is the loop complete? Long legs
   toward power? Every LED has a resistor?
6. **Power on.** Didn't work? Trace the loop with your finger and
   find the gap. That's not failing — that's engineering.

## Golden rules

- 🔌 **Unplug the Arduino while you're wiring.**
- 🚧 **Every LED gets a resistor.** No exceptions.
- ✏️ **Draw first, build second.**
- 🔍 **When it doesn't work, find the gap in the loop.**

Now go do the [Circuit Drills](../04-circuit-drills/) — no wiring
tables this time. You're the circuit designer now. 😎
