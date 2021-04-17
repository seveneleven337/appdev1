#include "rock.h"


int main() {
	rock r;
	printf("Application Developer Rocks \n");
	printf("Enter rocker's name: \n");
	scanf("%s", r.rname);	
	r.max = rand() % 50 + 51;
	r.min = rand() % 50 + 1;
	send_data(r);
	printf("Rockn'Roll\n");
	return 0;
}