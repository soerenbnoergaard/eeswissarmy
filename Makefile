all: eeswissarmy

eeswissarmy : eeswissarmy.c
	gcc eeswissarmy.c -o eeswissarmy -Wall -lm
