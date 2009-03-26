//Justin Murray
//PIDlib header

#include "types.h"

int bumped(api_HANDLES_t *);

double Move(api_HANDLES_t *, FilterHandles_t *, pidHandles_t *, double, double);

void * mapRobot(void *);

void scaleCoefs(api_HANDLES_t *, pidData_t *, double);

//Initializes a pidData_t struct see PIDlib.c for implementation details
pidData_t * initializePID(int);
