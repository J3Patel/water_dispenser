
const int dip_it = 7;
const int suck_it = 8;

const int btn = 2;
bool is_filled = false;

void setup() {
  // put your setup code here, to run once:
pinMode(dip_it, OUTPUT);
pinMode(suck_it, OUTPUT);
pinMode(btn, INPUT);
digitalWrite(dip_it, HIGH);
digitalWrite(suck_it, HIGH);

Serial.begin(9600);
delay(500);

}

void loop() {
  int isOn = digitalRead(btn);
  if (isOn == 1) {
     digitalWrite(suck_it, HIGH);
     delay(1000);
     is_filled = false;
    
  } else if (is_filled == false) {
    digitalWrite(dip_it, LOW);
    delay(3500);
    digitalWrite(suck_it, LOW);
    delay(4500);
    digitalWrite(dip_it, HIGH);
    delay(2500);
    is_filled = true;
  }

}
