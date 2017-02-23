#! /bin/make -f
# Makefile to build C Preprocessed CSS
#
# Author: Stefan Misik (mail@stefanmisik.eu)

# Tools
CC_PRE	= $(CC) -E


## Parameters
# C preprocessor sources
SRC         = main.css.c


################################################################################
CSS    = $(SRC:.css.c=.css)
	

################################################################################


all: $(SKEL_DIR) $(CSS)

%.css: %.css.c
	$(CC_PRE) -x c -P $< > $@

clean:
	$(RM) $(CSS)

.PHONY: all clean