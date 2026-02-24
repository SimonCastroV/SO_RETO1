/**
 * @file commands.h
 * @brief Interfaz para los comandos del sistema.
 * 
 * Define las funciones que implementan la lógica de cada comando disponible
 * en la shell. Todas siguen la firma `void cmd_nombre(char **args)`.
 */

#ifndef COMMANDS_H
#define COMMANDS_H

// --- Prototipos de Comandos ---

/**
 * @brief Lista los archivos del directorio actual.
 */
void cmd_listar(char **args);

/**
 * @brief Lee y muestra el contenido de un archivo.
 */
void cmd_leer(char **args);

/**
 * @brief Muestra la hora del sistema.
 */
void cmd_tiempo(char **args);

/**
 * @brief Realiza operaciones matemáticas simples.
 */
void cmd_calc(char **args);

/**
 * @brief Muestra la lista de ayuda.
 */
void cmd_ayuda(char **args);

/**
 * @brief Termina la ejecución de la shell.
 */
void cmd_salir(char **args);

// --- Utilidades del Registro de Comandos ---
/**
 * @brief Comando CREAR (touch)
 * 
 * Crea un archivo vacío en el directorio actual.
 * 
 * Uso: crear <archivo>
 */
void cmd_crear(char **args);
 /**
 * @brief Renombra un archivo existente.
 * @return int Cantidad de comandos.
 */

void cmd_renombrar(char **args);
  /** 
    * @brief Elimina un archivo existente.
    * @return int Cantidad de comandos.
    */
void cmd_eliminar(char **args);

/**
 * @brief Muestra el historial de comandos ingresados.
 * @return int Cantidad de comandos.
 */
void cmd_historial(char **args);

int num_comandos();

#endif
