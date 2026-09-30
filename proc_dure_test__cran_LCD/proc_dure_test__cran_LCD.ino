/*
 * LEQUETTE KELAN BTS CIEL2
 * Code arduino procédure de test écran lcd HITASHI
 */

#include <LiquidCrystal.h>

// Initialisation des ports
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
// Initialisation du bouton B1
const int buttonPin = 6;
int buttonState = 0;

void setup() {
  // initialisation des lignes et colonnes de l'écran lcd
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

void loop() {
  // Vérification de l'état du bouton B1
  buttonState = digitalRead(buttonPin);

  // Définition de la boucle de démarrage du test
  if (buttonState == HIGH) {
    // Définir le point de début de phrase sur la ligne 1
    lcd.setCursor(3, 0);
    // Afficher le texte sur la première ligne
    lcd.print("ECRAN OK");
    // Définir le point de début de phrase sur la ligne 2
    lcd.setCursor(0, 1);
    // Afficher le texte sur la deuxième ligne
    lcd.print("test  luminosité");
    delay(5000);
    // Faire la procédure de test du rétroéclairage
    lcd.noBlink();
    delay(2000);
    lcd.blink();
    delay(2000);
  } else {
    delay(3000);
  }
}
