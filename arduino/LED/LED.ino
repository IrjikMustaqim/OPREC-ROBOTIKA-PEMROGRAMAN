// dalam menjalankan motor dc biasanya digunakan motor driver seperti l293d dan sebagainya, untuk membuat motor dc berputar bisa mengunakan pwm atau digital biasa

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(13,HIGH);
}
