// LED 1 -> 2 -> 3 -> 4 -> 3 -> 2 -> 1->        2 -> 3 -> 4 - > 3 - > 2 ->    3 -> 4 -> 3

int led_arr[4] = {2,3,4,5};
int n =3;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_arr[0],OUTPUT);
  pinMode(led_arr[1],OUTPUT);
  pinMode(led_arr[2],OUTPUT);
  pinMode(led_arr[3],OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// LED를 ON 합니다.
for(int i=0;i<4;i++){
  digitalWrite(led_arr[i], HIGH);
  // 1초간 대기합니다.
  delay(1000);        
  // LED를 OFF 합니다.
  digitalWrite(led_arr[i],LOW);
  // 1초간 대기합니다.
  delay(1000);
}
for(int i=2;i>0;i--){
  digitalWrite(led_arr[i], HIGH);
  // 1초간 대기합니다.
  delay(1000);        
  // LED를 OFF 합니다.
  digitalWrite(led_arr[i],LOW);
  // 1초간 대기합니다.
  delay(1000);
}      
}
