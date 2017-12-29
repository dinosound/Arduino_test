// Xmas tree fading LED
int red = 9;
int blue = 10;
int green = 11;
int pause = 30;

void setup() {
}

void loop() { 
upandfadeRG();
upandfadeGB();
upandfadeRB();
redlite();
redgreen();
greenlite();
greenblue();
bluelite();
redblue();
}

void redlite()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(red, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(red, fadeValue);
    delay(pause);
  } 
}

void greenlite()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(green, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(green, fadeValue);
    delay(pause);
  } 
}

void bluelite()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(blue, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(blue, fadeValue);
    delay(pause);
  } 
}

void redgreen()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(red, fadeValue);
    analogWrite(green, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(red, fadeValue);
    analogWrite(green, fadeValue);
    delay(pause);
  } 
}

void greenblue()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(blue, fadeValue);
    analogWrite(green, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(blue, fadeValue);
    analogWrite(green, fadeValue);
    delay(pause);
  } 
}

void redblue()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(red, fadeValue);
    analogWrite(blue, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(red, fadeValue);
    analogWrite(blue, fadeValue);
    delay(pause);
  } 
}

void all()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(red, fadeValue);
    analogWrite(green, fadeValue);
    analogWrite(blue, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(red, fadeValue);
    analogWrite(green, fadeValue);
    analogWrite(blue, fadeValue);
    delay(pause);
  } 
}

void upandfadeRG()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(red, fadeValue);
    analogWrite(green, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(red, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(green, fadeValue);
    delay(pause);
  }
}

void upandfadeGB()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(blue, fadeValue);
    analogWrite(green, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(green, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(blue, fadeValue);
    delay(pause);
  }
}

void upandfadeRB()
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(blue, fadeValue);
    analogWrite(red, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(red, fadeValue);
    delay(pause);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    analogWrite(blue, fadeValue);
    delay(pause);
  }
}
