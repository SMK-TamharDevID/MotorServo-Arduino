#include <Servo.h> // Mengimpor library Servo untuk mengontrol motor servo

Servo myServo; // Membuat objek servo untuk mengontrol motor servo
int pos = 0;   // Variabel untuk menyimpan posisi sudut servo

void setup() {
  myServo.attach(9); // Menghubungkan servo ke pin digital 9 pada Arduino
}

void loop() {
  // Gerakan servo dari sudut 0 hingga 180 derajat
  for (pos = 0; pos <= 180; pos += 1) {
    myServo.write(pos); // Mengatur servo ke sudut tertentu
    delay(15);          // Menunggu 15 milidetik untuk memastikan pergerakan halus
  }

  // Gerakan servo dari sudut 180 kembali ke 0 derajat
  for (pos = 180; pos >= 0; pos -= 1) {
    myServo.write(pos); // Mengatur servo ke sudut tertentu
    delay(15);          // Menunggu 15 milidetik untuk memastikan pergerakan halus
  }
}
