
String inputs;
#define relay1 11 //Connect relay1 to pin 11
#define relay2 10 //Connect relay2 to pin 10
#define relay3 9 //Connect relay3 to pin 9
#define relay4 8 //Connect relay3 to pin 8
#define relay5 7 //Connect relay4 to pin 7
#define light 12 //Connect relay4 to pin 12
const int light1 = 31; //Connect relay4 to pin 12
const int light2 = 33; //Connect relay4 to pin 12
const int light3 = 35; //Connect relay4 to pin 12
const int light4 = 37; //Connect relay4 to pin 12
const int light5 = 39; //Connect relay4 to pin 12
const int light6 = 41; //Connect relay4 to pin 12
const int light7 = 43; //Connect relay4 to pin 12
int val1=0;
int val2=0;
int val3=0;
int val4=0;

void setup()
{
   pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4, OUTPUT);

 digitalWrite(3,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
  
Serial1.begin(9600); //Set rate for communicating with phone
pinMode(relay1, OUTPUT); //Set relay1 as an output
pinMode(relay2, OUTPUT); //Set relay2 as an output
pinMode(relay3, OUTPUT); //Set relay3 as an output
pinMode(relay4, OUTPUT); //Set relay4 as an output
pinMode(relay5, OUTPUT); //Set relay5 as an output
pinMode(light, OUTPUT); //Set light as an output
pinMode(light1, OUTPUT); //Set light as an output
pinMode(light2, OUTPUT); //Set light as an output
pinMode(light3, OUTPUT); //Set light as an output
pinMode(light4, OUTPUT); //Set light as an output
pinMode(light5, OUTPUT); //Set light as an output
pinMode(light6, OUTPUT); //Set light as an output
pinMode(light7, OUTPUT); //Set light as an output

digitalWrite(light1, LOW); //Switch relay1 off
digitalWrite(light2, LOW); //Switch relay1 off
digitalWrite(light3, LOW); //Switch relay1 off
digitalWrite(light4, LOW); //Switch relay1 off
digitalWrite(light5, LOW); //Switch relay1 off
digitalWrite(light6, LOW); //Switch relay1 off
digitalWrite(light7, LOW); //Switch relay1 off

digitalWrite(relay1, LOW); //Switch relay1 off
digitalWrite(relay2, HIGH); //Swtich relay2 off
digitalWrite(relay3, HIGH); //Switch relay3 off
digitalWrite(relay4, HIGH); //Swtich relay4 off
digitalWrite(relay5, HIGH); //Swtich relay5 off
digitalWrite(light, LOW); //Swtich light off
}
void loop()
{
while(Serial1.available()) //Check if there are available bytes to read
{
delay(10); //Delay to make it stable
char c = Serial1.read(); //Conduct a serial read
if (c == '#'){
break; //Stop the loop once # is detected after a word
}
inputs += c; //Means inputs = inputs + c
}
if (inputs.length() >0)
{
Serial1.println(inputs);

if(inputs == "a") 
  {
    digitalWrite(relay1, HIGH);
  }

else if(inputs == "b") 
  {
    digitalWrite(relay1, LOW);
  }

 else if(inputs == "c") 
  {
    digitalWrite(relay2, LOW);
  }

  else if(inputs == "d") 
  {
    digitalWrite(relay2, HIGH);
  }
  
else if(inputs == "e") 
  {
    digitalWrite(relay3, LOW);
  }

else if(inputs == "f") 
  {
    digitalWrite(relay3, HIGH);
  }

else if(inputs == "g") 
  {
    digitalWrite(relay4, LOW);
  }

else if(inputs == "h") 
  {
    digitalWrite(relay4, HIGH);
  }

else if(inputs == "i") 
  {
    digitalWrite(relay5, LOW);
  }

else if(inputs == "j") 
  {
    digitalWrite(relay5, HIGH);
  }

else if(inputs == "off") 
  {
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, HIGH);
    digitalWrite(relay3, HIGH);
    digitalWrite(relay4, HIGH);
    digitalWrite(relay5, HIGH);
    digitalWrite(light, LOW);
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
    digitalWrite(light5, LOW);
    digitalWrite(light6, LOW);
    digitalWrite(light7, LOW                 );
  }
  else if(inputs == "on") 
  {
    digitalWrite(relay1, HIGH);
    digitalWrite(relay2, LOW);
    digitalWrite(relay3, LOW);
    digitalWrite(relay4, LOW);
    digitalWrite(relay5, LOW);
    digitalWrite(light, HIGH);
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    digitalWrite(light4, HIGH);
    digitalWrite(light5, HIGH);
    digitalWrite(light6, HIGH);
    digitalWrite(light7, HIGH);
  }

  else if(inputs == "7") 
  {
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    digitalWrite(light4, HIGH);
    digitalWrite(light5, HIGH);
    digitalWrite(light6, HIGH);
    digitalWrite(light7, HIGH);
  }
  else if(inputs == "6") 
  {
    digitalWrite(light1, LOW);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    digitalWrite(light4, HIGH);
    digitalWrite(light5, HIGH);
    digitalWrite(light6, HIGH);
    digitalWrite(light7, HIGH);
  }
  else if(inputs == "5") 
  {
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, HIGH);
    digitalWrite(light4, HIGH);
    digitalWrite(light5, HIGH);
    digitalWrite(light6, HIGH);
    digitalWrite(light7, HIGH);
  }
  else if(inputs == "4") 
  {
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, HIGH);
    digitalWrite(light5, HIGH);
    digitalWrite(light6, HIGH);
    digitalWrite(light7, HIGH);
  }
  else if(inputs == "3") 
  {
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
    digitalWrite(light5, HIGH);
    digitalWrite(light6, HIGH);
    digitalWrite(light7, HIGH);
  }
  else if(inputs == "2") 
  {
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
    digitalWrite(light5, LOW);
    digitalWrite(light6, HIGH);
    digitalWrite(light7, HIGH);
  }
  else if(inputs == "1") 
  {
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
    digitalWrite(light5, LOW);
    digitalWrite(light6, LOW);
    digitalWrite(light7, HIGH);
  }
  else if(inputs == "0") 
  {
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    digitalWrite(light4, LOW);
    digitalWrite(light5, LOW);
    digitalWrite(light6, LOW);
    digitalWrite(light7, LOW);
  }
  
inputs="";
}
}
