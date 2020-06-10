int enA = 9;
int in1 = 4;
int in2 = 5;
int enB = 10;
int in3 = 6;
int in4 = 7;
String val;


void setup()
{
  Serial.begin(9600);
  pinMode(enA , OUTPUT);
  pinMode(in1 , OUTPUT);
  pinMode(in2 , OUTPUT);
  pinMode(enB , OUTPUT);
  pinMode(in3 , OUTPUT);
  pinMode(in4 , OUTPUT);
}
void loop()
{
  if (Serial.available())
  {
    val = Serial.readString();
    Serial.println(val);
  
  if (val == "go")
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    analogWrite(enA, 150);
  
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

    analogWrite(enB, 150);
  }
  if (val == "forward")
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    analogWrite(enA, 150);
  
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

    analogWrite(enB, 150);
  }
 if (val == "back")
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    analogWrite(enA, 150);
  
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);

    analogWrite(enB, 150);

  }
  if (val == "left")
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    analogWrite(enA, 200);
  
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

    analogWrite(enB, 200);

    delay(1200);
  
  }
  if (val == "right")
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    analogWrite(enA, 200);
  
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);

    analogWrite(enB, 200);

    delay(1200);
  }
  }
  if (val == "random")
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    analogWrite(enA, 200);
  
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);

    analogWrite(enB, 200);

    delay(5000);

    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

    delay(2000);

    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);

    delay(2000);
  
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);

    delay(500);

    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);

    delay(500);
  
  }
    if (val == "stop")
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    analogWrite(enA, 200);
  
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);

    analogWrite(enB, 200);
  }
      if (val == "reverse")
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    analogWrite(enA, 200);
  
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);

    analogWrite(enB, 200);
  }

}
