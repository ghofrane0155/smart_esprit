## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = resto_ghof

resto_ghof_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
fonction.c   fichier.h \
user.c user.h\
reclamation.c reclamation.h\
yes.c yes.h \
fonctionr.c  fonctionr.h\
etudiant.c etudiant.h

resto_ghof_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

