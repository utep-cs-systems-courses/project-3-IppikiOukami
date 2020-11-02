#include <libTimer.h>
#include "lcddraw.h"
#include "lcdutils.h"

int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_RED);

  drawString5x7(20,20,"MSP430", COLOR_YELLOW, COLOR_BLACK);
  fillRectangle(30,30,60,60,COLOR_ORANGE);
}
