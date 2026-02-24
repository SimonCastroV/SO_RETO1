#include <string.h>
#include "history.h"

char historial[HIST_SIZE][MAX_CMD_LEN];
int hist_count = 0;

void guardar_historial(const char *comando)
{
    int pos = hist_count % HIST_SIZE;

    strncpy(historial[pos], comando, MAX_CMD_LEN - 1);
    historial[pos][MAX_CMD_LEN - 1] = '\0';

    hist_count++;
}