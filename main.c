#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;
  
  
  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  int mid = 250;
  
  clear_screen(s);
  //quad one: issues
  /* draw_line(250, 250, 250, 499, s, c); */
  /* draw_line(250, 250, 499, 250, s, c); */

  
  draw_line(mid, mid, mid , mid + 249, s, c);
  draw_line(250, 250, 499, 250, s, c);
  draw_line(250, 250, 499, 499, s, c);
  draw_line(250, 250, 350, 300, s, c);
  draw_line(250, 250, 300, 350, s, c);

  //quad four
  draw_line(250, 250, 499, 1, s, c);
  draw_line(250, 250, 400, 200, s, c);
  draw_line(250, 250, 300, 100, s, c);

  draw_line(250, 250, 0, 0, s, c);
  draw_line(250, 250, 1, 499, s, c);
  draw_line(250, 250, 1, 250, s, c);
  draw_line(250, 250, 250, 1, s, c); 
  /* draw_line(250, 250, 250, 499, s, c); */

  /* /\* draw_line(250, 250, 1, 499, s, c); *\/ */

  /* draw_line(250, 250, 1, 50, s, c); */
  /* draw_line(250, 250, 100, 5, s, c); */
  draw_line(250, 250, 1, 300, s, c);
  draw_line(250, 250, 200, 400, s, c);
  draw_line(250, 250, 40, 90 , s, c);
   draw_line(250, 250, 40, 20 , s, c);
  draw_line(250, 250, 250, 1, s, c); 


  


  
  display(s);
  
  save_extension(s, "lines.png");
}  
