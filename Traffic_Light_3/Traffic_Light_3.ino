

int redled = 3;
int yellowled = 4;
int greenled = 5;

void setup() {
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5,OUTPUT);
}

void loop() {
  digitalWrite(redled, 1);
  delay (90);
  digitalWrite(redled, 0);
  digitalWrite(yellowled, 1);
  delay (90);
  digitalWrite(yellowled, 0);
  digitalWrite(greenled, 1);
    delay (90);
  digitalWrite(greenled, 0);
    digitalWrite(yellowled, 1);
  delay (90);
  digitalWrite(yellowled, 0); 
}
