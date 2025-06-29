int L1 = 4;
int L2 = 3;
int L3 = 2;

int button1 = 7;
int button2 = 6;
int button3 = 5;

bool led1State = false;
bool led2State = false;
bool led3State = false;

bool lastButton1 = HIGH;
bool lastButton2 = HIGH;
bool lastButton3 = HIGH;

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
}

void loop() {
  
  bool currentButton1 = digitalRead(button1);
  if (lastButton1 == HIGH && currentButton1 == LOW) {
    led1State = !led1State;
    digitalWrite(L1, led1State);
    delay(200);
  }
  lastButton1 = currentButton1;

 
  bool currentButton2 = digitalRead(button2);
  if (lastButton2 == HIGH && currentButton2 == LOW) {
    led2State = !led2State;
    digitalWrite(L2, led2State);
    delay(200);
  }
  lastButton2 = currentButton2;

 
  bool currentButton3 = digitalRead(button3);
  if (lastButton3 == HIGH && currentButton3 == LOW) {
    led3State = !led3State;
    digitalWrite(L3, led3State);
    delay(200);
  }
  lastButton3 = currentButton3;
}