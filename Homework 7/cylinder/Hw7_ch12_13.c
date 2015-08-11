//Eric Smithson
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	float radius, height,volume,surface;
	
	FILE *stream, *fout;
	stream = fopen("cylinder.txt", "r");
	fout = fopen("cylinder_out.txt", "w");
	if(stream == NULL){
		printf("does not compute\n");
		return 0;
	}

    //reads in the number of strings from the files
    for(i = 0; i<5; i++){
		if(feof(stream)){
			printf("end of file");
			break;
		}
		fscanf(stream,"%f", &radius);
		fscanf(stream,"%f", &height);
		volume = 3.14 * radius * radius * height;
		surface = 2 * 3.14 * radius * radius + 2 * 3.14 * radius * height;
		printf("The volume of cylinder %d is %.02lf, the surface area is %.02lf\n\n", i + 1, volume, surface);
		fprintf(fout, "%.02lf %.02lf %.02lf %.02lf\n", radius, height, volume, surface);
	}
	
	fclose(stream);
	fclose(fout);
	return 0;
}
