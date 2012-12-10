CC = 		ghc
CFLAGS = 	--make -O2
PROBLEMS = 	problem20 problem25 problem34 problem35 problem37

all: $(foreach f, $(PROBLEMS), compile-$(f))

compile-%:
	@echo "COMPILE $*"
	@$(CC) $(CFLAGS) $*.hs

clean: $(foreach f, $(PROBLEMS), clean-$(f))

clean-%:
	@echo "CLEAN $*"
	@rm -rfv $* $*.hi $*.o

.PHONY: clean
