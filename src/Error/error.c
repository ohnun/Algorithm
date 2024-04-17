#include <stdio.h>
#include <stdlib.h>
#include "error.h"

void FatalError( const char* message ){
    fprintf( stderr, "FatalError: %s\n", message );
    exit( EXIT_FAILURE );
}

void Error( const char* message ){
    fprintf( stderr, "Error: %s\n", message );
    exit( EXIT_FAILURE );
}