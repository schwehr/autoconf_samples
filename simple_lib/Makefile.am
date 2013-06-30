ACLOCAL_AMFLAGS = -I m4

include_HEADERS = simple.h

lib_LTLIBRARIES = libsimple.la

libsimple_la_LDFLAGS = -no-undefined -version-info 0:0:0
libsimple_la_SOURCES = simple.cc

bin_PROGRAMS = simple_prog
simple_prog_SOURCES = simple_prog.cc
simple_prog_LDADD = simple.lo

