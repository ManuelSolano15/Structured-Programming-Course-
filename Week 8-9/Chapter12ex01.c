/*Chapter12ex01:Design a structure to hold the data for a mailing list. 
Write a function to print out the data.*/


#include <stdio.h>
#include <string.h>

struct mail_list {
	int address, zip;
	char name[1000], street1[1000], street2[1000], city[1000], state[1000];              
};

void print_list(struct mail_list *mlist);

int main(void) {

	struct mail_list list[100];

	strcpy(list[0].name, "Cristian Nodal");
	list[0].address =1;
	strcpy(list[0].street1, "av.aviacion");
	strcpy(list[0].city, "Carmen");
	strcpy(list[0].state, "Campeche");
	list[0].zip = 24178;

	strcpy(list[1].name, "Natanael Cano");
	list[1].address =2;
	strcpy(list[1].street1, "street 45B");
	strcpy(list[1].city, "Merida");
	strcpy(list[1].state, "Yucatan");
	list[1].zip = 97255;

	strcpy(list[2].name, "Julion Alvarez");
	list[2].address =3;
	strcpy(list[2].street1, "alameda afligida");
	strcpy(list[2].street2, "puente deprimido");
	strcpy(list[2].city, "Torreon");
	strcpy(list[2].state, "Moterrey");
	list[2].zip = 12345;
	
	strcpy(list[3].name, "Bruno Diaz");
	list[3].address =4;
	strcpy(list[3].street1, "street ivy");
	strcpy(list[3].street2, "street nigma");
	strcpy(list[3].city, "Gotham city");
	strcpy(list[3].state, "Alaska");
	list[3].zip = 12346;
	
	strcpy(list[4].name, "Ricardo Tapia");
	list[4].address =5;
	strcpy(list[4].street1, "av. red");
	strcpy(list[4].street2, "street silence");
	strcpy(list[4].city, "Gotham City");
	strcpy(list[4].state, "Alaska");
	list[4].zip = 12347;

	print_list(list);

	return(0);
}

void print_list(struct mail_list *mlist) {

	int i;         

	printf("Mailing List\n");

	for (i = 0; i < sizeof(mlist); ++i) {
		if (strlen(mlist[i].name) == 0) {
			continue;
		}

		printf("%s\n", mlist[i].name);
		printf("%d %s\n", mlist[i].address, mlist[i].street1);
		if (strlen(mlist[i].street2)) {
			printf("%s\n", mlist[i].street2);
		}
		printf("%s, %s  %d\n\n", mlist[i].city, mlist[i].state, mlist[i].zip);
	}

}