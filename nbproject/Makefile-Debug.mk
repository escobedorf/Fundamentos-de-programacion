#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Fibonacci-while.o \
	${OBJECTDIR}/Max,Min-2.o \
	${OBJECTDIR}/Mayor-de-3.o \
	${OBJECTDIR}/Mayor-de-4.o \
	${OBJECTDIR}/Minimo,Maximo.o \
	${OBJECTDIR}/Operacion1.o \
	${OBJECTDIR}/Operacion2.o \
	${OBJECTDIR}/Tablas-While.o \
	${OBJECTDIR}/Tarea1-Array.o \
	${OBJECTDIR}/Tarea2-Array\ .o \
	${OBJECTDIR}/tablas-for-anidado.o \
	${OBJECTDIR}/tablas-while-anidado.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Fibonacci-while.o: Fibonacci-while.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fibonacci-while.o Fibonacci-while.c

${OBJECTDIR}/Max,Min-2.o: Max,Min-2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Max,Min-2.o Max,Min-2.c

${OBJECTDIR}/Mayor-de-3.o: Mayor-de-3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Mayor-de-3.o Mayor-de-3.c

${OBJECTDIR}/Mayor-de-4.o: Mayor-de-4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Mayor-de-4.o Mayor-de-4.c

${OBJECTDIR}/Minimo,Maximo.o: Minimo,Maximo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Minimo,Maximo.o Minimo,Maximo.c

${OBJECTDIR}/Operacion1.o: Operacion1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Operacion1.o Operacion1.c

${OBJECTDIR}/Operacion2.o: Operacion2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Operacion2.o Operacion2.c

${OBJECTDIR}/Tablas-While.o: Tablas-While.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tablas-While.o Tablas-While.c

${OBJECTDIR}/Tarea1-Array.o: Tarea1-Array.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tarea1-Array.o Tarea1-Array.c

.NO_PARALLEL:${OBJECTDIR}/Tarea2-Array\ .o
${OBJECTDIR}/Tarea2-Array\ .o: Tarea2-Array\ .c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tarea2-Array\ .o Tarea2-Array\ .c

${OBJECTDIR}/tablas-for-anidado.o: tablas-for-anidado.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tablas-for-anidado.o tablas-for-anidado.c

${OBJECTDIR}/tablas-while-anidado.o: tablas-while-anidado.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tablas-while-anidado.o tablas-while-anidado.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
