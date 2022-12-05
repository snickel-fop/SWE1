#include <stdio.h>

int main() {
	char vname1[20], nname1[20], vname2[20], nname2[20], vname3[20], nname3[20];
	printf("Den ersten Vornamen eingeben: ");
	scanf("%s", &vname1);
	printf("Den ersten Nachnamen eingeben: ");
	scanf("%s", &nname1);
	printf("Den zweiten Vornamen eingeben: ");
	scanf("%s", &vname2);
	printf("Den zweiten Nachnamen eingeben: ");
	scanf("%s", &nname2);
	printf("Den dritten Vornamen eingeben: ");
	scanf("%s", &vname3);
	printf("Den dritten Nachnamen eingeben: ");
	scanf("%s", &nname3);
	
	printf("%s\t%s\n%s\t%s\n%s\t%s\n", nname1, vname1, nname2, vname2, nname3, vname3);
	
	return 0;
}