
String question = "Please Enter the color of the LED you'd like to light: ";
int redPin = 13;
int bluePin = 10;
int greenPin = 8;
String color;
int delayTime = 500;
String confirm = " LED lighting up";

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(question);
  while(Serial.available()==0){
      
  }
  color = Serial.readString();
  Serial.print(color);
  Serial.println(confirm);
  if (color == "Red" || color == "red" || color == "RED"){
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);
    delay(delayTime);
  }
  else if (color == "Blue" || color == "blue" || color == "BLUE"){
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(delayTime);
  }
  else if (color == "Green" || color == "green" || color == "GREEN"){
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(delayTime);
  }
}
