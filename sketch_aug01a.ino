#define BUZZER 2

void setup() {
 pinMode(BUZZER, OUTPUT);
  noTone(BUZZER);
}

void loop() {
    tone(BUZZER, 147); //D
    delay(300);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 147); //D
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 165); //E
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 175); //F
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 147); //D
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 165); //E
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 147); //D
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 131); //C
    delay(250);
    noTone(BUZZER);
    delay(100);

    //další část
    
    tone(BUZZER, 147); //D
    delay(300);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 147); //D
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 165); //E
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 175); //F
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 147); //D
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 165); //E
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 175); //F
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 196); //G
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 196); //G
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 196); //G
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 220); //A
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 233); //A#
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 196); //G
    delay(100);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 220); //A
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 196); //G
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 175); //F
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 165); //E
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 147); //D
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 131); //C
    delay(250);
    noTone(BUZZER);
    delay(100);
    tone(BUZZER, 147); //D
    delay(500);
    noTone(BUZZER);
    delay(10000);
}
