int PIEZO = 11;
int LED = 13;
int BUTTON_C = 2;
int BUTTON_D = 3;
int BUTTON_E = 4;
int BUTTON_F = 5;
int BUTTON_G = 6;
int BUTTON_A = 7;
int BUTTON_B = 8;
int BUTTON_C2 = 9;
int MUSICAL = 10;
void setup() {
  for (int i = 2; i <= 10; i++) {
    pinMode(i, INPUT_PULLUP);
  } pinMode(LED, OUTPUT);
} void loop() {
  while (digitalRead(BUTTON_C) == LOW) {
    tone(PIEZO, 262, 100);
    digitalWrite(LED, HIGH);
  } while (digitalRead(BUTTON_D) == LOW) {
    tone(PIEZO, 294, 100);
    digitalWrite(LED, HIGH);
  } while (digitalRead(BUTTON_E) == LOW) {
    tone(PIEZO, 330, 100);
    digitalWrite(LED, HIGH);
  } while (digitalRead(BUTTON_F) == LOW) {
    tone(PIEZO, 349, 100);
    digitalWrite(LED, HIGH);
  } while (digitalRead(BUTTON_G) == LOW) {
    tone(PIEZO, 392, 100);
    digitalWrite(LED, HIGH);
  } while (digitalRead(BUTTON_A) == LOW) {
    tone(PIEZO, 440, 100);
    digitalWrite(LED, HIGH);
  } while (digitalRead(BUTTON_B) == LOW) {
    tone(PIEZO, 494, 100);
    digitalWrite(LED, HIGH);
  } while (digitalRead(BUTTON_C2) == LOW) {
    tone(PIEZO, 523, 100);
    digitalWrite(LED, HIGH);
  } if (digitalRead(MUSICAL) == LOW) {
    midi();
  } noTone(PIEZO);
  digitalWrite(LED, LOW);
} void midi() {
  tone(PIEZO, 146, 706.188118812);
  delay(784.653465347);
  delay(264.851485149);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 130, 236.881188119);
  delay(263.201320132);
  delay(0.825082508251);
  tone(PIEZO, 130, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 130, 593.316831683);
  delay(659.240924092);
  delay(0.825082508251);
  tone(PIEZO, 130, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 130, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 130, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 130, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 138, 236.881188119);
  delay(263.201320132);
  delay(0.825082508251);
  tone(PIEZO, 138, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 138, 593.316831683);
  delay(659.240924092);
  delay(0.825082508251);
  tone(PIEZO, 138, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 138, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 138, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 138, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 138, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 130, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 130, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 130, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 130, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 130, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 130, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 130, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 130, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 130, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 130, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 130, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 146, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 146, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 155, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 195, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 261, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 293, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 311, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 349, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 207, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 233, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 261, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 277, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 261, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 277, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 277, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 261, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 233, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 277, 236.881188119);
  delay(263.201320132);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 184, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 236.881188119);
  delay(263.201320132);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 184, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 184, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(297.854785479);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 207, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 184, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(297.854785479);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 184, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(297.854785479);
  tone(PIEZO, 155, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 184, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 195, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 220, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 261, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 220, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 130, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 146, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 146, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 155, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 195, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 261, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 293, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 311, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 349, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 207, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 233, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 261, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 277, 1068.56435644);
  delay(1187.29372937);
  delay(0.825082508251);
  tone(PIEZO, 311, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 261, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 261, 712.128712871);
  delay(791.254125413);
  delay(0.825082508251);
  tone(PIEZO, 220, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 246, 1068.56435644);
  delay(1187.29372937);
  delay(0.825082508251);
  tone(PIEZO, 311, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 261, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 220, 712.128712871);
  delay(791.254125413);
  delay(0.825082508251);
  tone(PIEZO, 220, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 246, 1068.56435644);
  delay(1187.29372937);
  delay(0.825082508251);
  tone(PIEZO, 311, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 261, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 220, 712.128712871);
  delay(791.254125413);
  delay(0.825082508251);
  tone(PIEZO, 220, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 246, 1068.56435644);
  delay(1187.29372937);
  delay(0.825082508251);
  tone(PIEZO, 311, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 233, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 233, 712.128712871);
  delay(791.254125413);
  delay(0.825082508251);
  tone(PIEZO, 174, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 155, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 155, 88.3663366337);
  delay(98.1848184818);
  delay(297.854785479);
  tone(PIEZO, 164, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 195, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 195, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 220, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 261, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 220, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 130, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 146, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 146, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 155, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 195, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 261, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 293, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 311, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 349, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 207, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 233, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 261, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 277, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 261, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 277, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 277, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 261, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 233, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 277, 236.881188119);
  delay(263.201320132);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 184, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 236.881188119);
  delay(263.201320132);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 184, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 184, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(297.854785479);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 207, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 184, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(297.854785479);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 184, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 184, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(297.854785479);
  tone(PIEZO, 155, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 184, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 195, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 220, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 261, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 220, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 174, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 130, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 146, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 146, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 146, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 155, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 195, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 207, 266.584158416);
  delay(296.204620462);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 261, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 293, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 311, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 349, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 207, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 207, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 233, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 261, 118.069306931);
  delay(131.188118812);
  delay(0.825082508251);
  tone(PIEZO, 277, 1068.56435644);
  delay(1187.29372937);
  delay(0.825082508251);
  tone(PIEZO, 311, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 261, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 261, 712.128712871);
  delay(791.254125413);
  delay(0.825082508251);
  tone(PIEZO, 220, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 246, 1068.56435644);
  delay(1187.29372937);
  delay(0.825082508251);
  tone(PIEZO, 311, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 261, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 220, 712.128712871);
  delay(791.254125413);
  delay(0.825082508251);
  tone(PIEZO, 220, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 246, 1068.56435644);
  delay(1187.29372937);
  delay(0.825082508251);
  tone(PIEZO, 311, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 261, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 220, 712.128712871);
  delay(791.254125413);
  delay(0.825082508251);
  tone(PIEZO, 220, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 246, 1068.56435644);
  delay(1187.29372937);
  delay(0.825082508251);
  tone(PIEZO, 311, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 233, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 233, 712.128712871);
  delay(791.254125413);
  delay(0.825082508251);
  tone(PIEZO, 174, 355.693069307);
  delay(395.214521452);
  delay(0.825082508251);
  tone(PIEZO, 155, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 155, 88.3663366337);
  delay(98.1848184818);
  delay(297.854785479);
  tone(PIEZO, 164, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 174, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 195, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 195, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 220, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 233, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 261, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 220, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 88.3663366337);
  delay(98.1848184818);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 110, 177.475247525);
  delay(197.194719472);
  delay(0.825082508251);
  tone(PIEZO, 146, 1425.0);
  delay(1583.33333333);
}