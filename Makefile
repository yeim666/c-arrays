# Compilador y banderas (avisos estrictos para detectar errores temprano)
CC      := gcc
CFLAGS  := -std=c11 -Wall -Wextra -pedantic -g

SRC_DIR   := src
BUILD_DIR := build

# Todos los .c dentro de src/ (incluye subcarpetas)
SOURCES := $(shell find $(SRC_DIR) -name "*.c")
# Un ejecutable en build/ por cada .c, respetando las subcarpetas
BINS    := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%,$(SOURCES))

.PHONY: all run clean help

all: $(BINS)

# Regla general: src/x/y.c -> build/x/y
$(BUILD_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

# Uso: make run P=ejemplos/01_promedio_maximo
run: $(BUILD_DIR)/$(P)
	./$(BUILD_DIR)/$(P)

clean:
	rm -rf $(BUILD_DIR)

help:
	@echo "make                      compila todo en build/"
	@echo "make run P=<ruta>         compila y ejecuta un programa"
	@echo "make clean                borra build/"
