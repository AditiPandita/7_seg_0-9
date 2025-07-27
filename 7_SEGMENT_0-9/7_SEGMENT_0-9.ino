// 7-segment display pins (a, b, c, d, e, f, g)
int seg[] = {7, 8, 9, 10, 11, 13, 12};  // Connect to pins a-g

// Digit patterns for 0 to 9 (common cathode)
const byte digits[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(seg[i], OUTPUT);
  }
}

void displayDigit(int num) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(seg[i], digits[num][i]);
  }
}

void loop() {
  for (int i = 0; i <= 9; i++) {
    displayDigit(i);
    delay(1000); // show each digit for 1 second
  }
}
