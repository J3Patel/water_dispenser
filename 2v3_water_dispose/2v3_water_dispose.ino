
const int water_in = 7;
const int water_out = 9;
const int pnu = 8;
const int btn = 2;
bool fill = true;

void setup() {
  // put your setup code here, to run once:
pinMode(water_in, OUTPUT);
pinMode(water_out, OUTPUT);
pinMode(pnu, OUTPUT);
pinMode(btn, INPUT);
digitalWrite(water_in, HIGH);
digitalWrite(water_out, HIGH);
digitalWrite(pnu, LOW);
Serial.begin(9600);
delay(500);

}

void loop() {
  int isOn = digitalRead(btn);
  if (isOn == 1) {
      if( fill == true) {
        digitalWrite(water_out, HIGH);

        digitalWrite(water_in, LOW);
      
        delay(100);
        digitalWrite(pnu, HIGH);
        delay(1800);
        fill = false;
      } else {
         
        digitalWrite(water_in, HIGH);
        delay(100);
        digitalWrite(water_out, LOW);
        delay(50);
        digitalWrite(pnu, LOW);
        delay(1000);
        fill = true;
      }

    
  } 

}
