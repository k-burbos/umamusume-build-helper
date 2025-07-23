#include <stdio.h>
#include <string.h>


char* control = "Characters"; 
// Choose which you want to go. 
// Home
// Characters
char* control2 = ""; // Ignore if not told. 


// Code begins here.
int main() {

int width = 100;
int height = 5;
char* chara = "Characters"; 
char* home = "Home";

if (strcmp(control, home) == 0) {
printf("┌");
for (int i = 0; i < width; i++) printf("─");
printf("┐\n");


for (int i = 0; i < height; i++) {
    printf("│");
    for (int j = 0; j < width; j++) printf(" ");
    printf("│\n");
}

printf("└");
for (int i = 0; i < width; i++) printf("─");
printf("┘\n");

}

if (strcmp(control, chara) == 0) {
    printf("┌");
for (int i = 0; i < width; i++) printf("─");
printf("┐\n");

// A characters
int uma1 = strlen("Admire Vega");
int uma2 = strlen("Agnes Digital");
int uma3 = strlen("Agnes Tachyon");
int uma4 = strlen("Air Groove");
int uma5 = strlen("Air Messiah");
int uma6 = strlen("Air Shakur");
int uma7 = strlen("Akitsu Teio");
int uma8 = strlen("Almond Eye");
int uma9 = strlen("Aoi Kiryuin");
int uma10 = strlen("Aston Machan");

// B characters
int uma11 = strlen("Bamboo Memory");
int uma12 = strlen("Believe");
int uma13 = strlen("Berno Light");
int uma14 = strlen("Bethe Sugar");
int uma15 = strlen("Biko Pegasus");
int uma16 = strlen("Bitter Glasse");
int uma17 = strlen("Biwa Hayahide");
int uma18 = strlen("Blacky Yeil");
int uma19 = strlen("Blast Onepiece");
int uma20 = strlen("Bright Rock");
int uma21 = strlen("Broye");
int uma22 = strlen("Bubble Gum Fellow");
int uma23 = strlen("Buena Vista");
int uma24 = strlen("Byerley Turk");

// C characters
int uma25 = strlen("Calstone Light O");
int uma26 = strlen("Carrie's Room");
int uma27 = strlen("Cesario");
int uma28 = strlen("Cheval Grand");
int uma29 = strlen("Chrono Genesis");
int uma30 = strlen("Clarizza");
int uma31 = strlen("Copano Rickey");
int uma32 = strlen("Curren Bouquetd'or");
int uma33 = strlen("Curren Chan");

// Letter
int letter = strlen(" ");

// A length 
int nameLength = uma1 + uma2 + uma3 + uma4;
int namesLength2 = uma5 + uma6 + uma7 + uma8;
int namesLength3 = uma9 + uma10;

// B length 
int namesLength4 = uma11 + uma12 + uma13 + uma14;
int namesLength5 = uma15 + uma16 + uma17 + uma18;
int namesLength6 = uma19 + uma20 + uma21 + uma22;
int namesLength7 = uma23 + uma24;

// C length 
int namesLength8 = uma25 + uma26 + uma27 + uma28;
int namesLength9 = uma29 + uma30 + uma31 + uma32;

// A Padding
int namePadding = width - nameLength;
int namePadding2 = width - namesLength2;
int namePadding3 = width - namesLength3;

// B Padding
int namePadding4 = width - namesLength4;
int namePadding5 = width - namesLength5;
int namePadding6 = width - namesLength6;
int namePadding7 = width - namesLength7;

// C Padding
int namePadding8 = width - namesLength8;
int namePadding9 = width - namesLength9;
int namePadding10 = width - uma33; 

// Letter
int letterPadding = width - letter;

int spaceBetween = 4;  // space between the two names

// A space
int spaceAround = (namePadding - spaceBetween) / 2;
int spaceAround2 = (namePadding2 - spaceBetween) / 2;
int spaceAround3 = (namePadding3 - spaceBetween) / 2;

// B space
int spaceAround4 = (namePadding4 - spaceBetween) / 2;
int spaceAround5 = (namePadding5 - spaceBetween) / 2;
int spaceAround6 = (namePadding6 - spaceBetween) / 2;
int spaceAround7 = (namePadding7 - spaceBetween) / 2;

// C space
int spaceAround8 = (namePadding8 - spaceBetween) / 2;
int spaceAround9 = (namePadding9 - spaceBetween) / 2;
int spaceAround10 = (namePadding10 - spaceBetween) / 2;

// Letter
int letterAround = (namePadding - spaceBetween) / 2;

printf("│                       ");

for (int i = 0; i < letterAround; i++) printf(" ");
printf("A");
for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" "); printf(" |");

printf("\n│");

for (int i = 0; i < spaceAround; i++) printf(" ");
printf("Admire Vega");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Agnes Digital");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Agnes Tachyon");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Air Groove"); 
for (int i = 0; i < (width - (2 * spaceAround) - nameLength); i++) printf(" "); 

printf("            │\n");

printf("│");

for (int i = 0; i < spaceAround2; i++) printf(" ");
printf("Air Messiah");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Air Shakur");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Akitsu Teio");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Almond Eye"); 
for (int i = 0; i < (width - (2 * spaceAround2) - namesLength2); i++) printf(" "); 

printf("               │\n");

printf("│");

for (int i = 0; i < spaceAround3; i++) printf(" ");
printf("Aoi Kiryuin");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Aston Machan");
for (int i = 0; i < (width - (2 * spaceAround3) - namesLength3); i++) printf(" "); 

printf("                                │\n");

for (int i = 0; i < 1; i++) {
    printf("│");
    for (int j = 0; j < width; j++) printf(" ");
    printf("│\n");
}

printf("│                       ");

for (int i = 0; i < letterAround; i++) printf(" ");
printf("B");
for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" "); printf(" |");

printf("\n│");

for (int i = 0; i < spaceAround4; i++) printf(" ");
printf("Bamboo Memory");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Believe");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Berno Light");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Bethe Sugar"); 
for (int i = 0; i < (width - (2 * spaceAround4) - namesLength4); i++) printf(" "); 

printf("               │");

printf("\n│");

for (int i = 0; i < spaceAround5; i++) printf(" ");
printf("Biko Pegasus");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Bitter Glasse");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Biwa Hayahide");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Blacky Yeil"); 
for (int i = 0; i < (width - (2 * spaceAround5) - namesLength5); i++) printf(" "); 

printf("           │");

printf("\n│");

for (int i = 0; i < spaceAround5; i++) printf(" ");
printf("Blast Onepiece");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Bright Rock");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Broye");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Bubble Gum Fellow"); 
for (int i = 0; i < (width - (2 * spaceAround5) - namesLength5); i++) printf(" "); 

printf("             │\n");

printf("│");

for (int i = 0; i < spaceAround3; i++) printf(" ");
printf("Buena Vista");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Byerley Turk");
for (int i = 0; i < (width - (2 * spaceAround3) - namesLength3); i++) printf(" "); 

printf("                                │\n");

for (int i = 0; i < 1; i++) {
    printf("│");
    for (int j = 0; j < width; j++) printf(" ");
    printf("│\n");
}

printf("│                       ");

for (int i = 0; i < letterAround; i++) printf(" ");
printf("C");
for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" "); printf(" |");

printf("\n│");

for (int i = 0; i < spaceAround2; i++) printf(" ");
printf("Calstone Light O");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Carrie's Room");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Cesario");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Cheval Grand"); 
for (int i = 0; i < (width - (2 * spaceAround2) - namesLength2); i++) printf(" "); 

printf("         │");

printf("\n│");

for (int i = 0; i < spaceAround; i++) printf(" ");
printf("Chrono Genesis");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Clarizza");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Copano Rickey");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Curren Bouquetd'or"); 
for (int i = 0; i < (width - (2 * spaceAround) - nameLength); i++) printf(" "); 

printf("      │");

printf("\n│");

for (int i = 0; i < spaceAround10; i++) printf(" ");
printf("Curren Chan");
for (int i = 0; i < (width - (2 * spaceAround10) - uma32); i++) printf(" "); 

printf("                                               │\n");

printf("└");
for (int i = 0; i < width; i++) printf("─");
printf("┘\n");
}
return 0; 
}

