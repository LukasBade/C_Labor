cmake_minimum_required(VERSION 3.10)
project(Labor04_Aufgabe_Module C) # so wird die ausführbare Datei auch heißen

# Alle .c-Dateien rekursiv finden und ins Projekt aufnehmen
file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/*.c")

# Executable aus den Quellcode-Dateien erzeugen
add_executable(${PROJECT_NAME} ${SOURCES})

# (optional) Compiler-Warnungen aktivieren
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -g -O0)
