#include <FastLED.h>
#include "ESP8266WiFi.h"
#include "TimeClient.h"

#define LED_PIN    2 //The data pin of the arduino
#define NUM_LEDS    110 //Numbers of LED
#define BRIGHTNESS  20 //Brightness of the LEDs
#define LED_TYPE    WS2812 //The type of the LED stripe
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

#define UPDATES_PER_SECOND 120

// WiFi parameters
const char* ssid = "YOUR_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

String hours, minutes, seconds;
int currentSecond, currentMinute, currentHour;


const float UTC_OFFSET = 1;
TimeClient timeClient(UTC_OFFSET);

void setup() {
  Serial.begin(115200);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");

  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setBrightness(  BRIGHTNESS );
  timeClient.updateTime();
  fadeAll();
}

void fadeAll() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i].r = 0;
    leds[i].g = 0;
    leds[i].b = 0;

  }
  FastLED.show();
}

void showLed(int i, int r, int g, int b) {
  leds[i].r = r;
  leds[i].g = g;
  leds[i].b = b;
}

void wordES( int r, int g, int b) {
  showLed(108, r, g, b);
  showLed(109, r, g, b);
}

void wordIST(int r, int g, int b) {
  showLed(104, r, g, b);
  showLed(105, r, g, b);
  showLed(106, r, g, b);
}
void wordFUENF(int r, int g, int b) {
  showLed(99, r, g, b);
  showLed(100, r, g, b);
  showLed(101, r, g, b);
  showLed(102, r, g, b);
}

void wordZEHN(int r, int g, int b) {
  showLed(88, r, g, b);
  showLed(89, r, g, b);
  showLed(90, r, g, b);
  showLed(91, r, g, b);
}

void wordZWANZIG(int r, int g, int b) {
  showLed(98, r, g, b);
  showLed(97, r, g, b);
  showLed(96, r, g, b);
  showLed(95, r, g, b);
  showLed(94, r, g, b);
  showLed(93, r, g, b);
  showLed(92, r, g, b);
}

void wordDREI(int r, int g, int b) {
  showLed(87, r, g, b);
  showLed(86, r, g, b);
  showLed(85, r, g, b);
  showLed(84, r, g, b);
}


void wordVIERTEL(int r, int g, int b) {
  showLed(83, r, g, b);
  showLed(82, r, g, b);
  showLed(81, r, g, b);
  showLed(80, r, g, b);
  showLed(79, r, g, b);
  showLed(78, r, g, b);
  showLed(77, r, g, b);
}

void wordNACH(int r, int g, int b) {
  showLed(68, r, g, b);
  showLed(71, r, g, b);
  showLed(70, r, g, b);
  showLed(69, r, g, b);
}
void wordVOR(int r, int g, int b) {
  showLed(74, r, g, b);
  showLed(73, r, g, b);
  showLed(72, r, g, b);
}
void wordZWOELF(int r, int g, int b) {
  showLed(60, r, g, b);
  showLed(59, r, g, b);
  showLed(58, r, g, b);
  showLed(57, r, g, b);
  showLed(56, r, g, b);
}
void wordHALB(int r, int g, int b) {
  showLed(65, r, g, b);
  showLed(64, r, g, b);
  showLed(63, r, g, b);
  showLed(62, r, g, b);
}

void wordZWEI(int r, int g, int b) {
  showLed(44, r, g, b);
  showLed(45, r, g, b);
  showLed(46, r, g, b);
  showLed(47, r, g, b);
}

void wordEINS(int r, int g, int b) {
  showLed(46, r, g, b);
  showLed(47, r, g, b);
  showLed(48, r, g, b);
  showLed(49, r, g, b);
}
void wordSIEBEN(int r, int g, int b) {
  showLed(49, r, g, b);
  showLed(50, r, g, b);
  showLed(51, r, g, b);
  showLed(52, r, g, b);
  showLed(53, r, g, b);
  showLed(54, r, g, b);
}

void wordSTUNDEDREI(int r, int g, int b) {
  showLed(42, r, g, b);
  showLed(41, r, g, b);
  showLed(40, r, g, b);
  showLed(39, r, g, b);

}

void wordSTUNDEFUENF(int r, int g, int b) {
  showLed(36, r, g, b);
  showLed(35, r, g, b);
  showLed(34, r, g, b);
  showLed(33, r, g, b);
}

void wordVIER(int r, int g, int b) {
  showLed(29, r, g, b);
  showLed(30, r, g, b);
  showLed(31, r, g, b);
  showLed(32, r, g, b);
}

void wordNEUN(int r, int g, int b) {
  showLed(28, r, g, b);
  showLed(27, r, g, b);
  showLed(26, r, g, b);
  showLed(25, r, g, b);
}
void wordELF(int r, int g, int b) {
  showLed(24, r, g, b);
  showLed(23, r, g, b);
  showLed(22, r, g, b);
}
void wordACHT(int r, int g, int b) {
  showLed(20, r, g, b);
  showLed(19, r, g, b);
  showLed(18, r, g, b);
  showLed(17, r, g, b);
}
void wordSTUNDEZEHN(int r, int g, int b) {
  showLed(16, r, g, b);
  showLed(15, r, g, b);
  showLed(14, r, g, b);
  showLed(13, r, g, b);
}

void wordSECHS(int r, int g, int b) {
  showLed(1, r, g, b);
  showLed(2, r, g, b);
  showLed(3, r, g, b);
  showLed(4, r, g, b);
  showLed(5, r, g, b);
}

void wordUHR(int r, int g, int b) {
  showLed(10, r, g, b);
  showLed(9, r, g, b);
  showLed(8, r, g, b);
}

int color() {
  return random(0, 255);
}

void loop() {

  hours = timeClient.getHours();
  minutes = timeClient.getMinutes();
  seconds = timeClient.getSeconds();

  currentHour = hours.toInt();
  if (currentHour > 12) currentHour = currentHour - 12;
  currentMinute = minutes.toInt();
  currentSecond = seconds.toInt();
  wordES(color(), color(), color());
  wordIST(color(), color(), color());
  wordUHR(color(), color(), color());

  if (currentMinute >= 2 && currentMinute < 7) {
    wordFUENF(color(), color(), color());
    wordNACH(color(), color(), color());
  }
  if (currentMinute >= 7 && currentMinute < 12) {
    wordZEHN(color(), color(), color());
    wordNACH(color(), color(), color());
  }
  if (currentMinute >= 12 && currentMinute < 17) {
    wordVIERTEL(color(), color(), color());
    wordNACH(color(), color(), color());
  }
  if (currentMinute >= 17 && currentMinute < 22) {
    wordZWANZIG(color(), color(), color());
    wordNACH(color(), color(), color());
  }
  if (currentMinute >= 22 && currentMinute < 27) {
    wordFUENF(color(), color(), color());
    wordVOR(color(), color(), color());
    wordHALB(color(), color(), color());
    currentHour += 1;
  }
  if (currentMinute >= 27 && currentMinute < 32) {
    wordHALB(color(), color(), color());
    currentHour += 1;
  }
  if (currentMinute >= 32 && currentMinute < 37) {
    wordFUENF(color(), color(), color());
    wordNACH(color(), color(), color());
    wordHALB(color(), color(), color());
    currentHour += 1;
  }
  if (currentMinute >= 37 && currentMinute < 42) {
    wordZWANZIG(color(), color(), color());
    wordVOR(color(), color(), color());
    currentHour += 1;
  }
  if (currentMinute >= 42 && currentMinute < 47) {
    wordDREI(color(), color(), color());
    wordVIERTEL(color(), color(), color());
    wordNACH(color(), color(), color());
  }
  if (currentMinute >= 47 && currentMinute < 52) {
    wordZEHN(color(), color(), color());
    wordVOR(color(), color(), color());
    currentHour += 1;
  }
  if (currentMinute >= 52 && currentMinute < 57) {
    wordZEHN(color(), color(), color());
    wordVOR(color(), color(), color());
    currentHour += 1;
  }
  if (currentMinute >= 57 && currentMinute <= 59 ) {
    currentHour += 1;
  }

  switch (currentHour) {
    case 1:
      wordEINS(color(), color(), color());
      break;
    case 2:
      wordZWEI(color(), color(), color());
      break;
    case 3:
      wordSTUNDEDREI(color(), color(), color());
      break;
    case 4:
      wordVIER(color(), color(), color());
      break;
    case 5:
      wordSTUNDEFUENF(color(), color(), color());
      break;
    case 6:
      wordSECHS(color(), color(), color());
      break;
    case 7:
      wordSIEBEN(color(), color(), color());
      break;
    case 8:
      wordACHT(color(), color(), color());
      break;
    case 9:
      wordNEUN(color(), color(), color());
      break;
    case 10:
      wordSTUNDEZEHN(color(), color(), color());
      break;
    case 11:
      wordELF(color(), color(), color());
      break;
    case 12:
      wordZWOELF(color(), color(), color());
      break;
    case 0:
      wordZWOELF(color(), color(), color());
      break;
  }

  FastLED.show();

  delay(60000);
  fadeAll();
}


















