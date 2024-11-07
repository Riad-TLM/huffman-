#include <stdint.h>
#include <stm32f446xx.h>
#include <stdio.h>
#include "main.h"
#include "gpio.h"
#include "usart.h"
#include "timer.h"
/////////////

// Fonction de comptage des occurrences
void occurence(uint8_t *chaine, uint32_t tab[256]) {
    // Initialisation du tableau des occurrences à zéro
    for (int i = 0; i < 256; i++) {
        tab[i] = 0;
    }

    // Parcours de la chaîne de caractères
    for (int i = 0; chaine[i] != '\0'; i++) {
        uint8_t caractere = chaine[i]; // Obtenir le caractère
        tab[caractere]++;              // Incrémenter l'occurrence du caractère
    }
}

// Fonction pour afficher les résultats des occurrences sur UART2
void afficher_occurrences_UART(uint32_t tab[256]) {
    for (int i = 0; i < 256; i++) {
        if (tab[i] > 0) { // Afficher uniquement les caractères présents
            // Envoyer le caractère et son nombre d'occurrences via UART
            printf("Caractère '%c' (ASCII %d) : %d occurrences\r\n", i, i, tab[i]);
        }
    }
}


int main(void)
{
    // Initialiser UART2 pour le debug
    USART2_Init();

    // Chaîne de texte à analyser
    uint8_t texte[] = "aaaabbbccd";

    // Tableau des occurrences
    uint32_t tabCaractere[256] = {0};

    // Compter les occurrences des caractères dans le texte
    occurence(texte, tabCaractere);

    // Afficher les résultats sur UART2
    afficher_occurrences_UART(tabCaractere);

	GPIO_Init();

	SYSTICK_Init();

	while(1){
		//for(uint32_t i = 0 ; i<100000; i++);
		SYSTICK_Delay(1000);
		GPIOA->ODR ^= 1<<5;
		printf("Hello\r\n");
	}
}
