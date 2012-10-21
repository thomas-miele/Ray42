#############################################################################
# Makefile for building: Ray42
# Generated by qmake (2.01a) (Qt 4.7.3) on: Sun Oct 21 22:14:36 2012
# Project:  Ray42.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -o Makefile Ray42.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fstack-protector --param=ssp-buffer-size=4 -m64 -mtune=generic -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fstack-protector --param=ssp-buffer-size=4 -m64 -mtune=generic -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/lib64/qt4/mkspecs/linux-g++ -I. -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include -I. -Isrc/header -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)   -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = 
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = src/main.cpp \
		src/Ray.cpp \
		src/RayStream.cpp \
		src/RCamera.cpp \
		src/RCylinder.cpp \
		src/RObject.cpp \
		src/RPlane.cpp \
		src/RSphere.cpp 
OBJECTS       = main.o \
		Ray.o \
		RayStream.o \
		RCamera.o \
		RCylinder.o \
		RObject.o \
		RPlane.o \
		RSphere.o
DIST          = /usr/lib64/qt4/mkspecs/common/g++-multilib.conf \
		/usr/lib64/qt4/mkspecs/common/unix.conf \
		/usr/lib64/qt4/mkspecs/common/linux.conf \
		/usr/lib64/qt4/mkspecs/qconfig.pri \
		/usr/lib64/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/lib64/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/lib64/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt4/mkspecs/features/qt_config.prf \
		/usr/lib64/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt4/mkspecs/features/default_pre.prf \
		/usr/lib64/qt4/mkspecs/features/release.prf \
		/usr/lib64/qt4/mkspecs/features/default_post.prf \
		/usr/lib64/qt4/mkspecs/features/warn_on.prf \
		/usr/lib64/qt4/mkspecs/features/qt.prf \
		/usr/lib64/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib64/qt4/mkspecs/features/moc.prf \
		/usr/lib64/qt4/mkspecs/features/resources.prf \
		/usr/lib64/qt4/mkspecs/features/uic.prf \
		/usr/lib64/qt4/mkspecs/features/yacc.prf \
		/usr/lib64/qt4/mkspecs/features/lex.prf \
		/usr/lib64/qt4/mkspecs/features/include_source_dir.prf \
		Ray42.pro
QMAKE_TARGET  = Ray42
DESTDIR       = 
TARGET        = Ray42

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Ray42.pro  /usr/lib64/qt4/mkspecs/linux-g++/qmake.conf /usr/lib64/qt4/mkspecs/common/g++-multilib.conf \
		/usr/lib64/qt4/mkspecs/common/unix.conf \
		/usr/lib64/qt4/mkspecs/common/linux.conf \
		/usr/lib64/qt4/mkspecs/qconfig.pri \
		/usr/lib64/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/lib64/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/lib64/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt4/mkspecs/features/qt_config.prf \
		/usr/lib64/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt4/mkspecs/features/default_pre.prf \
		/usr/lib64/qt4/mkspecs/features/release.prf \
		/usr/lib64/qt4/mkspecs/features/default_post.prf \
		/usr/lib64/qt4/mkspecs/features/warn_on.prf \
		/usr/lib64/qt4/mkspecs/features/qt.prf \
		/usr/lib64/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib64/qt4/mkspecs/features/moc.prf \
		/usr/lib64/qt4/mkspecs/features/resources.prf \
		/usr/lib64/qt4/mkspecs/features/uic.prf \
		/usr/lib64/qt4/mkspecs/features/yacc.prf \
		/usr/lib64/qt4/mkspecs/features/lex.prf \
		/usr/lib64/qt4/mkspecs/features/include_source_dir.prf
	$(QMAKE) -o Makefile Ray42.pro
/usr/lib64/qt4/mkspecs/common/g++-multilib.conf:
/usr/lib64/qt4/mkspecs/common/unix.conf:
/usr/lib64/qt4/mkspecs/common/linux.conf:
/usr/lib64/qt4/mkspecs/qconfig.pri:
/usr/lib64/qt4/mkspecs/modules/qt_phonon.pri:
/usr/lib64/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/lib64/qt4/mkspecs/features/qt_functions.prf:
/usr/lib64/qt4/mkspecs/features/qt_config.prf:
/usr/lib64/qt4/mkspecs/features/exclusive_builds.prf:
/usr/lib64/qt4/mkspecs/features/default_pre.prf:
/usr/lib64/qt4/mkspecs/features/release.prf:
/usr/lib64/qt4/mkspecs/features/default_post.prf:
/usr/lib64/qt4/mkspecs/features/warn_on.prf:
/usr/lib64/qt4/mkspecs/features/qt.prf:
/usr/lib64/qt4/mkspecs/features/unix/thread.prf:
/usr/lib64/qt4/mkspecs/features/moc.prf:
/usr/lib64/qt4/mkspecs/features/resources.prf:
/usr/lib64/qt4/mkspecs/features/uic.prf:
/usr/lib64/qt4/mkspecs/features/yacc.prf:
/usr/lib64/qt4/mkspecs/features/lex.prf:
/usr/lib64/qt4/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -o Makefile Ray42.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Ray421.0.0 || $(MKDIR) .tmp/Ray421.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Ray421.0.0/ && $(COPY_FILE) --parents src/header/QtInclude.hpp src/header/Ray.hpp src/header/RayInclude.hpp src/header/RayStream.hpp src/header/RCamera.hpp src/header/RCylinder.hpp src/header/RObject.hpp src/header/RPlane.hpp src/header/RSphere.hpp .tmp/Ray421.0.0/ && $(COPY_FILE) --parents src/main.cpp src/Ray.cpp src/RayStream.cpp src/RCamera.cpp src/RCylinder.cpp src/RObject.cpp src/RPlane.cpp src/RSphere.cpp .tmp/Ray421.0.0/ && (cd `dirname .tmp/Ray421.0.0` && $(TAR) Ray421.0.0.tar Ray421.0.0 && $(COMPRESS) Ray421.0.0.tar) && $(MOVE) `dirname .tmp/Ray421.0.0`/Ray421.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Ray421.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

main.o: src/main.cpp src/header/RayStream.hpp \
		src/header/Ray.hpp \
		src/header/RCamera.hpp \
		src/header/RObject.hpp \
		src/header/RSphere.hpp \
		src/header/RCylinder.hpp \
		src/header/RPlane.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o src/main.cpp

Ray.o: src/Ray.cpp src/header/Ray.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Ray.o src/Ray.cpp

RayStream.o: src/RayStream.cpp src/header/RayStream.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RayStream.o src/RayStream.cpp

RCamera.o: src/RCamera.cpp src/header/RCamera.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RCamera.o src/RCamera.cpp

RCylinder.o: src/RCylinder.cpp src/header/RCylinder.hpp \
		src/header/RObject.hpp \
		src/header/Ray.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RCylinder.o src/RCylinder.cpp

RObject.o: src/RObject.cpp src/header/RObject.hpp \
		src/header/Ray.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RObject.o src/RObject.cpp

RPlane.o: src/RPlane.cpp src/header/RPlane.hpp \
		src/header/RObject.hpp \
		src/header/Ray.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RPlane.o src/RPlane.cpp

RSphere.o: src/RSphere.cpp src/header/RSphere.hpp \
		src/header/RObject.hpp \
		src/header/Ray.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RSphere.o src/RSphere.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

