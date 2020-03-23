// ------------
// Blink an LED
// ------------

int led1 = D7; 
int unit = 200;

void setup() {
    pinMode(led1, OUTPUT);
}

void loop() {
    // R
    dot();
    dash();
    dot();
    delay(2*unit);
    
    // Y
    dash();
    dot();
    dash();
    dash();
    delay(2*unit);
    
    // A
    dot();
    dash();
    delay(2*unit);
    
    // N
    dash();
    dot();
    delay(6*unit);

}

void dot() {
    digitalWrite(led1, HIGH);
    delay(unit);
    digitalWrite(led1, LOW);
    delay(unit);
}

void dash() {
    digitalWrite(led1, HIGH);
    delay(3*unit);
    digitalWrite(led1, LOW);
    delay(unit);
}
