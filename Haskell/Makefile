CC = 		ghc
CFLAGS = 	--make
PROBLEMS = 	problem20

all: $(foreach f, $(PROBLEMS), compile-$(f))

compile-%:
	@echo "COMPILE $*"
	@$(CC) $(CFLAGS) $*.hs

clean: $(foreach f, $(PROBLEMS), clean-$(f))

clean-%:
	@echo "CLEAN $*"
	@rm -rfv $* $*.hi $*.o

.PHONY: clean
