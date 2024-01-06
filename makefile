FOLDER := marquee-led
clean:
	echo $(FOLDER)
	rm -rf $(FOLDER)/target/

build: clean
	mkdir $(FOLDER)/target
	sdcc $(FOLDER)/main.c -o $(FOLDER)/target/
	packihx $(FOLDER)/target/main.ihx > $(FOLDER)/target/main.hex

burn : build 
	stcgal -P stc89 -p /dev/tty.wchusbserial130 $(FOLDER)/target/main.hex

.PHONY: clean build burn run