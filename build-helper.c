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

if (strcmp(control, home) != 0 && strcmp(control, chara) != 0) {
    printf("Input it correctly.");
}

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

// D characters 
    int uma34 = strlen("Daiichi Ruby");
    int uma35 = strlen("Daitaku Helios");
    int uma36 = strlen("Daiwa Scarlet");
    int uma37 = strlen("Dantsu Flame");
        int uma38 = strlen("Daring Heart");
        int uma39 = strlen("Daring Tact");
        int uma40 = strlen("Darley Arabian");
        int uma41 = strlen("Dicta Striker");
    int uma42 = strlen("Dream Journey");
    int uma43 = strlen("Duramente");
    int uma44 = strlen("Durandal");
    int uma45 = strlen("Dynamu Heroine");
        int uma46 = strlen("Dynamu Painter");

// E characters     
    int uma47 = strlen("Eishin Flash");
    int uma48 = strlen("El Condor Pasa");
    int uma49 = strlen("Ellerslie Pride");
    int uma50 = strlen("Espoir City");
        int uma51 = strlen("Etsuko Otonashi");
        int uma52 = strlen("Eve Binti");  
    
// F characters 
    int uma53 = strlen("Faith No More");
    int uma54 = strlen("Fenomeno");
    int uma55 = strlen("Fine Motion");
    int uma56 = strlen("Folkqueen");
        int uma57 = strlen("Fuji Kiseki");
        int uma58 = strlen("Fujimasa March");
        int uma59 = strlen("Fumino Nase");
        int uma60 = strlen("Furioso"); 
    int uma61 = strlen("Fusaichi Pandora");
    int uma62 = strlen("Fuyuno Nakasumi");     
    
// G characters
    int uma63 = strlen("Gentildonna");
    int uma64 = strlen("Ginjirou Musaka");
    int uma65 = strlen("God Hannibal");
    int uma66 = strlen("Godolphin Barb");    
        int uma67 = strlen("Gold City");
        int uma68 = strlen("Gold Ship");
        int uma69 = strlen("Gorou Akeishi");
        int uma70 = strlen("Gran Alegria");   
    int uma71 = strlen("Grass Wonder"); 
    
// H characters 
        int uma72 = strlen("Haiseiko");
        int uma73 = strlen("Hana Toujou");
        int uma74 = strlen("Happy Meek");
        int uma75 = strlen("Haru Urara");   
            int uma76 = strlen("Hidehito Nase");
            int uma77 = strlen("Hishi Akebono");
            int uma78 = strlen("Hishi Amazon");
            int uma79 = strlen("Hishi Miracle");   
        int uma80 = strlen("Hiyori Kuwamara");
        int uma81 = strlen("Hokko Tarumae"); 

// I characters
        int uma82 = strlen("Ikuno Dictus");
        int uma83 = strlen("Inari One");
        int uma84 = strlen("Ines Fujin");
        
// J characters 
        int uma85 = strlen("Jou Kitahara");
        int uma86 = strlen("Joy Maker");
        int uma87 = strlen("Jungle Pocket");
        int uma88 = strlen("Junko Hosoe");  

// K characters 
        int uma89 = strlen("K.S.Miracle");
        int uma90 = strlen("Katsuragi Ace");
        int uma91 = strlen("Kawakami Princess");
        int uma92 = strlen("King Halo"); 
            int uma93 = strlen("Kitasan Black");
            int uma94 = strlen("Kraft Univa");  

// L characters
        int uma95 = strlen("Light Hello");
        int uma96 = strlen("Little Cocon");
        int uma97 = strlen("Long Live Free");
        int uma98 = strlen("Loves Only You"); 
            int uma99 = strlen("Lucky Lilac");
            int uma100 = strlen("Luna Swallow"); 

// M characters
        int uma101 = strlen("Manhattan Cafe");
        int uma102 = strlen("Maruzensky");
        int uma103 = strlen("Marvelous Sunday");
        int uma104 = strlen("Masami Komiyama"); 
            int uma105 = strlen("Matikanefukukitaru");
            int uma106 = strlen("Matikanetannhauser");
            int uma107 = strlen("Mayano Top Gun");
            int uma108 = strlen("Mei Satake"); 
        int uma109 = strlen("Meikun Tsukasa");
        int uma110 = strlen("Meisho Doto");
        int uma111 = strlen("Mejiro Ardan");
        int uma112 = strlen("Mejiro Bright"); 
            int uma113 = strlen("Mejiro Dober");
            int uma114 = strlen("Mejiro McQueen");
            int uma115 = strlen("Mejiro Palmer");
            int uma116 = strlen("Mejiro Ramonu"); 
        int uma117 = strlen("Mejiro Ryan");
        int uma118 = strlen("Merry Beauty");
        int uma119 = strlen("Meteor Selenus");
        int uma120 = strlen("Michelle My Baby"); 
            int uma121 = strlen("Mihono Bourbon");
            int uma122 = strlen("Mill Wakaba");
            int uma123 = strlen("Minamizaka");
            int uma124 = strlen("Mini the Lady"); 
        int uma125 = strlen("Misato Akasaka");
        int uma126 = strlen("Miss Armagnac");
        int uma127 = strlen("Montjeu");
        int uma128 = strlen("Moonlight Lunacy"); 
            int uma129 = strlen("Mr. C.B."); 

// N characters
        int uma130 = strlen("Nakayama Festa");
        int uma131 = strlen("Narita Brian");
        int uma132 = strlen("Narita Taishin");
        int uma133 = strlen("Narita Top Road"); 
            int uma134 = strlen("Neo Universe");
            int uma135 = strlen("Nice Nature");
            int uma136 = strlen("Nishino Flower");
            int uma137 = strlen("No Reason"); 
        int uma138 = strlen("Norn Ace");
        int uma139 = strlen("North Flight");

// O characters
        int uma140 = strlen("Obey Your Master");
        int uma141 = strlen("Oguri Cap");
        int uma142 = strlen("Okan Maker");
        int uma143 = strlen("Orfevre"); 

// Q characters
        int uma144 = strlen("Queen Berry"); 

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

// D length
int namesLength10 = uma34 + uma35 + uma36 + uma37;
int namesLength11 = uma38 + uma39 + uma40 + uma41;
int namesLength12 = uma42 + uma43 + uma44 + uma45;

// E length
int namesLength13 = uma47 + uma48 + uma49 + uma50;
int namesLength14 = uma51 + uma52;

// F length 
int namesLength15 = uma53 + uma54 + uma55 + uma56;
int namesLength16 = uma57 + uma58 + uma59 + uma60;
int namesLength17 = uma61 + uma62;

// G length
int namesLength18 = uma63 + uma64 + uma65 + uma66;
int namesLength19 = uma67 + uma68 + uma69 + uma70;

// H, F, and J length 
int namesLength20 = uma72 + uma73 + uma74 + uma75;
int namesLength21 = uma76 + uma77 + uma78 + uma79;
int namesLength22 = uma80 + uma81;
int namesLength23 = uma82 + uma83 + uma84;
int namesLength24 = uma85 + uma86 + uma87 + uma88;

// K length
int namesLength25 = uma89 + uma90 + uma91 + uma92;
int namesLength26 = uma93 + uma94;

// L length
int namesLength27 = uma95 + uma96 + uma97 + uma98;
int namesLength28 = uma99 + uma100;

// M length
int namesLength29 = uma101 + uma102 + uma103 + uma104;
int namesLength30 = uma105 + uma106 + uma107 + uma108;
int namesLength31 = uma109 + uma110 + uma111 + uma112;
int namesLength32 = uma113 + uma114 + uma115 + uma116;
int namesLength33 = uma117 + uma118 + uma119 + uma120;
int namesLength34 = uma121 + uma122 + uma123 + uma124;
int namesLength35 = uma125 + uma126 + uma127 + uma128;

// N & O length 
int namesLength36 = uma130 + uma131 + uma132 + uma133;
int namesLength37 = uma134 + uma135 + uma136 + uma137;
int namesLength38 = uma138 + uma139;
int namesLength39 = uma140 + uma141 + uma142 + uma143;

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

// D Padding
    int namePadding11 = width - namesLength10;
    int namePadding12 = width - namesLength11;  
    int namePadding13 = width - namesLength12; 
    int namePadding14 = width - uma46;   

// E Padding
    int namePadding15 = width - namesLength13; 
    int namePadding16 = width - namesLength14; 

// F Padding
    int namePadding17 = width - namesLength15; 
    int namePadding18 = width - namesLength16; 
    int namePadding19 = width - namesLength17;
    
// G Padding
    int namePadding20 = width - namesLength18;
    int namePadding21 = width - namesLength19;
    int namePadding22 = width - uma71; 

// H, F, and J Padding
    int namePadding23 = width - namesLength20;
    int namePadding24 = width - namesLength21;
    int namePadding25 = width - namesLength22;
    int namePadding26 = width - namesLength23;
    int namePadding27 = width - namesLength24;

// K Padding
    int namePadding28 = width - namesLength25;
    int namePadding29 = width - namesLength26;

// L Padding    
    int namePadding30 = width - namesLength27;
    int namePadding31 = width - namesLength28;

// M Padding
    int namePadding32 = width - namesLength29;
    int namePadding33 = width - namesLength30;
    int namePadding34 = width - namesLength31;
    int namePadding35 = width - namesLength32;
    int namePadding36 = width - namesLength33;
    int namePadding37 = width - namesLength34;
    int namePadding38 = width - namesLength35;
    int namePadding39 = width - uma129;

// N, O, and Q Padding
    int namePadding40 = width - namesLength36;
    int namePadding41 = width - namesLength37;
    int namePadding42 = width - namesLength38;
    int namePadding43 = width - namesLength39;
    int namePadding44 = width - uma144;

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

// D space
    int spaceAround11 = (namePadding11 - spaceBetween) / 2;
    int spaceAround12 = (namePadding12 - spaceBetween) / 2;
    int spaceAround13 = (namePadding13 - spaceBetween) / 2;
    int spaceAround14 = (namePadding14 - spaceBetween) / 2;

// E space
    int spaceAround15 = (namePadding15 - spaceBetween) / 2;
    int spaceAround16 = (namePadding16 - spaceBetween) / 2;
    int spaceAround17 = (namePadding17 - spaceBetween) / 2;

// F space
    int spaceAround18 = (namePadding18 - spaceBetween) / 2;
    int spaceAround19 = (namePadding19 - spaceBetween) / 2;

// G space
    int spaceAround20 = (namePadding20 - spaceBetween) / 2;
    int spaceAround21 = (namePadding21 - spaceBetween) / 2;
    int spaceAround22 = (namePadding22 - spaceBetween) / 2;

// H, F, and J space
    int spaceAround23 = (namePadding23 - spaceBetween) / 2;
    int spaceAround24 = (namePadding24 - spaceBetween) / 2;
    int spaceAround25 = (namePadding25 - spaceBetween) / 2;
    int spaceAround26 = (namePadding26 - spaceBetween) / 2;
    int spaceAround27 = (namePadding27 - spaceBetween) / 2;

// K space    
    int spaceAround28 = (namePadding28 - spaceBetween) / 2;
    int spaceAround29 = (namePadding29 - spaceBetween) / 2;

// L space
    int spaceAround30 = (namePadding30 - spaceBetween) / 2;
    int spaceAround31 = (namePadding31 - spaceBetween) / 2;

// M space
    int spaceAround32 = (namePadding32 - spaceBetween) / 2;
    int spaceAround33 = (namePadding33 - spaceBetween) / 2;
    int spaceAround34 = (namePadding34 - spaceBetween) / 2;
    int spaceAround35 = (namePadding35 - spaceBetween) / 2;
    int spaceAround36 = (namePadding36 - spaceBetween) / 2;
    int spaceAround37 = (namePadding37 - spaceBetween) / 2;
    int spaceAround38 = (namePadding38 - spaceBetween) / 2;
    int spaceAround39 = (namePadding39 - spaceBetween) / 2;

// N, O & Q space
    int spaceAround40 = (namePadding40 - spaceBetween) / 2;
    int spaceAround41 = (namePadding41 - spaceBetween) / 2;
    int spaceAround42 = (namePadding42 - spaceBetween) / 2;
    int spaceAround43 = (namePadding43 - spaceBetween) / 2;
    int spaceAround44 = (namePadding44 - spaceBetween) / 2;

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

        for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("D");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" "); printf(" |\n");

printf("│");

for (int i = 0; i < spaceAround11; i++) printf(" ");
printf("Daiichi Ruby");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Daitaku Helios");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Daiwa Scarlet");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Dantsu Flame"); 
for (int i = 0; i < (width - (2 * spaceAround11) - namesLength10); i++) printf(" "); 

printf("          │\n");

printf("│");

for (int i = 0; i < spaceAround11; i++) printf(" ");
printf("Daring Heart");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Daring Tact");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Darley Arabian");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Dicta Striker"); 
for (int i = 0; i < (width - (2 * spaceAround11) - namesLength10); i++) printf(" "); 

printf("           │");

printf("\n│");

for (int i = 0; i < spaceAround13; i++) printf(" ");
printf("Dream Journey");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Duramente");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Durandal");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Dynamu Heroine"); 
for (int i = 0; i < (width - (2 * spaceAround13) - namesLength12); i++) printf(" "); 

printf("              │");

printf("\n│");

for (int i = 0; i < spaceAround14; i++) printf(" ");
printf("Dynamu Painter");
for (int i = 0; i < (width - (2 * spaceAround14) - uma46); i++) printf(" "); 

printf("                                         │\n");


        for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("E");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" "); printf(" |");

        printf("\n│");

for (int i = 0; i < spaceAround15; i++) printf(" ");
printf("Eishin Flash");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("El Condor Pasa");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Ellerslie Pride");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Espoir City"); 
for (int i = 0; i < (width - (2 * spaceAround15) - namesLength13); i++) printf(" "); 

printf("          │");

printf("\n│");

for (int i = 0; i < spaceAround3; i++) printf(" ");
printf("Etsuko Otonashi");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Eve Binti");
for (int i = 0; i < (width - (2 * spaceAround3) - namesLength3); i++) printf(" "); 

printf("                               │\n");

        for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("F");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround17; i++) printf(" ");
printf("Faith No More");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Fenomeno");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Fine Motion");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Folkqueen"); 
for (int i = 0; i < (width - (2 * spaceAround17) - namesLength15); i++) printf(" "); 

printf("               │");

printf("\n│");

for (int i = 0; i < spaceAround; i++) printf(" ");
printf("Fuji Kiseki");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Fujimasa March");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Fumino Nase");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Furioso"); 
for (int i = 0; i < (width - (2 * spaceAround) - nameLength); i++) printf(" "); 

printf("                │");

printf("\n│");

for (int i = 0; i < spaceAround19; i++) printf(" ");
printf("Fusaichi Pandora");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Fuyuno Nakasumi");
for (int i = 0; i < (width - (2 * spaceAround19) - namesLength17); i++) printf(" "); 

printf("                            │\n");

        for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("G");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround20; i++) printf(" ");
printf("Gentildonna");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Ginjirou Musaka");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("God Hannibal");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Godolphin Barb"); 
for (int i = 0; i < (width - (2 * spaceAround20) - namesLength18); i++) printf(" "); 

printf("          │");

printf("\n│");

for (int i = 0; i < spaceAround20; i++) printf(" ");
printf("Gold City");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Gold Ship");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Gorou Akeishi");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Gran Alegria"); 
for (int i = 0; i < (width - (2 * spaceAround20) - namesLength18); i++) printf(" "); 

printf("                   │");

printf("\n│");

for (int i = 0; i < spaceAround22; i++) printf(" ");
printf("Grass Wonder");
for (int i = 0; i < (width - (2 * spaceAround22) - uma71); i++) printf(" "); 

printf("                                          │\n");


        for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("H");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround23; i++) printf(" ");
printf("Haiseiko");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Hana Toujou");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Happy Meek");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Haru Urara"); 
for (int i = 0; i < (width - (2 * spaceAround23) - namesLength20); i++) printf(" "); 

printf("                │");

printf("\n│");

for (int i = 0; i < spaceAround24; i++) printf(" ");
printf("Hidehito Nase");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Hishi Akebono");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Hishi Amazon");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Hishi Miracle"); 
for (int i = 0; i < (width - (2 * spaceAround24) - namesLength21); i++) printf(" "); 

printf("          │");

printf("\n│");

for (int i = 0; i < spaceAround25; i++) printf(" ");
printf("Hiyori Kuwamara");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Hokko Tarumae"); 
for (int i = 0; i < (width - (2 * spaceAround25) - namesLength22); i++) printf(" "); 

printf("                              │\n");

        for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("I");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround26; i++) printf(" ");
printf("Ikuno Dictus");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Inari One");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Ines Fujin");
for (int i = 0; i < (width - (2 * spaceAround26) - namesLength23); i++) printf(" "); 

printf("                        │\n");

        for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("J");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround27; i++) printf(" ");
printf("Jou Kitahara");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Joy Maker");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Jungle Pocket");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Junko Hosoe");
for (int i = 0; i < (width - (2 * spaceAround27) - namesLength24); i++) printf(" "); 

printf("             │\n");

       for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("K");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround28; i++) printf(" ");
printf("K.S.Miracle");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Katsuragi Ace");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Kawakami Princess");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("King Halo");
for (int i = 0; i < (width - (2 * spaceAround28) - namesLength25); i++) printf(" "); 

printf("           │");

printf("\n│");

for (int i = 0; i < spaceAround29; i++) printf(" ");
printf("Kitasan Black");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Kraft Univa");
for (int i = 0; i < (width - (2 * spaceAround29) - namesLength26); i++) printf(" "); 

printf("                                │\n");

       for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("L");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround30; i++) printf(" ");
printf("Light Hello");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Little Cocon");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Long Live Free");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Loves Only You");
for (int i = 0; i < (width - (2 * spaceAround30) - namesLength27); i++) printf(" "); 

printf("          │");

printf("\n│");

for (int i = 0; i < spaceAround31; i++) printf(" ");
printf("Lucky Lilac");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Luna Swallow");
for (int i = 0; i < (width - (2 * spaceAround31) - namesLength28); i++) printf(" "); 

printf("                                │\n");

       for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("M");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround32; i++) printf(" ");
printf("Manhattan Cafe");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Maruzensky");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Marvelous Sunday");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Masami Komiyama");
for (int i = 0; i < (width - (2 * spaceAround32) - namesLength29); i++) printf(" "); 

printf("        │");

printf("\n│");

for (int i = 0; i < spaceAround33; i++) printf(" ");
printf("Matikanefukukitaru");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Matikanetannhauser");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Mayano Top Gun");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Mei Satake");
for (int i = 0; i < (width - (2 * spaceAround33) - namesLength30); i++) printf(" "); 

printf("      │");

printf("\n│");

for (int i = 0; i < spaceAround34; i++) printf(" ");
printf("Meikun Tsukasa");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Meisho Doto");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Mejiro Ardan");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Mejiro Bright");
for (int i = 0; i < (width - (2 * spaceAround34) - namesLength31); i++) printf(" "); 

printf("           │");

printf("\n│");

for (int i = 0; i < spaceAround35; i++) printf(" ");
printf("Mejiro Dober");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Mejiro McQueen");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Mejiro Palmer");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Mejiro Ramonu");
for (int i = 0; i < (width - (2 * spaceAround35) - namesLength32); i++) printf(" "); 

printf("          │");

printf("\n│");

for (int i = 0; i < spaceAround36; i++) printf(" ");
printf("Mejiro Ryan");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Merry Beauty");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Meteor Selenus");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Michelle My Baby");
for (int i = 0; i < (width - (2 * spaceAround36) - namesLength33); i++) printf(" "); 

printf("         │");

printf("\n│");

for (int i = 0; i < spaceAround37; i++) printf(" ");
printf("Mihono Bourbon");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Mill Wakaba");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Minamizaka");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Mini the Lady");
for (int i = 0; i < (width - (2 * spaceAround37) - namesLength34); i++) printf(" "); 

printf("            │");

printf("\n│");

for (int i = 0; i < spaceAround38; i++) printf(" ");
printf("Misato Akasaka");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Miss Armagnac");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Montjeu");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Moonlight Lunacy");
for (int i = 0; i < (width - (2 * spaceAround38) - namesLength35); i++) printf(" "); 

printf("           │");

printf("\n│");

for (int i = 0; i < spaceAround39; i++) printf(" ");
printf("Mr. C.B.");
for (int i = 0; i < (width - (2 * spaceAround39) - uma129); i++) printf(" "); 

printf("                                            │\n");

       for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("N");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround40; i++) printf(" ");
printf("Nakayama Festa");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Narita Brian");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Narita Taishin");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Narita Top Road");
for (int i = 0; i < (width - (2 * spaceAround40) - namesLength36); i++) printf(" "); 

printf("        │");

printf("\n│");

for (int i = 0; i < spaceAround41; i++) printf(" ");
printf("Neo Universe");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Nice Nature");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Nishino Flower");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("No Reason");
for (int i = 0; i < (width - (2 * spaceAround41) - namesLength37); i++) printf(" "); 

printf("             │");

printf("\n│");

for (int i = 0; i < spaceAround42; i++) printf(" ");
printf("Norn Ace");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("North Flight");
for (int i = 0; i < (width - (2 * spaceAround42) - namesLength38); i++) printf(" "); 

printf("                                  │\n");

      for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("O");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround43; i++) printf(" ");
printf("Obey Your Master");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Oguri Cap");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Okan Maker");
for (int i = 0; i < spaceBetween; i++) printf(" ");
printf("Orfevre");
for (int i = 0; i < (width - (2 * spaceAround43) - namesLength39); i++) printf(" "); 

printf("               │\n");

      for (int i = 0; i < 1; i++) {
            printf("│");
            for (int j = 0; j < width; j++) printf(" ");
            printf("│\n");
        }

        printf("│                       ");

        for (int i = 0; i < letterAround; i++) printf(" ");
        printf("Q");
        for (int i = 0; i < (width - (2 * letterAround) - letter); i++) printf(" ");

        printf(" │");

printf("\n│");

for (int i = 0; i < spaceAround44; i++) printf(" ");
printf("Queen Berry");
for (int i = 0; i < (width - (2 * spaceAround44) - uma144); i++) printf(" "); 

printf("                                          │");

printf("\n└");
for (int i = 0; i < width; i++) printf("─");
printf("┘\n");
}
return 0; 
}

