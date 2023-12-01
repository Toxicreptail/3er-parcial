#include <stdio.h>

void borracho(void);

int main(void){
    int opc, final=0;

    do{
        opc=0, final=1;
        system("cls");
        printf("Alumno No way Home\n");
        printf("Saliste temprano de clases el dia de hoy y tienes tiempo libre, que deseas hacer?\n");
        printf("1.Ir al bar\n");
        printf("2.Ir con los amigos\n");
        printf("3.Salir\n");
        scanf( "%i", &opc);
        if(opc == 1){
            opc=0;
            printf("LLegas al bar, que deseas hacer?\n");
            printf("1.Ponerse hasta el culo\n");
            printf("2.Tomar un poco\n");
            scanf( "%i", &opc);
            if(opc == 1){
                borracho();
            }
            if(opc == 2){
                opc=0;
                printf("Te tomas una cerveza, que decides hacer despues?\n");
                printf("1.Seguir tomando\n");
                printf("2.Ordenar Comida\n");
                printf("3.Irse del lugar\n");
                scanf( "%i", &opc);
                if(opc == 1){
                    borracho();
                }
                if(opc == 2){
                    opc=0;
                    printf("El mesero trae tu comida y te la comes entera,que haras despues\n");
                    printf("1.Volver a tomar\n");
                    printf("2.Ordenar postre\n");
                    printf("3.Irse del lugar\n");
                    scanf( "%i", &opc);
                    if(opc == 1){
                        borracho();
                    }
                    if(opc == 2){
                        opc=0;
                        printf("Despues de comer ves que no tienes dinero para pagar, y terminas pagando con una noche de pasion con el dueño del lugar\n"); 
                        printf("Fin\n");
                        sleep(4);
                    }
                    if(opc == 3){
                        opc=0;
                        printf("Pides un Uber y regresas a casa\n"); 
                        printf("Fin\n");
                        sleep(3);
                    }
                }
                if(opc == 3){
                    opc=0;
                    printf("Pides un Uber y regresas a casa\n"); 
                    printf("Fin\n");
                    sleep(3);
                }
            }
        }
        if(opc == 2){
            opc=0;
            printf("LLegas con tus amigos y organizas para ser desmadre, que quieres hacer?\n");
            printf("1.Hacer una fiesta\n");
            printf("2.Ir a un Teibol\n");
            scanf( "%i", &opc);
            if(opc == 1){
                opc=0;
                printf("Llegas a la casa de un amigo para comenzar con la fiesta, que deseas hacer?\n");
                printf("1.Drogarte\n");
                printf("2.Tomar\n");
                scanf( "%i", &opc);
                if(opc == 1){
                    opc=0;
                    printf("te das una ralla de perico, que deseas hacer?\n");
                    printf("1.Seguir drogandote\n");
                    printf("2.Irse de la fiesta\n");
                    scanf( "%i", &opc);
                    if(opc == 1 ){
                        opc=0;
                        printf("Como no estas acostrumbrado a tanta droga, mueres por sobredosis\n");
                        printf("Fin\n");
                        sleep(3);
                    }
                    if(opc == 2 ){
                        opc=0;
                        printf("Desides que ya fue suficiente y prefieres irte del lugar, pides un uber y regresas a casa\n");
                        printf("Fin\n");
                        sleep(3);
                    }
                }
                if(opc == 2){
                    opc=0;
                    printf("Te hechas un shot y la fiesta empieza empieza a intensificarse, que deseas hacer?\n");
                    printf("1.Seguir Tomando\n");
                    printf("2.Irse de la fiesta\n");
                    scanf( "%i", &opc);
                    if(opc == 1 ){
                        printf("Te hechas otro shot pero te terminas poniendote pedo\n");
                        printf("Momentos despues empiezas a comportarte de mala copa, y te terminado expulsando de la fiesta\n");
                        printf("No te queda otra opcion mas que quedarte regresar a casa\n");
                        printf("Fin\n");
                        sleep(6);
                    }
                    if(opc == 2 ){
                        opc=0;
                        printf("Decides que ya fue suficiente y prefieres irte del lugar, pides un uber i regresas a casa\n");
                        printf("Fin\n");
                        sleep(4);
                    }
                }
            }
            if(opc == 2){
                opc=0;
                printf("Llegas al teibol y ves que hay un buen ambiente, que deseas hacer?\n");
                printf("1.Disfrutar del espectaculo\n");
                printf("2.Contratar a una chica prepago\n");
                scanf( "%i", &opc);
                if(opc == 1){
                    opc=0;
                    printf("Las bailarinas dan un espectaculo que esta a toda madre, que deseas hacer?\n");
                    printf("1.Seguir disfrutando\n");
                    printf("2.Irse del lugar\n");
                    scanf( "%i", &opc);
                    if(opc == 1){
                        opc=0;
                        printf("Despues de disfrutar por horas, empieza la hora gey en el teibol\n");
                        printf("Quedas horrorizado con lo que acabas de ver y te vas\n");
                        printf("Fin\n");
                        sleep(6);
                    }
                    if(opc == 2){
                        opc=0;
                        printf("Te quedas conforme con lo que viste y procdes a irte del lugar\n");
                        printf("Pides un Uber y regresas a casa\n"); 
                        printf("Fin\n");
                        sleep(4);
                    }
                }
                if(opc == 2){
                    opc=0;
                    printf("Llega la chica prepgo que contrataste y ves que esta demasiado buena, que deseas hacer?\n");
                    printf("1.Dar caricias\n");
                    printf("2.Aventarse una noche de pasion\n");
                    scanf( "%i", &opc);
                    if(opc == 1){
                        opc=0;
                        printf("Terminas tocando de mas y te sacan a patadas\n");
                        printf("Fin\n");
                        sleep(3);
                    }
                    if(opc == 2){
                        opc=0;
                        printf("Despues de la noche de pasion, regresas a casa, tiempo despues te enteras que contraiste sida\n");
                        printf("Fin\n");
                        sleep(5);
                    }   
                }
            }
        }
        if(opc == 3){
            final =0;
        }
    }while(final != 0);
}

void borracho(void){
    int opc=0;
    printf("Por estar tan borracho le tiras la cerveza a alguien y se pone agresivo, que vas a hacer?\n");
    printf("1.Pelear\n");
    printf("2.Disculparse\n");
    printf("3.Huir\n");
    scanf( "%i", &opc);
    if(opc == 1){
        printf("Como estas muy borracho no logras defenderte y te dan una golpiza, y terminas en el hospital\n");
        printf("Fin\n");
        sleep(4);
    }
    if(opc == 2){
        printf("El sujeto decide ignorte y se va\n");
        printf("Te encuentras con un compañero de escuela y el decide llevarte a tu casa por pedo que estas\n");
        printf("Fin\n");
        sleep(4);
    }
    if(opc == 3){
        printf("A duras penas logras salir del lugar, decides regresar caminando a casa\n");
        printf("Alguien llega y te asalta, te deja navajeado en la banqueta y mueres\n");
        printf("Fin\n");
        sleep(4);
    }
}
