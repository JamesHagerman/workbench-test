#include "application.h"
#include "Adafruit_SSD1306.h"

Adafruit_SSD1306 display(RESET);

bool meshGWStatus = false;
void meshMsgHandler(const char *event, const char *data) {
  meshGWStatus = !meshGWStatus;
  digitalWrite(D7, meshGWStatus);
}

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  display.clearDisplay();
  display.stopscroll();
  display.setTextWrap(true);
  display.setTextColor(WHITE);
  display.setTextSize(1);

  display.setCursor(1, 18);
  display.println("Temperature:");
  display.setCursor(0, 35);
  display.println("Humidity:");
  display.display();

  pinMode(D7, OUTPUT);

  Mesh.subscribe("mesh-msg", meshMsgHandler);
}

void loop() {
}