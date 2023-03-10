#!/bin/bash
#create_static_lib.sh
# Compile all .c files in the current directory into object files
gcc -c *.c
#create the static library from the object files
ar rcs liball.a *.o
echo "Static libray liball.a successfully created!"
