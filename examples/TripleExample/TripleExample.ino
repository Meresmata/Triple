#include <Triple.h>

void setup() {
  // put your setup code here, to run once:
  Triple<> c(1,1,0);
  Triple<> d(1,2,1);
  Serial.begin(9600);

  if (d> c)
    Serial.print("Pair d > c.");
}

void loop() {
  // put your main code here, to run repeatedly:

}
