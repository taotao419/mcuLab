SOURCE:= $(shell find ./ -name "*.c")

clean:
	rm -rf target/

build: clean
	mkdir target
	@for var in $(SOURCE); do \
		echo build $$var; \
		sdcc -c $$var -o target/; \
	done
	sdcc target/*.rel -o target/main.ihx
	packihx target/main.ihx > target/main.hex

burn : build 
	stcgal -P stc89 -p /dev/tty.wchusbserial130 target/main.hex