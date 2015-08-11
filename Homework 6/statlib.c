#include "statlib.h"

extern double mean(int totnum, double data[]){
	int i; 
	double sum=0;
	for(i = 0; i < totnum; i++){
		sum += data[i];
	}
	return sum/totnum;
}

extern double minimum(int totnum, double data[]){
	int i; 
	double minimum = data[0];
	for(i = 1; i < totnum; i++){
		if(minimum > data[i])
			minimum = data[i];
	}
	return minimum;
}
extern double maximum(int totnum, double data[]){
	int i; 
	double maximum = data[0];
	for(i = 1; i < totnum; i++){
		if(maximum < data[i])
			maximum = data[i];
	}
	return maximum;
}
extern double median(int totnum, double data[]){
	sort(totnum, data);
	if(totnum % 2) //if totnum is odd
		return data[(totnum + 1) / 2];
	else //totnum is even
		return (data[totnum / 2 - 1] + data[totnum / 2]) / 2;
}
extern double variance(int totnum, double data[]){
	int i;
	double mean1 = mean(totnum, data), temp=0;
	for(i=0; i < totnum; i++){
		temp += pow((data[i] - mean1) , 2);
	}
	return temp / (totnum);
}
extern double stdDeviation(int totnum, double data[]){
	return sqrt(variance(totnum, data));
}
extern int aboveVal(int totnum, double data[], double val){
	int i= 0, counter = 0;
	for(i=0; i < totnum; i++){
		if(data[i] >= val)
			counter++;
	}
	return counter;
}
extern void sort(int totnum, double data[]){
	int i,j;
	double temp;
	for(i=0; i<totnum; i++){
		for(j= 0; j < totnum - 1; j++){
			if(data[j] > data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
}
