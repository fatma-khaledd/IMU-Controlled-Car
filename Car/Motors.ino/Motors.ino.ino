#define in1 1
#define in2 2 
#define en1 5
// Motor A pins
#define in3 3
#define in4 4
#define en2 6
// Motor B pins

void forward(float varPitch);//pitch
void right(float varRoll);//roll
void backward(float varPitch);//pitch
void left(float varPitch);

void setup()) 
{
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(en1,OUTPUT);
pinMode(en2,OUTPUT);
}

float pitch, roll, varPitch, varRoll;

void loop()
{

    varPitch = map(pitch,0,90,0,255);
    varRoll = map(Roll,0,90,0,255);

    if (abs(pitch) > 5 && abs(pitch) < 90)
        forward();

    if (abs(roll) > 5 && abs(roll) < 90)
        right();    
}

void forward(float varPitch)
{
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(en1, varPitch);

    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(en2, varPitch);
}
void right(float varRoll)
{
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(en1, varRoll);

    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    analogWrite(en2, varRoll/2);
}
void backward(float varPitch)
{
   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   analogWrite(en1, varPitch);

   digitalWrite(in3, LOW);
   digitalWrite(in4, HIGH);
   analogWrite(en2, varPitch);
}
void left(float varRoll)
{
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    analogWrite(en1, varRoll/2);

    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(en2, varRoll);
}
