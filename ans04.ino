#define LED_0 2
#define LED_1 3
#define LED_2 4
#define LED_3 5
const int button1Pin = 6;


int leds[] = { LED_0, LED_1, LED_2, LED_3, } ;

void setup() {
  for ( int i = LED_0 ; i <= LED_3 ; i++ ) {
    pinMode(i, OUTPUT);
  }
  pinMode(button1Pin,INPUT);
  
  Serial.begin(9600);

}
int check=0;
int count = 0 ;
int i=0;
void loop() {
  int button1State;
  button1State = digitalRead(button1Pin); 
   Serial.println(button1State);
  if(button1State == HIGH){
    int bit = bitRead(count, i) ;   
    digitalWrite(leds[i], bit);
    i++;
    if( i == 4)
      i =0;
   }
   else{         
   //LED를 OFF 시킵니다.
    digitalWrite(leds[i], LOW);      
  }
  Serial.println(count++);
}
