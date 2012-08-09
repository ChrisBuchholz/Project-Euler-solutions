CC = 		clang++
CFLAGS = 	-std=c++11 -stdlib=libc++ -g -Wall
PROBLEMS = 	problem01 problem02 problem03 problem04 problem05 problem06 \
			problem07 problem08 problem10 problem12 problem13 problem14 \
			problem16

all: $(foreach f, $(PROBLEMS), compile-$(f))

compile-%:
	@echo "COMPILE $*"
	@$(CC) $(CFLAGS) $*.cpp -o $*

clean: $(foreach f, $(PROBLEMS), clean-$(f))

clean-%:
	@echo "CLEAN $*"
	@rm -rfv $*

.PHONY: clean
