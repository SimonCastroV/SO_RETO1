#ifndef HISTORY_H
#define HISTORY_H

#define HIST_SIZE 5
#define MAX_CMD_LEN 256

// Variables globales del historial (definidas en history.c)
extern char historial[HIST_SIZE][MAX_CMD_LEN];
extern int hist_count;

// Funciones del historial
void guardar_historial(const char *comando);
void cmd_historial(char **args);

#endif