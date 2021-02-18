// dalam menjalankan motor dc biasanya digunakan motor driver seperti l293d dan sebagainya, untuk membuat motor dc berputar bisa mengunakan pwm atau digital biasa

void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(5,0); 0% of arduino's pwm value 
   delay(1000);
   analogWrite(5,64); 25% of arduino's pwm value 
   delay(1000);
   analogWrite(5,127); 50% of arduino's pwm value 
   delay(1000);
   analogWrite(5,191); 75% of arduino's pwm value 
   delay(1000);
   analogWrite(5,255); 100% of arduino's pwm value 
   delay(1000);
}
