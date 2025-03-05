# 📚 Libft - Tu biblioteca de funciones en C

`libft` es una biblioteca de funciones en C desarrollada desde cero para replicar y mejorar algunas funciones de la librería estándar de C. Es un proyecto fundamental en la escuela **42**, diseñado para fortalecer el conocimiento del lenguaje y la gestión de memoria.

## 📌 **Características**

✅ Implementaciones personalizadas de funciones estándar.\
✅ Funciones de manipulación de cadenas, memoria y listas enlazadas.\
✅ Código estructurado según la **Norminette**.\
✅ Incluye **Get Next Line** y **ft\_printf** como extras.

## 🛠️ **Funciones implementadas**

### 🔹 Funciones de conversión y comprobación

- `ft_atoi` - Convierte una cadena en un número entero.
- `ft_isalnum` - Comprueba si un carácter es alfanumérico.
- `ft_isalpha` - Comprueba si un carácter es una letra.
- `ft_isascii` - Comprueba si un carácter pertenece a la tabla ASCII.
- `ft_isdigit` - Comprueba si un carácter es un dígito.
- `ft_isprint` - Comprueba si un carácter es imprimible.
- `ft_tolower` - Convierte una letra mayúscula en minúscula.
- `ft_toupper` - Convierte una letra minúscula en mayúscula.

### 🔹 Funciones de memoria

- `ft_bzero` - Establece en 0 un bloque de memoria.
- `ft_memset` - Rellena un bloque de memoria con un valor específico.
- `ft_memcpy` - Copia un bloque de memoria.
- `ft_memchr` - Busca un carácter en un bloque de memoria.
- `ft_memcmp` - Compara dos bloques de memoria.
- `ft_memmove` - Copia un bloque de memoria, incluso si se solapan.
- `ft_calloc` - Reserva memoria inicializada a cero.

### 🔹 Funciones de strings

- `ft_strlen` - Calcula la longitud de una cadena.
- `ft_strchr` - Busca un carácter en una cadena.
- `ft_strrchr` - Busca un carácter en una cadena (última aparición).
- `ft_strncmp` - Compara dos cadenas.
- `ft_strlcpy` - Copia una cadena en otra con tamaño limitado.
- `ft_strlcat` - Concatena dos cadenas con tamaño limitado.
- `ft_strdup` - Duplica una cadena.
- `ft_strnstr` - Localiza una subcadena dentro de otra.
- `ft_strjoin` - Concatena dos cadenas.
- `ft_strtrim` - Elimina caracteres innecesarios al inicio y fin de una cadena.
- `ft_strmapi` - Aplica una función a cada carácter de una cadena.
- `ft_striteri` - Aplica una función a cada carácter de una cadena (modificable).
- `ft_split` - Divide una cadena en un array de strings.
- `ft_substr` - Extrae una subcadena de otra cadena.

### 🔹 Funciones de entrada/salida

- `ft_putchar_fd` - Escribe un carácter en un descriptor de archivo.
- `ft_putstr_fd` - Escribe una cadena en un descriptor de archivo.
- `ft_putendl_fd` - Escribe una cadena con salto de línea en un descriptor de archivo.
- `ft_putnbr_fd` - Escribe un número en un descriptor de archivo.

### 🔹 Funciones adicionales

- `ft_itoa` - Convierte un número en una cadena.

### 🔹 Funciones de listas enlazadas

- `ft_lstnew` - Crea un nuevo nodo.
- `ft_lstadd_front` - Agrega un nodo al principio de la lista.
- `ft_lstsize` - Cuenta el número de nodos.

## 🚀 **Extras incluidos**

- **Get Next Line (**``**)**: Lectura eficiente de archivos línea por línea.
- **ft\_printf**: Implementación propia de `printf` con soporte para múltiples formatos.

## 🔧 **Instalación y Uso**

### 1️⃣ **Clonar el repositorio**

```bash
git clone https://github.com/rpaparoni/libft_rpaparoni.git
cd libft_rpaparoni
```

### 2️⃣ **Compilar la biblioteca**

```bash
make
```

Esto generará `libft.a`, que puedes incluir en cualquier proyecto en C.

### 3️⃣ **Usar en tu código**

```c
#include "libft.h"

int main()
{
    char *str = "Hola, mundo!";
    ft_printf("Longitud: %d\n", ft_strlen(str));
    return 0;
}
```

### 4️⃣ **Compilar tu proyecto con libft**

```bash
gcc main.c -L. -lft -o programa
```

## 📜 **Licencia**

Este proyecto es de código abierto y puede ser utilizado libremente.

🐙 **GitHub:** [rpaparoni](https://github.com/rpaparoni)

