#include <Triple.h>

void setup() {
  // put your setup code here, to run once:
  Triple<> triple1(1,1,0);
  Triple<> triple2(1,2,1);
  Serial.begin(9600);

  Serial.print("triple1 >  triple2?: ");
  Serial.println((triple1 > triple2));
  Serial.print("triple1 <  triple2?: ");
  Serial.println((triple1 < triple2));
  Serial.print("triple1 <  triple2?: ");
  Serial.println((triple1 == triple2));
}

void loop() {
  // put your main code here, to run repeatedly:

}
