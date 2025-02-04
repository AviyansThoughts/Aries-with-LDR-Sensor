// Welcome to Aviyan's Thoughts

int LDR = 2; // define the Touch pin on GPIO 2
int LED = 23; // define the LED pin on GPIO 23

void setup() {
  Serial.begin(9600);
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int value = digitalRead(LDR);
  if(value == 1){
    digitalWrite(LED, LOW);
  }
  else{
    digitalWrite(LED, HIGH);
  }
  Serial.println(value);
  delay(200);
}
