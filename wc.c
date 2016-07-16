#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void wc ( FILE *infile, char *inname);

int main (int argc, char *argv[]) {

	//printf("%s is the name of the file maybe", argv[1]);
	int i;
	for(i=1;i<argc;i++){
		char* name = argv[i];
		FILE* file = fopen(name,"r");
		wc(file, name);		
		fclose(file);
	}
	return 0;
}

void wc( FILE *infile, char *inname) {
	//printf("%s: ", inname);
	//required data values	
	int lCount = 0;
	int bCount = 0;
	int wCount = 0;
	
	FILE* f = infile;
	//!file end of file
	do{
		char line[150];
		fgets(line,150,f);
		printf("%s",line);
	}while(!feof(f));
	//printf("%d %d %d\n",lCount, wCount, bCount);	
}
