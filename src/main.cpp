#include <Arduino.h>

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Teks 1 - 5
// Mendeklarasikan dan menginisialisasi sebuah variabel
// bernama teks1 yang bertipe data String
// dengan nilai awal "Selamat Datang"
String teks1 = "Latihan Arduino Simulasi LCD I2C";

String teks2 = "Simulasi LCD";
String teks3 = "Sekolah BQ";
String teks4 = "Islamic Boarding School";
String teks5 = "Rifky Emeraldy Putra";
String teks6 = "Kelas 8B";

void setup() {
    // Inisialisasi LCD
    lcd.init();

    // Nyalakan lampu latar
    lcd.backlight();
}



void loop() {
    // Teks 1
    lcd.setCursor(0, 0);
    lcd.print(teks1);

    // Teks 2
    lcd.setCursor(0, 1);
    lcd.print(teks2);
    delay(2000);

    // Menghapus seluruh tampilan pada layar LCD
    lcd.clear();

    // Membuat Teks 3 bergeser ke kiri
    for (int i = teks3.length() - 1; i >= 0; i--) {
        lcd.setCursor(0, 0);
        lcd.print(teks3.substring(i));
        delay(250);
    }

    delay(2000);

    // Membuat Teks 4 muncul satu per satu
    for (int i = 0; i < teks4.length(); i++) {
        lcd.setCursor(0, 1);
        lcd.print(teks4.substring(0, i + 1));
        delay(250);
    }

    delay(3000);
    lcd.clear();

    // Teks 5
    lcd.setCursor(0, 0);
    lcd.print(teks5);

    // Teks 6
    lcd.setCursor(0, 1);
    lcd.print(teks6);
    delay(2000);
    lcd.clear();
}
