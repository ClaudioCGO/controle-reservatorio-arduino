const int sensor = 2;
const int ledVerde = 4;
const int ledVermelho = 5;
const int releAbrir = 6;
const int releFechar = 7;

int distanciaSegura = 50;

int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(releAbrir, OUTPUT);
  pinMode(releFechar, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(sensor, sensor);

    Serial.print(cm);
  	Serial.println("cm");
  
  if(cm >= 50){

    Serial.println("safe");
    
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    
    digitalWrite(releAbrir, HIGH);
    digitalWrite(releFechar, LOW);
  }else {
    Serial.println("unsafe");
    
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    
    digitalWrite(releAbrir, LOW);
    digitalWrite(releFechar, HIGH);    
  }
  delay(100); // Wait for 100 millisecond(s)
}