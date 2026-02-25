# 📅 Historial de Cambios (Changelog)

Este archivo registra los cambios más importantes realizados durante el desarrollo del proyecto **EAFITos**.

---

## [v1.1.0] - 2026-02-23

### ✨ Añadido

* Comando `crear` para generar archivos vacíos.
* Comando `eliminar` con confirmación interactiva para evitar borrados accidentales.
* Comando `renombrar` para cambiar el nombre de archivos.
* Comando `historial` para mostrar los últimos comandos ejecutados.

### 🛠️ Mejorado

* Validación de argumentos en comandos de archivos.
* Manejo de errores mediante `perror` para mayor claridad.
* Integración de nuevos comandos en la shell principal.

### 🧪 Probado

* Verificación del funcionamiento correcto de todos los comandos implementados.
* Pruebas de creación, eliminación y renombrado de archivos.

---

## [v1.0.0] - 2026-02-04

### ✨ Añadido

* Shell interactiva con bucle REPL funcional.
* Comandos básicos: `listar`, `leer`, `tiempo`, `calc`, `ayuda`, `salir`.
* Arquitectura modular separada en `core`, `commands` y `utils`.
* Sistema de documentación con Doxygen.

### 🔄 Cambios

* Migración de un `main.c` monolítico a una estructura modular.