#ifndef MATRICESS_H

	#define MATRICESS_H
	
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#define MAX_FILE 1000
	#define MAX_F 100
	#define MAX_C 100
	#define MAX 2
	#define FIL 4
	#define COL 4
	//se definen los prototipos
	void read_m(char *dir, float m2[MAX_FILE][MAX_FILE],int *nf,int *nc);
	void llenar_matriz(char *argv1,char matriz[MAX_FILE],long *lon,float mat[MAX_F][MAX_C],int *limc,int *limf);
	void help(void);
	void version(void);
	void crear_archivo(void);
	void llenar_matrices(char mA[][MAX_FILE], char mB[][MAX_FILE],char matrizA[],char matrizB[],char long1, char long2);
	void tras(int a[FIL][COL],int b[FIL][COL]);
	void suma(int a[FIL][COL],int b[FIL][COL]);
	void resta(int a[FIL][COL],int b[FIL][COL]);

#endif