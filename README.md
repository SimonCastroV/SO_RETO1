# EAFITos 🎓

**EAFITos** es una shell educativa desarrollada en lenguaje C como parte del curso de Sistemas Operativos.
Permite aprender fundamentos de programación de sistemas y simula el comportamiento de una terminal real.

---

## 👥 Integrantes

* Samuel Herrera Galvis
* Simón Castro Valencia

---

## 🚀 Objetivos

* Entender la **gestión de procesos** y memoria.
* Aprender sobre **hilos (threads)** y concurrencia.
* Explorar el **sistema de archivos** y llamadas al sistema (syscalls).
* Implementar estructuras de datos usadas en sistemas operativos.

---

## 🐚 La Shell de EAFITos

El sistema inicia con una interfaz de línea de comandos (Shell) que permite interactuar con el sistema mediante comandos.

### 📌 ¿Qué son los Argumentos (`args`)?

En una shell, los comandos reciben argumentos que se almacenan en un arreglo de cadenas (`char **args`):

* `args[0]` → nombre del comando
* `args[1]`, `args[2]`... → parámetros

**Ejemplo:**

```bash
calc 10 + 5
```

* `args[0]` → "calc"
* `args[1]` → "10"
* `args[2]` → "+"
* `args[3]` → "5"

---

## 📚 Comandos Disponibles

### 🔹 Comandos Básicos

| Comando | Argumentos       | Descripción                   | Ejemplo        |
| ------- | ---------------- | ----------------------------- | -------------- |
| listar  | Ninguno          | Lista archivos del directorio | listar         |
| leer    | `<archivo>`      | Muestra contenido             | leer README.md |
| tiempo  | Ninguno          | Fecha y hora                  | tiempo         |
| calc    | `<n1> <op> <n2>` | Calculadora                   | calc 10 * 2    |
| ayuda   | Ninguno          | Lista comandos                | ayuda          |
| salir   | Ninguno          | Termina shell                 | salir          |

---

### 🔹 Comandos Avanzados

| Comando   | Argumentos        | Descripción                      | Ejemplo               |
| --------- | ----------------- | -------------------------------- | --------------------- |
| crear     | `<archivo>`       | Crea archivo vacío               | crear test.txt        |
| eliminar  | `<archivo>`       | Elimina archivo con confirmación | eliminar test.txt     |
| renombrar | `<viejo> <nuevo>` | Cambia nombre de archivo         | renombrar a.txt b.txt |
| historial | Ninguno           | Muestra últimos comandos         | historial             |

---

## 🧪 Ejemplos de uso

```bash
crear archivo.txt
renombrar archivo.txt nuevo.txt
eliminar nuevo.txt
historial
```

---

## 🛠️ Estructura del Proyecto

* `/src` → Código fuente
* `/include` → Headers
* `Makefile` → Compilación

---

## ⚙️ Cómo compilar y ejecutar

```bash
make
./build/sistema_os
```

```bash
make run
```

> Nota: dependiendo de la configuración, el ejecutable puede generarse en `/build`.

---

## 📚 Documentación (Doxygen)

El proyecto incluye documentación automática con **Doxygen**.

### Generar documentación

```bash
doxygen Doxyfile
```

Luego abre:

```bash
docs/html/index.html
```

---

## 📌 Notas

Este proyecto fue desarrollado con fines educativos, aplicando conceptos de sistemas operativos como manejo de archivos, parsing de comandos y uso de llamadas al sistema.
