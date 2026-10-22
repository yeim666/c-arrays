# arrays-c

Arreglos numéricos y cadenas de caracteres en C: ejemplos del tutorial y soluciones a los ejercicios propuestos.

## Estructura

```
arrays-c/
├── src/
│   ├── ejemplos/     # 5 ejemplos del tutorial
│   └── ejercicios/   # 6 ejercicios propuestos
├── build/            # ejecutables (generado, ignorado por git)
├── Makefile
├── .gitignore
└── README.md
```

## Uso

```sh
make                                  # compila todo en build/
make run P=ejemplos/01_promedio_maximo  # compila y ejecuta uno
make clean                            # borra build/
```

Requiere `gcc` y `make`.

## Contenido

**Ejemplos**

1. Promedio y máximo en un vector
2. Suma de matrices 2×2
3. Conteo de vocales en una cadena
4. Inversión de una cadena (in-place)
5. Búsqueda lineal

**Ejercicios**

1. Inversión de un vector de 6 enteros
2. Transpuesta de una matriz 3×3
3. Mínimo y su índice en 10 flotantes
4. Palíndromo
5. Concatenación manual (`strcat` propio)
6. Frecuencia de un carácter en una cadena
