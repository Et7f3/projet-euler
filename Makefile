SRC=$(wildcard src/*.c)

all: $(SRC) $(SRC:src/exo%.c=bin/exo%.exe)
	@echo tout est fini
bin/exo%.exe: src/exo%.c src/outils.c
		$(CC) $^ -o $@ -DNOM_DU_LOGICIEL=\"$@\" $(CFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
	$(RM) bin/*.exe

exo% exo%.c ex% ex%.c:
	cp src/base.c src/exo$*.c