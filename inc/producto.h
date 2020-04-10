#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

struct Producto{
  int id;
  char descripcion[30];
  float precio;
  int stock;
  int stock_min;
};



#endif // PRODUCTO_H_INCLUDED
