import processing.serial.*;

Serial arduinoSerial;
boolean connected;
int x=500, y=500, size=100;

void setup() {
  size(displayWidth, displayHeight);
}


void draw() {
  background(0);
  ellipse(x, y, size, size);


  if ( arduinoSerial!=null && arduinoSerial.available() > 0) {  // If data is available,
    switch(arduinoSerial.read()) {
    case 0:
      x-=10;
      break;
    case 1:
      y-=10;
      break;
    case 2:
      y+=10;
      break;
    case 3:
      x+=10;
      break;
    }
  }
  
  if (!connected &&Serial.list().length>0 ) {
    String portName = Serial.list()[0];
    println("portname: "+portName);
    try {
      arduinoSerial = new Serial(this, portName, 9600);
      connected=true;
      arduinoSerial.buffer(1);
      println("connected!");
    }
    catch(Exception e) {
      connected=false;
      println("trying...");
    }
  }
}