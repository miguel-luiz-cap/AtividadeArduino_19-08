void setup() {
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(9, HIGH);   // Acender o primeiro
    delay(500);              // Tempo para Acender o segundo
    digitalWrite(10, HIGH);  // Acender o primeiro
    delay(500);              // Tempo para Acender o terceiro
    digitalWrite(11, HIGH);  // Acender o primeiro

    delay(500);              // Tempo para Apagar o primeiro
    digitalWrite(9, LOW);    // Apagar o primeiro
    delay(500);              // Tempo para Apagar o segundo
    digitalWrite(10, LOW);   // Apagar o primeiro
    delay(500);              // Tempo para Apagar o terceiro
    digitalWrite(11, LOW);   // Apagar o primeiro
    delay(500);              // Tempo para Reacender o primeiro
}
