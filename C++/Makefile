CC= 		clang++
CFLAGS= 	-g -Wall
PROBLEMS = 	problem01 problem02 problem03 problem04 problem05

all: $(foreach f, $(PROBLEMS), compile-$(f))

compile-%:
	@echo "COMPILE $*"
	@$(CC) $(CLFAGS) $*.cpp -o $*

clean: $(foreach f, $(PROBLEMS), clean-$(f))

clean-%:
	@echo "CLEAN $*"
	@rm -rfv $*

.PHONY: clean
