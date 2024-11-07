
#ifndef MAIN_H_
#define MAIN_H_

	#define INPUT_MODE 	0
	#define OUTPUT_MODE	1
	#define ALT_MODE 	2
	#define ANALOG_MODE	3

	#define BITMASK_1BITS	0b1
	#define BITMASK_2BITS	0b11
	#define BITMASK_3BITS	0b111
	#define BITMASK_4BITS	0b1111
	#define BITMASK_5BITS	0b11111

#define TAILLE_MAX_COMPRESS 500 // A modifier si besoin.

// Texte non compressé
uint8_t  texte[]="aaaabbbccd";

// Texte compressé
uint8_t  texteCompress[TAILLE_MAX_COMPRESS];

// Tableau du nombre d’occurrence de chaque caractère
uint32_t  tabCaractere[256]={0};

// Nombre de caractère total dans le texte non compressé
uint32_t  nbrCaractereTotal = 0;

// Nombre de caractère différent dans le texte non compréssé
uint32_t  nbrCaractereDifferent = 0;

// Arbre de Huffman
struct noeud* arbreHuffman[256];

#endif
