#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int s;
int a;
int b;
int c;
int r;
int h;
int troj; /*Trojrozmerna telesa*/
int dvoj; /*Dvojrozmerna telesa*/
int i; /*Switch v dvojrozmernych*/
int y; /*Switch v trojrozmernych*/
int zvoleni; /*Switch na dvojrozmerne nebo trojrozmerne*/
int pnp; /*Pokud je cislo mensi nez 0*/
int ano; 
int obvod;
int obsah;
int povrch;
int objem;

int main () { /* START */
    while (ano=1) {
        printf("Vitejte v programu na vypocet dvojrozmernych a trojrozmernych teles!.\n");
        printf("Pokud si prejete pocitat dvojrozmerna telesa, tak napiste 1 a stisknete ENTER.\n");
        printf("Pokud si prejete pocitat trojrozmerna telesa, tak napiste 2 a stisknete ENTER.\n");
        scanf("%d", &zvoleni);

        switch (zvoleni) { /* ZACATEK VYBERU */
                case 1: {
                    printf("Zvolil(a) jste vypocet obvodu a obsahu dvojrozmernych teles.\n");
                    printf("Pokud si prejete vypocitat obvod a obsah ctverce tak napiste 1 a stisknete ENTER\n");
                    printf("Pokud si prejete vypocitat obvod a obsah obdelnika tak napiste 2 a stisknete ENTER\n");
                    printf("Pokud si prejete vypocitat obvod a obsah kruhu tak napiste 3 a stisknete ENTER\n");
                    printf("Pokud si prejete vypocitat obvod a obsah trojúhleniku tak napiste 4 a stisknete ENTER\n");
                    scanf("%d", &i);

                    switch (i) {
                        case 1: { /* ZACATEK ZVOLENI CTVERCE */
                            printf("Zvolil(a) jste vypocet obvodu a obsahu ctverce.\n");
                            printf("Zadejte velikost strany a:\n");
                            scanf("%d", &a);

                            if (a <=0) {
                                printf("Zadal(a) jste neplatne hodnoty.\n");
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                                    
                                }
                            } /*Konec IF*/

                            else {
                                obvod = 4*a;
                                obsah = a*a;

                                printf("Obvod je: %d\n", obvod);
                                printf("Obsah je: %d\n", obsah);
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                            }
                        break;
                        } 
                        
                                } /* KONEC ZVOLENI CTVERCE */
                        
                        case 2: { /* ZACATEK ZVOLENI OBDELNIKA */
                            printf("Zvolil(a) jste vypocet obvodu a obsahu obdelnika.\n");
                            printf("Zadejte velikost strany a:\n");
                            scanf("%d", &a);
                            printf("Zadejte velikost strany b:\n");
                            scanf("%d", &b);

                            if (a<=0 || b<=0) {
                                printf("Zadal(a) jste neplatne hodnoty.\n");
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                                    
                                }
                            } /*Konec IF*/

                            else {
                                obvod = 2*a + 2*b;
                                obsah = a*b;

                                printf("Obvod je: %d\n", obvod);
                                printf("Obsah je: %d\n", obsah);
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                            }
                        break;
                        } 
                        
                                } /* KONEC ZVOLENI OBDELNIKA */

                            case 3: { /* ZACATEK ZVOLENI KRUHU */
                            printf("Zvolil(a) jste vypocet obvodu a obsahu kruhu.\n");
                            printf("Zadejte velikost polomeru r:\n");
                            scanf("%d", &r);

                            if (r<=0) {
                                printf("Zadal(a) jste neplatne hodnoty.\n");
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                                    
                                }
                            } /*Konec IF*/

                            else {
                                obvod = 2*3.14*r;
                                obsah = 3.14*r*r;

                                printf("Obvod je: %d\n", obvod);
                                printf("Obsah je: %d\n", obsah);
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                            }
                        break;
                        } 
                        
                                } /* KONEC ZVOLENI KRUHU */
                                    
                            case 4: { /* ZACATEK ZVOLENI TROJUHELNIKU*/
                            float a, b, c, obvod, obsah;
                            int pnp;

                            while (1) {
                                printf("Zadejte delku strany a: ");
                                scanf("%f", &a);

                                printf("Zadejte delku strany b: ");
                                scanf("%f", &b);

                                printf("Zadejte delku strany c: ");
                                scanf("%f", &c);
                                
                                if (a<=0 || b<=0 || c<=0){
                                printf("Zadal(a) jste neplatne hodnoty.\n");
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                                    
                                }
                                }
                                
                                else {

                                float s = (a + b + c) / 2;
                                obvod = a + b + c;
                                obsah = sqrt(s * (s - a) * (s - b) * (s - c));

                                printf("Obvod je: %.2f\n", obvod);
                                printf("Obsah je: %.2f\n", obsah);
                                printf("Pokud si prejete pokracovat, napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                                } 
                                   }

                            return 0;

                        }  
                        
                                } /* KONEC ZVOLENI TROJUHELNIKU */                                
                    } 
                    break;
                    } /* KONEC DVOJROZMERNYCH TELES*/
                case 2: {
                    printf("Zvolil(a) jste vypocet obvodu a obsahu trojrozmernych teles.\n");
                    printf("Pokud si prejete vypocitat povrch a objem krychle tak napiste 1 a stisknete ENTER\n");
                    printf("Pokud si prejete vypocitat povrch a objem kvadru tak napiste 2 a stisknete ENTER\n");
                    printf("Pokud si prejete vypocitat povrch a objem valce tak napiste 3 a stisknete ENTER\n");
                    scanf("%d", &y);

                    switch (y) {
                            case 1: { /* ZACATEK ZVOLENI KRYCHLE */
                            printf("Zvolil(a) jste vypocet povrchu a objemu krychle.\n");
                            printf("Zadejte velikost hrany a:\n");
                            scanf("%d", &a);

                            if (a<=0) {
                                printf("Zadal(a) jste neplatne hodnoty.\n");
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                                    
                                }
                            } /*Konec IF*/

                            else {
                                objem = a*a*a;
                                povrch = 6*a*a;

                                printf("Povrch je: %d\n", povrch);
                                printf("Objem je: %d\n", objem);
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                            }
                        break;
                        } 
                        
                                    } /* KONEC ZVOLENI KRYCHLE */

                            case 2: { /* ZACATEK ZVOLENI KVADRU */
                            printf("Zvolil(a) jste vypocet povrchu a objemu kvadru.\n");
                            printf("Zadejte velikost hrany a:\n");
                            scanf("%d", &a);
                            printf("Zadejte velikost hrany b:\n");
                            scanf("%d", &b);
                            printf("Zadejte velikost hrany c:\n");
                            scanf("%d", &c);

                            if (a<=0 || b<=0 || c<=0) {
                                printf("Zadal(a) jste neplatne hodnoty.\n");
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                                    
                                }
                            } /*Konec IF*/

                            else {
                                objem = a*b*c;
                                povrch = 2*(a*b + a*c + b*c);

                                printf("Povrch je: %d\n", povrch);
                                printf("Objem je: %d\n", objem);
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                            }
                        break;
                        } 
                        
                                    } /* KONEC ZVOLENI KVADRU */     



                            case 3: { /* ZACATEK ZVOLENI VALCE */
                            printf("Zvolil(a) jste vypocet povrchu a objemu valce.\n");
                            printf("Zadejte velikost polomer valce r:\n");
                            scanf("%d", &r);
                            printf("Zadejte vysku valce h:\n");
                            scanf("%d", &h);

                            if (r<=0 || h<=0) {
                                printf("Zadal(a) jste neplatne hodnoty.\n");
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                                    
                                }
                            } /*Konec IF*/

                            else {
                                objem = 2*3.14*r*(r+h);
                                povrch = (3.14*r*r*h);

                                printf("Povrch je: %d\n", povrch);
                                printf("Objem je: %d\n", objem);
                                printf("Pokud si prejete pokracovat, tak napiste 1 a stisknete ENTER\n");
                                printf("Pokud si prejete skoncit, tak napiste 0 a stisknete ENTER\n");
                                scanf("%d", &pnp);

                                switch (pnp) {
                                    case 1: {
                                        return main();
                                        break;
                                    }

                                    case 0: {
                                        exit (0);
                                        break;
                                    }
                            }
                        break;
                        } 
                        
                                    } /* KONEC ZVOLENI VALCE */     
                    }
                    break;
                    }  /*KONEC TROJROZMERNYCH TELES*/
                
                } 
            } /*KONEC VYBERU*/
        }  /* FINISH */

