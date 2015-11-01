#include <Pair.h>
#include <Triple.h>

void setup() {
  // put your setup code here, to run once:
  Pair<> c(1,1);
  Triple<> d(1,2,1);
  Serial.begin(9600);

  if (d> c)
    Serial.print("Triple d >  Pair c.");
  if  (c > d)
    Serial.print("Pair c > Triple d");
}

void loop() {
  // put your main code here, to run repeatedly:

}
