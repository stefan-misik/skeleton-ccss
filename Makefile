#! /bin/make -f
# Makefile to build C Preprocessed CSS
#
# Author: Stefan Misik (mail@stefanmisik.eu)

## Parameters
# C preprocessor sources
SRC         = skeleton.css.c normalize.css.c

################################################################################
CSS    = $(SRC:.css.c=.css)
DEPS   = $(SRC:.css.c=.d)
	

################################################################################


all: $(SKEL_DIR) $(CSS)

%.css: %.css.c
	$(CC) -E -x c -P $< > $@

%.d: %.css.c
	$(CC) -MM -x c -MF $@ -MT $(<:.c=) $<

clean:
	$(RM) $(CSS) $(DEPS)

.PHONY: all clean

# Pull in dependency info, if not cleaning
ifneq ($(MAKECMDGOALS),clean)
-include $(DEPS)
endif