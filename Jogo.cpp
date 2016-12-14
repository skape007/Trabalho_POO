//
// Created by Antonio Gomes on 29/11/2016.
//

// todo save game
// todo erase game salvo
#include "Jogo.h"
#include "Interface.h"

void Jogo::iniciaJogo(Interface *ui) {

    Jogo jogoActual;
    jogoActual.arranqueReal(ui);
}

void Jogo::arranqueReal(Interface *ui) {

    this->ui = ui;
    cout << " ---->estou vivo arranqueReal<-----" << endl << endl;
    inicializaJogo();
    cicloPrincipal();
}

void Jogo::criaMapa() {

    int nColunas = ui->getTamanhoMapaColunas();
    int nLinhas = ui->getTamanhoMapaLinhas();

    mapa = new Celula *[nColunas];
    for (int i = 0; i < nLinhas; i++) {
        mapa[i] = new Celula[nColunas];
    }

    //ElementoJogo::getID();
    //todo: como se escala



 /*   for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            if (nLinhas % 2 != 0 || nColunas % 2 != 0) {
                if (i + 1 % 2 == 0) {
                    mapa[i][j].setCorFundoCelula(1);
                    if (j + 1 % 2 == 0) {
                        mapa[i][j].setCorFundoCelula(Console::AMARELO);
                        cout << "tentei1";
                    } else {
                        mapa[i][j].setCorFundoCelula(Console::AZUL);
                        cout << "tentei2";
                    }
                }

            }
        }
    }*/
}

void Jogo::inicializaJogo() {

    criaMapa();
    // todo: inicializar as colonias
}

void Jogo::cicloPrincipal() {

    while (1) {
        cout << "-----> cheguei ao ciclo principal <------" << endl << endl;
         ui->instrucoes();
        // atualizar o ecran ui->configuraSer();
        // meter aqui um edificio
        inicializaColonia();
        ui->desenhaMapa(mapa);
        ui->recebeComando();
        // recolher a jogada
        // fazer a jogada
        // ver se o jogo acabou

        system("PAUSE");
        exit(0);
    }
}
void Jogo::inicializaColonia(){


    Colonia *colonia = new Colonia();
    colonias.push_back(colonia);


         //todo ver

    //todo ver a inicialização
}

void Jogo::movimentoSer(){
/*
    // antes desta função tem de existir uma que corre todos os seres que fazem parte da colonia
     for (int i=0; i<colonias.size() ; i++){
            for (int j =0; colonias[i].)
     }


    for (int i =0 ; i < scope+2 ; i++ ){ // rever os valores para a adicionar ao scope -> if(zoom =1 ) -> if (zoom)
        for (int j =0 ; i < scope+2 ; j++ ){
            if ( flagOcupada()!=0 ){
                // aqui vejo se a ao lado dos ser existe algo
                if ( != ){ // se os ponteiros forem igual é amigo senão e inimigo

                    // se inimigo -> ver o tipo de ser

                    // se tipo que ataca -> contabilidade de pontos de ataque e vida

                    // se não ataca ver o que faz

                } // ou comparamos os ponteiros ou criamos um id colonia
            }
        }
    }*/
    // se a celula esta ocupada
    // se esta ao pe de um inimigo
    // se perto de um inimigo -> scope x celulas
    // se nas x celunas em todas as direcçoes não existe nada
    // se comando ataque -> ataca o item da lista mais perto
    // se comando retirar -> vai para o castelo

}
/*void Jogo::adicionaColonia(){

    colonias.push_back(Colonia());

}*/





