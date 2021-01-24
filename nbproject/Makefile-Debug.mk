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
	${OBJECTDIR}/1-Promedio.o \
	${OBJECTDIR}/2-Max,Min.o \
	${OBJECTDIR}/3-Ordenamiento-Burbuja.o \
	${OBJECTDIR}/4-Ordenamiento-Optimizado.o \
	${OBJECTDIR}/Calculador-de-temperaturas.o \
	${OBJECTDIR}/Factorial_recursivo.o \
	${OBJECTDIR}/Fibonacci-while.o \
	${OBJECTDIR}/Fibonaccil_recursivo.o \
	${OBJECTDIR}/Funciones.o \
	${OBJECTDIR}/Funciones2.o \
	${OBJECTDIR}/GuardarDatos.o \
	${OBJECTDIR}/Mayor-de-3.o \
	${OBJECTDIR}/Mayor-de-4.o \
	${OBJECTDIR}/Menu-Temperaturas-while.o \
	${OBJECTDIR}/Minimo,Maximo.o \
	${OBJECTDIR}/Operacion1.o \
	${OBJECTDIR}/Operacion2.o \
	${OBJECTDIR}/Tablas-While.o \
	${OBJECTDIR}/Tarea1-Array.o \
	${OBJECTDIR}/Tarea2-Array\ .o \
	${OBJECTDIR}/Torre-de-Hanoi_recursivo.o \
	${OBJECTDIR}/abecedario.o \
	${OBJECTDIR}/c1-par,impar.o \
	${OBJECTDIR}/c10-\ menu\ de\ conversion\ de\ moneda.o \
	${OBJECTDIR}/c11-orden\ 10\ numeros.o \
	${OBJECTDIR}/c12-media\ 10\ numeros.o \
	${OBJECTDIR}/c13-\ menu\ 100\ ascendente\ o\ descendente.o \
	${OBJECTDIR}/c14-menu\ de\ suma\ y\ promedio.o \
	${OBJECTDIR}/c15-sum,rest,mult,div\ 10\ numeros.o \
	${OBJECTDIR}/c16-\ tablas\ de\ multiplicar.o \
	${OBJECTDIR}/c17-\ calcula\ bocales\ de\ una\ frase.o \
	${OBJECTDIR}/c18-\ area\ de\ triangulo.o \
	${OBJECTDIR}/c19-\ mayor\ de\ 3.o \
	${OBJECTDIR}/c2-mayor,menor,2numeros.o \
	${OBJECTDIR}/c20-\ cubo\ de\ 5\ numeros.o \
	${OBJECTDIR}/c21-cifra\ y\ posición.o \
	${OBJECTDIR}/c22-menu\ de\ funciones\ matematicas-fail.o \
	${OBJECTDIR}/c22-menu\ de\ funciones\ matematicas.o \
	${OBJECTDIR}/c23-direccion\ de\ una\ variable.o \
	${OBJECTDIR}/c24-suma\ de\ dos\ numeros-direccion.o \
	${OBJECTDIR}/c25-valores\ de\ arreglo\ con\ punteros.o \
	${OBJECTDIR}/c3-mayor,menor\ de\ edad.o \
	${OBJECTDIR}/c4-mayor\ 4\ numeros.o \
	${OBJECTDIR}/c5-sueldo\ de\ trabajador.o \
	${OBJECTDIR}/c6-numero\ negativo\ o\ positivo\ .o \
	${OBJECTDIR}/c7-omitir\ numero.o \
	${OBJECTDIR}/c8-dia\ de\ la\ semana.o \
	${OBJECTDIR}/c9-calificacion\ .o \
	${OBJECTDIR}/cadenasyarrays.o \
	${OBJECTDIR}/cadenasyarrays2.o \
	${OBJECTDIR}/funciones\ en\ c.o \
	${OBJECTDIR}/longitud\ de\ una\ cadena\ de\ texto.o \
	${OBJECTDIR}/menu-temperaturas-void.o \
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

${OBJECTDIR}/1-Promedio.o: 1-Promedio.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/1-Promedio.o 1-Promedio.c

${OBJECTDIR}/2-Max,Min.o: 2-Max,Min.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/2-Max,Min.o 2-Max,Min.c

${OBJECTDIR}/3-Ordenamiento-Burbuja.o: 3-Ordenamiento-Burbuja.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/3-Ordenamiento-Burbuja.o 3-Ordenamiento-Burbuja.c

${OBJECTDIR}/4-Ordenamiento-Optimizado.o: 4-Ordenamiento-Optimizado.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/4-Ordenamiento-Optimizado.o 4-Ordenamiento-Optimizado.c

${OBJECTDIR}/Calculador-de-temperaturas.o: Calculador-de-temperaturas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Calculador-de-temperaturas.o Calculador-de-temperaturas.c

${OBJECTDIR}/Factorial_recursivo.o: Factorial_recursivo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Factorial_recursivo.o Factorial_recursivo.c

${OBJECTDIR}/Fibonacci-while.o: Fibonacci-while.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fibonacci-while.o Fibonacci-while.c

${OBJECTDIR}/Fibonaccil_recursivo.o: Fibonaccil_recursivo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fibonaccil_recursivo.o Fibonaccil_recursivo.c

${OBJECTDIR}/Funciones.o: Funciones.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funciones.o Funciones.c

${OBJECTDIR}/Funciones2.o: Funciones2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funciones2.o Funciones2.c

${OBJECTDIR}/GuardarDatos.o: GuardarDatos.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GuardarDatos.o GuardarDatos.c

${OBJECTDIR}/Mayor-de-3.o: Mayor-de-3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Mayor-de-3.o Mayor-de-3.c

${OBJECTDIR}/Mayor-de-4.o: Mayor-de-4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Mayor-de-4.o Mayor-de-4.c

${OBJECTDIR}/Menu-Temperaturas-while.o: Menu-Temperaturas-while.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Menu-Temperaturas-while.o Menu-Temperaturas-while.c

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

${OBJECTDIR}/Torre-de-Hanoi_recursivo.o: Torre-de-Hanoi_recursivo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Torre-de-Hanoi_recursivo.o Torre-de-Hanoi_recursivo.c

${OBJECTDIR}/abecedario.o: abecedario.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/abecedario.o abecedario.c

${OBJECTDIR}/c1-par,impar.o: c1-par,impar.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c1-par,impar.o c1-par,impar.c

.NO_PARALLEL:${OBJECTDIR}/c10-\ menu\ de\ conversion\ de\ moneda.o
${OBJECTDIR}/c10-\ menu\ de\ conversion\ de\ moneda.o: c10-\ menu\ de\ conversion\ de\ moneda.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c10-\ menu\ de\ conversion\ de\ moneda.o c10-\ menu\ de\ conversion\ de\ moneda.c

.NO_PARALLEL:${OBJECTDIR}/c11-orden\ 10\ numeros.o
${OBJECTDIR}/c11-orden\ 10\ numeros.o: c11-orden\ 10\ numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c11-orden\ 10\ numeros.o c11-orden\ 10\ numeros.c

.NO_PARALLEL:${OBJECTDIR}/c12-media\ 10\ numeros.o
${OBJECTDIR}/c12-media\ 10\ numeros.o: c12-media\ 10\ numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c12-media\ 10\ numeros.o c12-media\ 10\ numeros.c

.NO_PARALLEL:${OBJECTDIR}/c13-\ menu\ 100\ ascendente\ o\ descendente.o
${OBJECTDIR}/c13-\ menu\ 100\ ascendente\ o\ descendente.o: c13-\ menu\ 100\ ascendente\ o\ descendente.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c13-\ menu\ 100\ ascendente\ o\ descendente.o c13-\ menu\ 100\ ascendente\ o\ descendente.c

.NO_PARALLEL:${OBJECTDIR}/c14-menu\ de\ suma\ y\ promedio.o
${OBJECTDIR}/c14-menu\ de\ suma\ y\ promedio.o: c14-menu\ de\ suma\ y\ promedio.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c14-menu\ de\ suma\ y\ promedio.o c14-menu\ de\ suma\ y\ promedio.c

.NO_PARALLEL:${OBJECTDIR}/c15-sum,rest,mult,div\ 10\ numeros.o
${OBJECTDIR}/c15-sum,rest,mult,div\ 10\ numeros.o: c15-sum,rest,mult,div\ 10\ numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c15-sum,rest,mult,div\ 10\ numeros.o c15-sum,rest,mult,div\ 10\ numeros.c

.NO_PARALLEL:${OBJECTDIR}/c16-\ tablas\ de\ multiplicar.o
${OBJECTDIR}/c16-\ tablas\ de\ multiplicar.o: c16-\ tablas\ de\ multiplicar.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c16-\ tablas\ de\ multiplicar.o c16-\ tablas\ de\ multiplicar.c

.NO_PARALLEL:${OBJECTDIR}/c17-\ calcula\ bocales\ de\ una\ frase.o
${OBJECTDIR}/c17-\ calcula\ bocales\ de\ una\ frase.o: c17-\ calcula\ bocales\ de\ una\ frase.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c17-\ calcula\ bocales\ de\ una\ frase.o c17-\ calcula\ bocales\ de\ una\ frase.c

.NO_PARALLEL:${OBJECTDIR}/c18-\ area\ de\ triangulo.o
${OBJECTDIR}/c18-\ area\ de\ triangulo.o: c18-\ area\ de\ triangulo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c18-\ area\ de\ triangulo.o c18-\ area\ de\ triangulo.c

.NO_PARALLEL:${OBJECTDIR}/c19-\ mayor\ de\ 3.o
${OBJECTDIR}/c19-\ mayor\ de\ 3.o: c19-\ mayor\ de\ 3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c19-\ mayor\ de\ 3.o c19-\ mayor\ de\ 3.c

${OBJECTDIR}/c2-mayor,menor,2numeros.o: c2-mayor,menor,2numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c2-mayor,menor,2numeros.o c2-mayor,menor,2numeros.c

.NO_PARALLEL:${OBJECTDIR}/c20-\ cubo\ de\ 5\ numeros.o
${OBJECTDIR}/c20-\ cubo\ de\ 5\ numeros.o: c20-\ cubo\ de\ 5\ numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c20-\ cubo\ de\ 5\ numeros.o c20-\ cubo\ de\ 5\ numeros.c

.NO_PARALLEL:${OBJECTDIR}/c21-cifra\ y\ posición.o
${OBJECTDIR}/c21-cifra\ y\ posición.o: c21-cifra\ y\ posición.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c21-cifra\ y\ posición.o c21-cifra\ y\ posición.c

.NO_PARALLEL:${OBJECTDIR}/c22-menu\ de\ funciones\ matematicas-fail.o
${OBJECTDIR}/c22-menu\ de\ funciones\ matematicas-fail.o: c22-menu\ de\ funciones\ matematicas-fail.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c22-menu\ de\ funciones\ matematicas-fail.o c22-menu\ de\ funciones\ matematicas-fail.c

.NO_PARALLEL:${OBJECTDIR}/c22-menu\ de\ funciones\ matematicas.o
${OBJECTDIR}/c22-menu\ de\ funciones\ matematicas.o: c22-menu\ de\ funciones\ matematicas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c22-menu\ de\ funciones\ matematicas.o c22-menu\ de\ funciones\ matematicas.c

.NO_PARALLEL:${OBJECTDIR}/c23-direccion\ de\ una\ variable.o
${OBJECTDIR}/c23-direccion\ de\ una\ variable.o: c23-direccion\ de\ una\ variable.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c23-direccion\ de\ una\ variable.o c23-direccion\ de\ una\ variable.c

.NO_PARALLEL:${OBJECTDIR}/c24-suma\ de\ dos\ numeros-direccion.o
${OBJECTDIR}/c24-suma\ de\ dos\ numeros-direccion.o: c24-suma\ de\ dos\ numeros-direccion.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c24-suma\ de\ dos\ numeros-direccion.o c24-suma\ de\ dos\ numeros-direccion.c

.NO_PARALLEL:${OBJECTDIR}/c25-valores\ de\ arreglo\ con\ punteros.o
${OBJECTDIR}/c25-valores\ de\ arreglo\ con\ punteros.o: c25-valores\ de\ arreglo\ con\ punteros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c25-valores\ de\ arreglo\ con\ punteros.o c25-valores\ de\ arreglo\ con\ punteros.c

.NO_PARALLEL:${OBJECTDIR}/c3-mayor,menor\ de\ edad.o
${OBJECTDIR}/c3-mayor,menor\ de\ edad.o: c3-mayor,menor\ de\ edad.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c3-mayor,menor\ de\ edad.o c3-mayor,menor\ de\ edad.c

.NO_PARALLEL:${OBJECTDIR}/c4-mayor\ 4\ numeros.o
${OBJECTDIR}/c4-mayor\ 4\ numeros.o: c4-mayor\ 4\ numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c4-mayor\ 4\ numeros.o c4-mayor\ 4\ numeros.c

.NO_PARALLEL:${OBJECTDIR}/c5-sueldo\ de\ trabajador.o
${OBJECTDIR}/c5-sueldo\ de\ trabajador.o: c5-sueldo\ de\ trabajador.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c5-sueldo\ de\ trabajador.o c5-sueldo\ de\ trabajador.c

.NO_PARALLEL:${OBJECTDIR}/c6-numero\ negativo\ o\ positivo\ .o
${OBJECTDIR}/c6-numero\ negativo\ o\ positivo\ .o: c6-numero\ negativo\ o\ positivo\ .c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c6-numero\ negativo\ o\ positivo\ .o c6-numero\ negativo\ o\ positivo\ .c

.NO_PARALLEL:${OBJECTDIR}/c7-omitir\ numero.o
${OBJECTDIR}/c7-omitir\ numero.o: c7-omitir\ numero.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c7-omitir\ numero.o c7-omitir\ numero.c

.NO_PARALLEL:${OBJECTDIR}/c8-dia\ de\ la\ semana.o
${OBJECTDIR}/c8-dia\ de\ la\ semana.o: c8-dia\ de\ la\ semana.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c8-dia\ de\ la\ semana.o c8-dia\ de\ la\ semana.c

.NO_PARALLEL:${OBJECTDIR}/c9-calificacion\ .o
${OBJECTDIR}/c9-calificacion\ .o: c9-calificacion\ .c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/c9-calificacion\ .o c9-calificacion\ .c

${OBJECTDIR}/cadenasyarrays.o: cadenasyarrays.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cadenasyarrays.o cadenasyarrays.c

${OBJECTDIR}/cadenasyarrays2.o: cadenasyarrays2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cadenasyarrays2.o cadenasyarrays2.c

.NO_PARALLEL:${OBJECTDIR}/funciones\ en\ c.o
${OBJECTDIR}/funciones\ en\ c.o: funciones\ en\ c.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funciones\ en\ c.o funciones\ en\ c.c

${OBJECTDIR}/funciones.h.gch: funciones.h
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o "$@" funciones.h

${OBJECTDIR}/funciones2.h.gch: funciones2.h
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o "$@" funciones2.h

.NO_PARALLEL:${OBJECTDIR}/longitud\ de\ una\ cadena\ de\ texto.o
${OBJECTDIR}/longitud\ de\ una\ cadena\ de\ texto.o: longitud\ de\ una\ cadena\ de\ texto.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/longitud\ de\ una\ cadena\ de\ texto.o longitud\ de\ una\ cadena\ de\ texto.c

${OBJECTDIR}/menu-temperaturas-void.o: menu-temperaturas-void.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/menu-temperaturas-void.o menu-temperaturas-void.c

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
