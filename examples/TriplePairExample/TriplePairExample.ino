#include <Pair.h>
#include <Triple.h>

void setup() {
  // put your setup code here, to run once:
  Pair<> pair1(1,1);
  Triple<> triple1(1,2,1);
  Serial.begin(9600);


  Serial.print("Triple >  Pair?: ");
  Serial.println((triple1 > pair1));
  Serial.print("Triple <  Pair?: ");
  Serial.println((triple1 < pair1));
  Serial.print("Triple <  Pair?: ");
  Serial.println((triple1 == pair1));
}

void loop() {
  // put your main code here, to run repeatedly:

}
