void setup()
{

    pinMode(8, OUTPUT);  // RED
    pinMode(9, OUTPUT);  // YELLOW
    pinMode(10, OUTPUT); // GREEN

    pinMode(7, INPUT_PULLUP); //Konfiguracja pinu 9 jako wejście z przekaźnika

    digitalWrite(8, LOW);  // wyłączenie diody na pin8
    digitalWrite(9, LOW);  // wyłączenie diody na pin8
    digitalWrite(10, LOW); // wyłączenie diody na pin8
}

// Wersja 1
// void loop()
// {
//     digitalWrite(10, LOW);
//     digitalWrite(9, LOW);
//     digitalWrite(8, HIGH);

//     delay(1000);

//     digitalWrite(10, LOW);
//     digitalWrite(9, HIGH);
//     digitalWrite(8, LOW);

//     delay(1000);

//     digitalWrite(10, HIGH);
//     digitalWrite(9, LOW);
//     digitalWrite(8, LOW);

//     delay(1000);
// }

// Wersja 2
void loop()
{
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);

    delay(1000);
    while (digitalRead(7) == HIGH)
    {
    }

    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);

    delay(1000);
    while (digitalRead(7) == HIGH)
    {
    }

    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);

    delay(1000);
    while (digitalRead(7) == HIGH)
    {
    }
}
