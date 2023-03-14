#include "polindrom.hpp"

int reversNum(int num){
	int rez = 0;
	while(num){
		rez *= 10;
		rez += num % 10;
		num /= 10;
	}
	return rez;
}
bool isPolindrom(int num){
	if(num == reversNum(num) && num >= 0) return true;
	else{ return false;}	

}

void polindromToFile(FILE* input){
//	FILE* input;
        FILE* output;

	input = fopen("input-polindrom.txt", "r");
        output = fopen("output-polindrom.txt", "w");
        int num;
        while(!feof(input)){
                fscanf(input, "%d", &num);
                if(isPolindrom(num) == true){
                        fprintf(output, "%d%s\n", num, " - polindrom ");
                }
                else{
                        fprintf(output, "%d%s\n", num, " - not polindrom ");
                }
	}

        fclose(input);
        fclose(output);
	
}
