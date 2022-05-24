
//pin variables
const int l1 = 5;
const int l2 = 6;
const int l3 = 7;
const int l4 = 8;
const int l5 = 9;
const int l6 = 11;
const int soundPin = 0;

//variables for storing raw sound and scaled value
int sound;
int scale;

void setup()
{
 //start the serial port a@ 9600bps
 Serial.begin(9600);
 
 //set RGB pins to OUTPUT
 pinMode(l1, OUTPUT);
 pinMode(l2, OUTPUT);
 pinMode(l3, OUTPUT);
 pinMode(l4, OUTPUT);
 pinMode(l5, OUTPUT);
 pinMode(l6, OUTPUT);
}

void loop()
{
 //read and store the audio from Envelope pin
 sound = analogRead(soundPin);
 
 //map sound which in a quiet room a clap is 300
 scale = map(sound, 0, 450, 0, 7);

 //print values over the serial port for debugging
 Serial.print(sound);
 Serial.print("   ");
 Serial.println(scale);

 //switch case on scaled value
switch (scale)
{

case 0:
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  break;
  

case 1:
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  break;

 
case 2:
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  break;
  

case 3:
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  break;

case 4:
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  break;

case 5:
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
  digitalWrite(l5, HIGH);
  digitalWrite(l6, LOW);
  break;

case 6:
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
  digitalWrite(l5, HIGH);
  digitalWrite(l6, HIGH);
  break;

case 7
:
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
  digitalWrite(l5, HIGH);
  digitalWrite(l6, HIGH);
  break;

default:
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  break;
 }
}
