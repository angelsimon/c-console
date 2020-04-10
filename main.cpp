#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib>
#include "inc/rlutil.h"
using namespace rlutil;
#include "inc/funciones.h"
#include "inc/producto.h"

int main(){
  fputs( "\x1b[8;25;80t", stdout );
  ui::draw_lines();
  ui::clear_panel(1, BLUE);
  ui::clear_panel(2);
  ui::clear_panel(3);
  ui::clear_panel(4, RED);
  ui::clear_panel(5);
  //ui::draw_brand();
  //ui::draw_menu(3);
  gotoxy(1,25);
  return 0;
}
