int rclk = 14;
int srclk = 12;
int ser = 13;

void setup() {
  pinMode(rclk, OUTPUT);
  pinMode(srclk, OUTPUT);
  pinMode(ser, OUTPUT);
}

void loop() {
  for (int i = 0; i < 255; i++) {
    digitalWrite(rclk, LOW);
    shiftOut(ser, srclk, MSBFIRST, i);
    digitalWrite(rclk, HIGH);
    delay(500);
  }
}
