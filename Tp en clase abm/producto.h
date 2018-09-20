
//Definir un tipo de dato que represente un producto.
//El producto tiene un nombre, una descripcion y un precio
typedef struct
{
    char nombre[50];
    char descripcion[200];
    float precio;
    int isEmpty;
}eProducto;

int producto_altaProducto(eProducto arrayProducto[],int len,int indice);
int producto_mostrar(eProducto arrayProducto[],int len);
int producto_init(eProducto arrayProducto[],int len,int valor);
int producto_lugarLibre(eProducto arrayProducto[],int len, int* indice);
