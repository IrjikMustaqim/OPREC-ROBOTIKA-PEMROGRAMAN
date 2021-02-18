
#define LED1 4
#define LED2 7

int daftarLED[] = {1,2,3,4,5,6,7,8,9,10};
int jumlahLED = 10;
void setup() {
  for(int i=1;i<jumlahLED;i++){
    pinMode(daftarLED[i],OUTPUT);
  }
}

void loop() {
  for(int d=1;d<jumlahLED;d++){
      if(d%2 != 0){
        digitalWrite(daftarLED[d],HIGH);
        delay(1000);
      }
  }
}
