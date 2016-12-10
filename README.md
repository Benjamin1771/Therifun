# Therifun
Tech Studio Prototype 2016

An Interactive Sound Generating Device!
<img src="ThereminPictures/Everything.jpg" alt="finished w00t">

<h1>How it Works</h1>

<p>For the Arduino sensor and light Theremin projects, you will need (for each project) an Arduino kit, and its stock hardware, along with the Arduino software, which hosts some basic JavaScript. If for your design you wish to case the device and style it, I personally used some thick cardboard, and some scrap wood as a bass to ensure the wiring would not be adjusted or come loose by accident after completing a working prototype. This however is completely subjective, and all that is required for the device set up is the Arduino hardware and software. Once the circuit and hardware setup is completed for this project, the user connects the device via a USB to the computer, which hosts the Arduino software, which then hosts the Javascript and relays it back to the hardware. </p>

<p>Once the hardware and software have connected to each other, a light on the Arduino board appears, and the user is able to run the Javascript. After the run request has been called, the user should hear sound coming from the Arduino hardware. It is important to note, that the sound is manipulated by the users interaction with each separate sensor, and the Arduino hardware will only produce a single tone until the user interacts with it.</p> 

<p>The JavaScript written into the Arduino software tells the device to apply the devices sensor values to the frequency tones assigned. This means that as the sensor reaches a particular value, it will produce the specifically applied frequency tones we have written into our JavaScript. The two projects differ in this sense, as the light Theremin requires maximum and minimum frequencies, and the Theremin using the HC-SR04 sensor uses distance points to produce 3 different pre-determined frequency tones.</p>

<img src="build Prototype final.png" alt="how it works" width="800">

<h1>Tutorial</h1>
<h3>The light Theremin:</h3>

<h3>Step One: Parts List and required materials:</h3>
<ul>
<li>A computer capable of hosting the Arduino software, with a usb port for connectivity.</li>
<li>An Arduino board and the stock hardware provided in the kit.</li>
<li>The kit includes:</li>
<li>- Arduino Board</li> 
<li>- Bread Board</li> 
<li>- Male-to-male insulated electrical wire (7)</li>
<li>- 10k resistor</li>
<li>- Light sensor (photocell)</li>
<li>- Buzzer</li>
<li>- USB Cable for connectivity to computer</li>
</ul>

<h3>Step Two - Assembly</h3>

<ol>
<li>Use your insulated electrical wires to connect the Arduinos power and ground to the bread board, allowing the following connections to be stable.</li>
<li>All wires used for this project are male-to- male connectors; you will need 7 for this project.</li>
<li>From pin 8, I connected to my buzzer (negative), which is placed on the breadboard, and also sent 5V power to the positive end of the buzzer.</li>
<li>The analogue (0) output on the Arduino is sent to the photocell, which is grounded, and transfers via the 5v by way of the 1k resistor.</li>
<li>The device now has complete circuit flow, and can be connected via USB to the computer.</li> 
<li>The Arduino software then needs to be booted, and we can post our code in which is provided in the light Theremin document of this project folder.</li>
<li>The code uses JavaScript to communicate with the Arduino software and hardware, and is explained more in step 3.</li>
</ol>

<h3>Step Three - JavaScript</h3>
<p>The JavaScript used for this project is attached in a separate document within the home document, but to explain in text gives a better sense of how the JavaScript interacts with the device. I started by declaring some variables for sensor value, sensor low and sensor high. This is. The setup sends the pin mode to the digital output, and assigns it to the photo resistor and calibrates the values to it. In the loop we read the amount of light coming into the photocell, and play tones for short periods of time (20ms) through pin 8, which is the pin we have chosen in this case for use of connection. Once the code provided is pasted into the software, as the code is uploaded to the device the user should place their hand over the sensor, to allow for the calibration process.</p>
<img src="build images/2 - 1 add beading wire.jpg" alt="add beading wire" width="200">
<img src="build images/2 - 2 connect all dummies.jpg" alt="connect all dummies" width="200">
<img src="build images/2 - 3 connect all dummies to space.jpg" alt="connect to space" width="200">
<img src="build images/2 - 4 male to male wires.jpg" alt="male to male wires" width="200">
<img src="build images/2 - 5 alligater clips labeled.jpg" alt="alligator clips" width="200">
<img src="build images/2 - 5 use the back.jpg" alt="WASDFG" width="200">
<img src="build images/2 - 6 connect alligator cord to the ground.jpg" alt="connect alligator cord to the ground" width="200">
<img src="build images/2 - 6 connect ground to object.jpg" alt="connect ground to object" width="200">

<h3>Step Four - Connection and User Interaction)</h3>
<p>The Arduino is connected by way of USB to the computer and the Arduino software is started. After the code is pasted in, and uploaded, the user can calibrate the sensor. As light comes into the sensor, the tone will adjust and will be played through the buzzer. The user can interact by allowing more or less light into the sensor, which will adjust the pitch. The numeric values assigned can be played with to adjust the tones and pitches we hear coming from the buzzer allowing for a variety of experiences using the device.</p>

<h3>Final Device</h3>

<img src="build images/finished.jpg" alt="finished project" width="400">
<img src="build images/finished back.jpg" alt="finished project" width="400">
<img src="build images/play the game.jpg" alt="Let's Play!" width="802">


<h1>Tutorial</h1>
<h3>The light Theremin:</h3>

<h3>Step One: Parts List and required materials:</h3>
<ul>
<li>A computer capable of hosting the Arduino software, with a usb port for connectivity.</li>
<li>An Arduino board and the stock hardware provided in the kit.</li>
<li>The kit includes:</li>
<li>- Arduino Board</li> 
<li>- Bread Board (2 if you want more space to work, but you only need 1 for this prototype project)</li>
<li>- Male-to-male insulated electrical wire (17)</li>
<li>- 1k resistors (5)</li>
<li>- Buzzer</li>
<li>- LED's (3)</li>
<li>- HC-SR04 Sensor</li>
<li>- USB Cable for connectivity to computer</li>
</ul>

<h3>Step Two - Assembly</h3>

<ol>
<li>Use your insulated electrical wires to connect the Arduinos power and ground to the bread board, allowing the following connections to be stabilized:</li>
<li>All wires used for this project are male-to- male connectors; you will need 17 for this project.</li>
<li>From pin 3, I connected to my buzzer, which is placed on the breadboard, and also sent 5V power to the other end of the buzzer by way of a 1k resistor.</li>
<li>The analogue (0) output on the Arduino is sent to the photocell, which is grounded, and transfers via the 5v by way of a 1k resistor.</li>
<li>The HC-SR04 Sensor is connected to power and ground through male-to- male cables (be sure to connect from your initially used breadboard if you are using two, as the ground and 5v does not transfer to the second board unless you connect them through your wiring). Then, connect your sensors 2 inside pins to digital ports 6 and 7 (for the purpose of this project) on your Arduino board.</li> 
<li>The LEDs are connected by way of resistors and then grounded, and connected to pins 9, 11, and 13 on the Arduino board.
<li>Once these connections are set, the device has a complete circuit flow, and can be connected via USB to the computer.</li> 
<li>The Arduino software then needs to be booted, and we can post our code in which is provided in the Sensor Theremin document of this project folder.</li>
<li>The code uses JavaScript to communicate with the Arduino software and hardware, and is explained more in step 3.</li>
</ol>

<h3>Step Three - JavaScript</h3>
<p>The JavaScript used for this project is attached in a separate folder, but I will further explain the logic here. The device has 3 components: a sensor which measures distance, LED lights that turn off and on, and a buzzer that produces set frequency tones based on values of the sensor. The JavaScript starts by defining which pins to receive the sensor values from, which pins to send power on and off to for the LED’s, and the buzzers location. The int’s defined are the sound frequencies produced (measured in hertz). In the void setup, we tell the pinMode where to provide input and outputs for the mentioned devices. In the void loop, we write a series of if statements to determine when to play each tone, and turn on or off each LED light. I found that 3 separate tones allowed for the clearest distinction in separating tones, but this can easily be manipulated to each users preference; just adjust distance, and write addition if statements linked to new sound int’s defined in addition hertz values. The same logic could be used to add additional LED lights – just include them in the new if statements.</p>
<img src="build images/2 - 1 add beading wire.jpg" alt="add beading wire" width="200">
<img src="build images/2 - 2 connect all dummies.jpg" alt="connect all dummies" width="200">
<img src="build images/2 - 3 connect all dummies to space.jpg" alt="connect to space" width="200">
<img src="build images/2 - 4 male to male wires.jpg" alt="male to male wires" width="200">
<img src="build images/2 - 5 alligater clips labeled.jpg" alt="alligator clips" width="200">
<img src="build images/2 - 5 use the back.jpg" alt="WASDFG" width="200">
<img src="build images/2 - 6 connect alligator cord to the ground.jpg" alt="connect alligator cord to the ground" width="200">
<img src="build images/2 - 6 connect ground to object.jpg" alt="connect ground to object" width="200">

<h3>Step Four - Connection and User Interaction)</h3>
<p>After the code is uploaded, as the user places an object or themselves at different distances from the sensor, the predetermined frequency tones will be produced through the buzzer, and the LED’s will turn off and on in sequence. As the sensors distance value changes, this will adjust the pitch and LED’s. The numeric values assigned can be played with and adjusted to change the tones and pitches we hear coming from the buzzer allowing for a variety of experiences using the device.</p>
<h3>Final Device</h3>

<img src="build images/finished.jpg" alt="finished project" width="400">
<img src="build images/finished back.jpg" alt="finished project" width="400">
<img src="build images/play the game.jpg" alt="Let's Play!" width="802">
