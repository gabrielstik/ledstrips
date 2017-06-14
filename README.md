# ledstrips
LED strips lightshows for stage design (including analog listener).

:warning: Some parts of this project deal with high-voltage electronics, be careful !

## Requirement

### Hardware
_This list is non-exhaustive: it depends of your project_
* Arduino
* LED strips
* 1500W strobe
* Some TIP31C transistors
* 3.5mm jack
* 5V IN / 220V OUT relay with pretty high amperage limit
* Basic electronic stuff (LED, resistances, buttons, knobs)

### Software
* [Arduino Software](https://www.arduino.cc/en/Main/Software)

## Electronic mapping
_This is a map for a full operating system: use only the elements you need_

:warning: Always be careful with high-voltage !

![Electronic map](https://github.com/gabrielstik/ledstrips/blob/master/map.png)

#### Wires
* **Ground :** black wires (LV only)
* **Positive :** red wires
* **Analog inputs :** lime & orange wires
* **Analog ground :** dark blue wire
* **Digital outputs :** other colors

#### Components
* **Circles :** peripherals components
* **Squares :** sources
* **Small rectangles :** main output components (LED strips & 1500W strobe)
* **Large rectangles :** Arduino & TIP31C motherboard

_Note : all grounds in LV are connected together_

## Troubleshooting

### It seems that not be receiving analog signal from source
1. Check the volume from your soundcard
2. Check if wires from jack are plug in the rights analog inputs
3. In the algorithm, check if analog inputs are correctly read
4. Open Serial Monitor in Arduino Software and add `Serial.println(voltage);` in your `loop()` to check the voltage in the analog inputs

**Nothing except 0.00 are logged :**

5. Check again **1.**, **2.**, **3.** & **4.**

**I see voltage fluctuation**

5. Read next troubleshoot

### I receive analog input but my outputs are not working
1. Add a control LED on the Arduino instead of a LED strip

**The LED is not blinking**

2. Check the wiring and your `pinMode` in your `setup()`

**The LED is blinking with the music**

2. Verify the electronics & wiring

## Features in project
* Create a controller connected to the algorithms to allow a light engineer to control the lights.
* Use low-pass and high-pass components in order to split music depending on its frequencies to enhance song analysis.

## Designs

### Monochrome LED strips
* **classico.ino** Flagship design: it listens music with analog inputs and lights on sound amplitude peaks.
* **oppo.ino** Independent to analog input: it only switches light from a strip to the other.

### RGB LED strips only
* **parade.ino** Designed for Rone — Parade track.

***

Thank you ! :thumbsup:
