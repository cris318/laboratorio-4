#include "matricess.h"
int main (int argc, char *argv[])	
{
	int limf[MAX],limc[MAX];
	char matrizA[MAX_FILE];
	char matrizB[MAX_FILE];
	float matA[MAX_F][MAX_C];
	float matB[MAX_F][MAX_C];
	long lon1 = 0;
	long lon2 = 0;
	int filas1=0,filas2=0,col1=0,col2=0;
	llenar_matriz(argv[2],matrizA,&lon1,matA,&limc[0],&limf[0]);
	llenar_matriz(argv[3],matrizB,&lon2,matB,&limc[1],&limf[1]);
	
	printf("\nla primer matriz que se lee es: \n%s \n",matrizA);
	printf("\nla segunda matriz que se lee es: \n%s \n",matrizB);
	int a[FIL][COL]=  //introduciomos las matrices
	{
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
		};
	
	int b[FIL][COL]=
	{
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
		};
	
	if (strcmp(argv[1],"--help")==0)
		help();
	if (strcmp(argv[1],"-v")==0)
		version();
	if (strcmp(argv[1],"-t")==0)
		tras(a,b);
	if (strcmp(argv[1],"-a")==0)
		suma(a,b);
	if (strcmp(argv[1],"-r")==0)
		resta(a,b);
	if (strcmp(argv[1],"-w")==0)
		crear_archivo();
		
}
