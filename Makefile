CC=gcc
# no warnings for implicit function declaration
CFLAGS=-fno-stack-protector -m32 -Wno-implicit-function-declaration -Wno-deprecated-declarations

all: demo1 demo2

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f demo1 demo2