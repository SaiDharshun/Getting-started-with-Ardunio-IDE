
# ArdunioIDE

The open-source Arduino Software (IDE) makes it easy to write code and upload it to the board. This software can be used with any Arduino.


## Download the IDE

The IDE is available for Windows, MacOS and most Linux Distributions. When I downloaded the IDE on my windows machine, it was stuck on the loading screen forever(Do mention if you know why). So, This tutorial will be done on a Ubuntu 24.04 LTS machine. MacOS installation seems staright forward, so I hope there wont be any issues there.

You can download the software from the Offical website. Choose the 2.x version from https://www.arduino.cc/en/software in the form of AppImage.

Alternatively, You can also download it from your package managers also.

Now right click the AppImage -> Properties -> Permissions -> Allow executing files as program(tick the box).
## Setting the Port

When you open the AppImage, you will be greeted by the IDE. Click on the tools option on the top left and select Ports from the drop down menu. If it is Greyed out, run the following commands on your terminal.

```http
  sudo apt install libfuse2
  sudo apt remove brltty
  sudo chmod ugo+w/dev/ttyUSB0
```
(You might need to have the arduino connected for the last command to work)

Now your Ports section should be visible. If not, try searching on Google, or visit this https://askubuntu.com/questions/786367/setting-up-arduino-uno-ide-on-ubuntu
## Working with the IDE

To see that the IDE is configured properly, let us make a small project in which the objective is to rotate a Servo motor when a button pushed. 

### Required Hardware : 
- Servo Motor (SG90 9G MICRO)
- Ardunio Nano (with USB 2.0 cable and soldered pins)
- YK04 RF Module (with the remote)
- Jumper wires
## Steps to follow

Before you start, connect the Ardunio to your computer, go to tools and select your board and port ie. Ardunio Nano & /dev/ttyUSB0 respectively. If your are using Ardunio Nano, select Tools -> Processor -> ATmega328p (Old Bootloader).

Now go to File -> Examples -> Basics -> Blink.

Compile and upload the code. Your Ardunio's LED should be Blinking.

**Now for the Fun Part!**

- Connect the Ground pin of The YK04 RF Module to the Ground pin of the Ardunio.
- Connect the 5V pin of the RF module to the 3.3V pin of the Ardunio.
- Connect the VT pin to PIN D9 of the Ardunio.
- For the Servo Motor, it needs Ground, Power(5V) and Input/Output pins.
- Each Motor would be configured differently so its best to reseach the model thats youve bought, for the one that I have, Yellow -> Input/Output, Red -> Power(5V), Brown -> Ground.
- It should be noted that the pins used for I/O can be changed but the chnage should be reflected on the code also. (Ive connected the Servo to pin D3).
**NOTE:** 
- If the Ardunio that you are using doesnt have extra ground / power pins, consider using something similar to a Bread Board. 
- Research your parts as something rated for 3.3V will burn if you supply 5V without Voltage regulators.
- You need a **23A 12V Alkaline Battery** as the remote doesnt come with it (have a screw driver handy).

**Code:**

- Just Copy Paste the code in this Repo to see that it works. You can modify it late as per your needs ( like changing the logic and/or degree of the Servo Motor  etc.. ).

**If you feel the range is not enough, you can increase it with the help of antennas / wires.**

- If everything went well, your Servo Motor should move by 90 degrees when any of the 4 buttons are pressed
- The use cases can vary from turning on fans, lights, water dispensers etc...
- Most of the parts can be bought for cheaper prices from your local eletronics shops or even online, so whether it is home automation or robotics, you truly are limited by your own imagination :) 
