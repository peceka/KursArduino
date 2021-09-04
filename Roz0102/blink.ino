void setup()
{
  pinMode(8, OUTPUT); //Konfiguracja pinu 8 jako wyjście
  pinMode(9, OUTPUT); //Konfiguracja pinu 9 jako wyjście
}

void loop()
{
  digitalWrite(8, HIGH); // włączenie diody na pin8
  digitalWrite(9, LOW);  // wyłączenie diody na pin9
  delay(300);            // odczekanie X ms
  digitalWrite(8, LOW);  // wyłączenie diody na pin8
  digitalWrite(9, HIGH); // włączenie diody na pin9
  delay(300);            // Odczekanie X ms
}
