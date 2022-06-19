#include<stdio.h>
typedef struct Matrix{
	int unit[50][50];
	int row;
	int col;
}matrix;
int getData(char path[],matrix* M){
	FILE* f=fopen(path,"r");
	if (f!=NULL){
	printf("Read file %s successfully!\n",path);
		fscanf(f,"%d",&(M->row));
		fscanf(f,"%d",&(M->col));
		if(M->row!=0 && M->col!=0){
			for (int i=0;i<M->row;i++)
				for (int j=0;j<M->col;j++) 
					fscanf(f,"%d",&(M->unit[i][j]));
		}
		else{
			printf("The file %s is empty!\n",path);
			printf("**********************************************************\n");
			fclose(f);return 0;
		}
	}
	else {
		printf("File %s not found!\n",path);
		printf("**********************************************************\n");
		fclose(f);return 0;
	}
	printf("**********************************************************\n");
	fclose(f);

	return 1;
}
void displayMatrix(matrix M){
	for (int i=0;i<M.row;i++){
		for (int j=0;j<M.col;j++)  
			printf("%3.1d ",M.unit[i][j]);	
		printf("\n");	
	}
	printf("**********************************************************\n");
}
void printMatrix(char path[],matrix M){
	FILE* f=fopen(path,"a");
	printf("Write file %s successfully!\n",path);
	fprintf(f,"%d %d\n",M.row,M.col);
	for (int i=0;i<M.row;i++){
		for (int j=0;j<M.col;j++)  
			fprintf(f,"%3.1d ",M.unit[i][j]);	
		fprintf(f,"\n");	
	}
	printf("**********************************************************\n");
	fclose(f);
}
matrix transpose(matrix M){
	matrix C;
	C.row=M.col;
	C.col=M.row;
	for (int i=0;i<C.row;i++)
		for (int j=0;j<C.col;j++) 
			C.unit[j][i]=M.unit[i][j];
	return C;
}
matrix addMatrix(matrix A,matrix B){
	matrix M;
	if(A.row==B.row && A.col==B.col ){
		M.col=A.col;
		M.row=A.row;
		for (int i=0;i<A.row;i++)
			for (int j=0;j<A.col;j++) 
				M.unit[i][j]=A.unit[i][j]+B.unit[i][j];
		return M;	
	}
	else{
		printf("Can not add these two matrix!\n");
		printf("**********************************************************\n");
	}

}
void printOdd(char path[]){
	fclose(fopen(path,"w"));//Clear data
	FILE* f=fopen(path,"a");
	int i=1;
	for (int j=1;j<=10;j++){
		while(i<j*10) fprintf(f,"%3.d ",i),i+=2;
		fprintf(f,"\n");
	}
	fclose(f);
}
void displayContentFile(char path[]){
	FILE* f=fopen(path,"r");
	char line[300];
	if(f!=NULL){
		while(fgets(line,200,f)!=NULL) printf("%s",line);
	}
	else{
		printf("File %s not found!\n",path);
		printf("**********************************************************\n");
		fclose(f);
	}
	fclose(f);
}
int main(){
	matrix A,B,C,D;
	printf("---------------------------------MENU-------------------------------\n");
	printf("1.Write to file the odd number file from 1->100, read file to display on the screen.\n");
	printf("2.Display matrix A,B --> find the transpose matrix, find the matrix A+B calute.\n");
	printf("3.Exit.\n");

	int isContinue=1,option;
	do{
		printf("-->Enter option:");
		scanf("%d",&option);
		switch(option){
		case 1:
			printOdd("file.txt");
			displayContentFile("file.txt");
			break;
		case 2:
			if(getData("file1.txt",&A)){
				printf("Matrix A %dx%d\n",A.row,A.col);
				displayMatrix(A);
				C=transpose(A);
				if(getData("file2.txt",&B)){
					printf("Matrix B %dx%d\n",B.row,B.col);
					displayMatrix(B);
					printf("Transpose matrix of A=Matrix C (%dx%d)\n",C.row,C.col);
					displayMatrix(C);
					D=addMatrix(A,B);
					if(D.col && D.row){
						printf("Add two matrix A+B=Matrix D (%dx%d)\n",D.row,D.col);
						displayMatrix(D);
					}
				}
				else{
					printf("Transpose matrix of A=(Matrix C) %dx%d\n",C.row,C.col);
					displayMatrix(C);
				}
			}
			else{
				if(getData("file2.txt",&B)){
					printf("Matrix B %dx%d\n",B.row,B.col);
					displayMatrix(B);
				}
			}
			break;
		case 3:
			isContinue=0;
			break;
		}	
		
	}while(isContinue);
}
