TARGET = zero

all:$(TARGET)

zero:zero.c
	gcc -Wall -O2 $< -o normal
	gcc -Wall -O2 $< -o fast -mtune=core2

clean:
	rm -rf $(TARGET) normal fast
