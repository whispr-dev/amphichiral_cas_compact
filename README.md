ok, welcome to the first installment of amphichiral CAs repos which i guess tehcniocally is quite a lot more than just amphichiralCAs but either it started there or was intended to be about that so it got titled as such.

[unfortunately og dates seem to be lost /shrug]


---------------------------------
---------------------------------

build folder:

amphichiral_cas.exe			displays a few CA rules - specifically 30, 90 and 150, whether they are amphichiral 					and if so what their rulemap is. src ofc is amphichiral.cpp.

---------------------------------


docs folder:				i admit only one of these makes obvious sense.

axon.txt				a weird lengthy document on simulating a neuron axon in hardwre electronics. wow.
bernoulli.txt				linked to an idea for a eurorack module. no, i dunno what it do in here.
binary_entropy.txt			just a link to where some inspiration for some of my CA code came from.
led_code.txt				seemingly the code for an led display of [?] some chinese pictograms.

					□□□□□□□□
					■■■□□■■■
					■■■□□■■■
					■■■□□■■■
					■■■□□■■■
					■■■□□■■■
					■■■□□■■■
					□□□□□□□□

					but it turns out half is non-working python, half is non-working arduino!

					according to claude:
"It's basically a little LED matrix display program. The pattern is stored in that binary format (0b11100111) where 1s represent lit LEDs and 0s represent unlit ones. When run on an Arduino with an 8x8 LED matrix hooked up to it, it would display this pattern - basically making two vertical bars of light with a gap in the middle. The delay(333) means it refreshes about 3 times per second."
					as for the python... welp, it's a bit fail.

just_the_led_code.py			just the python half of the code in led_code.txt. it seems to output a matplot lib 					graph of the led positions as x-y rather than the led 8x8 grid when claude cleaned 					it up. oop.

just_the_led_code_arduino.ino		just the arduino half of the code in led_code.txt. according to claude, when 					cleaned up it's as described in the comment for led_code.txt.		

just_the_led_code-py_output.png		scrnsht of the output of the python code cleaned up.
led_simulator_output.png		scrnsht of the output of claudes react arduino code simulation. 

python_led_code_simulator.js		a react simulator to show what the output of the arduino code would be by claude:
"I created that little interactive display above - it shows you exactly what it would look like on real hardware!"


--------------------------------------------

resources folder:

a collection of slightly random files including;
- circuit wizard files for simulating the circuitry for my eurorack benoulli gate module and a shift register module.
- a pic of the proposed front panel for the bernoulli gate module.
- a scrnshot of the bernoulli gate cirduit.
- the full set of elementary CAs pictorially [from wolfram?]
- a sequence of scrnshts of the output of the CA i invented based on binary entropy.
- some logic gate stuff.


--------------------------------------------

src folder:

mayan_calendar.rs				react script for mayan calendar - status unknown.
led_controller_ca.cpp				| a collection of
actual_dac_output.cpp				| unknown status
array Arduino.h					| arduino related
concept_8x8_cas_output.cpp			| somehow both
gfx_arduino_partial.cpp				| arduino and CA files.
amphichiral_cas.cpp				.cpp for the .exe in build. therefore known working.
gameoflife.cpp					GoL in C++ - status unknown.
binary entropy ca.cpp				C++ version of the binary entropy CA i invented. status unkown.
binary entropy ca.py				Python version of the binary entropy CA i invented. more likely working 						since there's scrnshts.


--------------------------------------------

/end.