#define LCD 1
#define LED 2
///Crear funcion que permite buscar pantalla por nombre
typedef struct
{
    char nombre[50];
    char direccion[200];
    float precio;
    int tipo;
    int id;
    int isEmpty;

}ePantalla;

int pantalla_init(ePantalla *array, int len);
int pantalla_alta(ePantalla *array, int len);
ePantalla* pantalla_getById(ePantalla *array, int len,int id);
int pantalla_modificar(ePantalla *array, int len);
int pantalla_mostrar(ePantalla *array, int len);
int pantalla_baja(ePantalla *array, int len);
int pantalla_ordenar(ePantalla *array, int len);
