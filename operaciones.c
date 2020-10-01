#include "matricess.h"
void help(void)
{
		printf("-v---mostrara la informacion de autores\n");
		printf("-a---realizara la suma de la matrices\n");
		printf("-r---realizara la resta de las matrices\n");
		printf("-w---guardara el resultado de la operacion\n");
		
}
void version(void)
{
	printf("\naqui vamos a mostrar la informaion y demas\n");
	printf("version 1.0\n");
	printf("trabajadores Julian Ballesteros y Cristian Rincon\n");
	printf("la fecha de actualizacion es: 01/10/2020\n");
	
	
}
void tras(int a[FIL][COL],int b[FIL][COL])	
{	printf("\n acontinuacion vemos la matriz transpuesta de las matrices\n");
	char con_fila = 0 , con_cola = 0; // introduciomos las variables que van a cambiar con la funcion for
	char con_filb = 0 , con_colb = 0;
	for (con_fila=0; con_fila< FIL; con_fila++) // con la funcion for podemos leer la matriz e imprimir caracter por caracter 
		{
			for (con_cola=0;con_cola<COL ;con_cola++)
			{
				printf("%d;",a[con_cola][con_fila]); // dado que es la transpuesta se imprimira por columnas para que se vea el efecto de traspuesta
			}
		printf("\n");
		}
		printf("\n\n");
	for (con_filb=0; con_filb < FIL; con_filb++)
		{
			for (con_colb=0;con_colb<COL ;con_colb++)
			{
				printf("%d;",b[con_colb][con_filb]);
			}
		printf("\n");
		}
		printf("\n\n");
} 

 
void suma(int a[FIL][COL],int b[FIL][COL])
{
	printf("\nacontinuacion mostramos la suma de las matrices\n");
	char con_fila = 0 , con_cola = 0;
	
	for (con_fila=0; con_fila< FIL; con_fila++) //con la funcion del for podemos pasar por las filas y columnas donde enseguida hacemos la respectiva suma de las matrices
		{
			for (con_cola=0;con_cola<COL ;con_cola++)
			{
				
				printf("%d;",a[con_fila][con_cola]+b[con_fila][con_cola]);
			}
		printf("\n");
		}
		printf("\n\n");

	
}
void resta(int a[FIL][COL],int b[FIL][COL])
{
	printf("\nacontinuacion mostramos la suma de las matrices\n");
	char con_fila = 0 , con_cola = 0;
	for (con_fila=0; con_fila< FIL; con_fila++)
		{
			for (con_cola=0;con_cola<COL ;con_cola++)
			{
				printf("%d;",a[con_fila][con_cola]-b[con_fila][con_cola]);
			}
		printf("\n");
		}
		printf("\n\n");
		
}
void crear_archivo(void)
{
	printf("\naqui se va a crear el archivo\n");
	
}


void llenar_matriz(char *argv1,char matriz[MAX_FILE],long *lon,float mat[MAX_F][MAX_C],int *limc,int *limf)
{
	FILE *leer_matriz;
	size_t result = 0;
	
	char *dir,*dir1,*dir2,*dir3,cad1[MAX_FILE],cad2[MAX_FILE];
	int con=0,com=0,con1=0,longi1=0,longi2=0,longi3=0,longi4=0,longi5=0;
	
	
	
	
	leer_matriz=fopen(argv1,"r");//aqui abrimos el archivo csv
	fseek(leer_matriz,0,SEEK_END);//se mueve el puntero a la parte final de archivo csv
	*lon=ftell(leer_matriz);//aqui se obtiene la longitud del archivo csv
	rewind(leer_matriz);//volver el puntero a su posicion inicial del archivo csv
	fread(matriz,1,*lon,leer_matriz);//copiar lo del archivo csv a una cadena de caracteres
	fclose(leer_matriz);//cerrar el archivo csv
	//===========================================================================================================
/* 	
	*limc=1;
	*limf=1;
	dir=matriz;//obtener la direccion inicial de la cadena de caracteres(buf)
	dir1=strchr(matriz,';');//obtener la direccion de ese caracter dentro de la cadena(buf)
	dir2=strchr(matriz,'\r');//obtener la direccion de ese caracter dentro de la cadena(buf)
	dir3=strchr(matriz,'\n');//obtener la direccion de ese caracter dentro de la cadena(buf)
	con=strlen(matriz);//aqui se tiene la longitud total de la cadena de caracteres(buf)
	longi2=(dir2-dir);//aqui se obtiene la longitud desde el inicio de la cadena hasta ese caracter(buf)
	longi1=(dir1-dir);//aqui se obtiene la longitud desde el inicio de la cadena hasta ese caracter(buf)
	longi5=(dir3-dir);//aqui se obtiene la longitud desde el inicio de la cadena hasta ese caracter(buf)
	strncpy(cad1,matriz,longi1);//aqui se copia del buf lo que realmente se necesita
	mat[con1][com]=atof(cad1);//aqui se convierte ese caracter en un numero float
	com=com+1;//aqui se cambia la posicion de la columna de la matriz donde se va a guardar
	longi1=longi1+1;//para cambiar la posicion para poder mirar dentro del buf 
	longi3=longi1;//se va a utilizar para ver que tanto nos movemos dentro del buf
	while(longi3<con)//ciclo1
	{
		while(longi3<longi2)//ciclo2 
		{
			dir1=strchr(matriz+longi1,';');//obtener la direccion de ese caracter dentro de la cadena(buf)
			if(dir1 == NULL)
			{
				longi4=con;
			}
			else
			{	
				longi4=(dir1-dir);//aqui se obtiene la longitud desde el inicio de la cadena hasta ese caracter(buf)
			}			
			if(longi4<longi2)//condicion 1 para poder copiar lo que se necesita
			{
				strncpy(cad1,matriz+longi1,longi4);//aqui se copia del buf lo que realmente se necesita
				mat[con1][com]=atof(cad1);//aqui se convierte ese caracter en un numero float
				com=com+1;//aqui se cambia la posicion de la columna de la matriz donde se va a guardar
				longi1=longi4+1;//para cambiar la posicion para poder mirar dentro del buf
				longi3=longi1;//se va a utilizar para ver que tanto nos movemos dentro del buf
			}
			else//condicion 2 para poder copiar lo que se necesita
			{	
				strncpy(cad1,matriz+longi1,longi2);//aqui se copia del buf lo que realmente se necesita
				mat[con1][com]=atof(cad1);//aqui se convierte ese caracter en un numero float
				com=com+1;//aqui se cambia la posicion de la columna de la matriz donde se va a guardar
				longi1=longi2+1;//para cambiar la posicion para poder mirar dentro del buf
				longi3=longi4;//se va a utilizar para ver que tanto nos movemos dentro del buf
			}	
		}
		*limc=com;//aqui se guarda el numero de columnas que se va a obtener del ciclo2
		if(longi3>longi2)//condicion 1 para cambiar la fila de la matriz
		{
			dir3=strchr(matriz+longi1,'\n');//obtener la direccion de ese caracter dentro de la cadena(buf) 
			longi5=(dir3-dir);//aqui se obtiene la longitud desde el inicio de la cadena hasta ese caracter(buf)
			dir2=strchr(matriz+longi1,'\r');//obtener la direccion de ese caracter dentro de la cadena(buf)
			longi2=(dir2-dir);//aqui se obtiene la longitud desde el inicio de la cadena hasta ese caracter(buf)	
			com=0;//se reinicia el conteo de el numero de las columnas de la matriz
			con1=con1+1;//se usa para incrementar el numero de filas que se va a obtener del buf
			*limf=con1;//aqui se guarda el numero de filas que se va a obtener al entrar en la condicion 1
		}	
	} */
	//memset(matriz,0,MAX_FILE);// se va a util izar para inicializar el buf con otro contenido
}	


