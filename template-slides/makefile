SHELL=/bin/bash

.PHONY: all clean clean_aux

all:
	$(MAKE) clean
	$(MAKE) main.pdf
	$(MAKE) clean_aux

main.pdf: main.tex main.bib
	pdflatex main.tex
	biber main
	pdflatex main.tex
	pdflatex main.tex

clean_aux:
	rm -f main.aux main.bbl main.blg main.out main.dvi main.ps main.log main.spl main.snm main.toc main.nav main.run.xml main.bcf main.vrb main.fls main.fdb_latexmk

clean: clean_aux
	rm -f main.pdf
