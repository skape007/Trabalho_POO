//
// Created by Antonio Gomes on 29/11/2016.
//

#include "Interface.h"


void Interface::arranqueUI(void) {

    Interface ui;
    ui.arranqueReal();

}

void Interface::arranqueReal() {

    c.setScreenSize(40,100);
    int opcao;
    cout << "DEBUG ----> estou vivo" << endl;
    // todo desenharBoasVindas();
    opcao = desenharMenuPrincipal();
    switch (opcao) {
        case 0:// sair
            exit(0);
            break;
        case 1: // comeca jogo
            recolheDados();//
            Jogo::iniciaJogo(this);
            break;
        case 2:// load jogo

            break;
        case 3:// outros

            break;
    }

}

int Interface::desenharMenuPrincipal() {

    int opcao;
    do {
        cout << "DIGITE 1 PARA INICIAR JOGO" << endl;
        cout << "DIGITE 2 CARREGAR JOGO" << endl;
        cout << "DIGITE 0 PARA SAIR" << endl;
        cout << endl;
        cout << ": ";
        cin >> opcao;
        if (opcao > 2 || opcao < 0) {
            cout << "INSIRA UMA DAS OCPOES VALIDAS PF" << endl;
            cout << endl;
        }
    } while (opcao > 2 || opcao < 0);

    return opcao;
}

void Interface::recolheDados() {

/*    string tempNome;
    do {
        cout << "insira o numero de jogadores (2 -> 10)" << endl;
        cout << ": " ;
        cin >> numeroJogadores;
    }while (numeroJogadores < 2 || numeroJogadores > 10);

    do{
        cout << "insira o mone para a colonia";
        cout << ": " ;
        cin >> tempNome;
        nomesColonias.push_back(tempNome);
    }while(nomesColonias.size()< numeroJogadores+1);

    do{
        cout << "Insira numero inicial de moedas (100 -> 10000)" << endl;
        cout << ": " ;
        cin >> numeroInicialMoedas;
    }while(numeroInicialMoedas < 100 || numeroInicialMoedas > 10000);

    do {
        cout <<  "Insira o numero inicial de Linhas do mapa (10 ->50)" << endl;
        cout << ": " ;
        cin >> tamanhoMapaLinhas;
    }while(tamanhoMapaLinhas < 10 || tamanhoMapaLinhas > 50);

    do {
        cout <<  "Insira o numero inicial de Linhas do mapa (10 ->50)" << endl;
        cout << ": " ;
        cin >> tamanhoMapaColunas;
    }while(tamanhoMapaColunas < 10 || tamanhoMapaColunas > 50);*/

    // todo: inserir texto auxiliar

    this->numeroJogadores = 2;
    this->nomesColonias.push_back("colonia1");
    this->nomesColonias.push_back("colonia2");
    this->numeroInicialMoedas = 100;
    this->tamanhoMapaColunas = (10* 2) + 1;
    this->tamanhoMapaLinhas = (7 * 2) + 1;


}

int Interface::getNumeroJogadores() const {
    return numeroJogadores;
}

const vector <string> &Interface::getNomesColonias() const {
    return nomesColonias;
}

int Interface::getTamanhoMapaLinhas() const {
    return tamanhoMapaLinhas;
}

int Interface::getTamanhoMapaColunas() const {
    return tamanhoMapaColunas;
}

int Interface::getNumeroInicialMoedas() const {
    return numeroInicialMoedas;
}

void Interface::desenhaMapa(Celula **mapa) {

    int indiceX = 0;
    int indiceY = 0;
    c.clrscr(); // limpa encra
    c.gotoxy(0,0); // ir para o inicio do ecran

    //todo: resolver o indice quando os numeros tem 2 digitos
    //todo: resolver os alinhamentos

    // zoom = 0

    //todo: fazer o desenha por cima
    //todo: fazer controla o mapa com o teclado

   for (int i = 0; i < tamanhoMapaLinhas; i++) {
       for (int j = 0; j < tamanhoMapaColunas; j++) {
           if (i == 0 && j == 0) {
               cout << "   ";
           }
           if (i == 0 && j != 0) {
               c.setTextColor(c.VERMELHO_CLARO);
               cout << indiceX;
               if (j < 11 ){
                  cout << " ";
               }
               c.setTextColor(c.BRANCO);
               indiceX++;
           }
           if (j == 0 && i != 0) {
               c.setTextColor(c.VERMELHO_CLARO);
               cout << indiceY;
                    if (i<11){
                        cout<< "  ";
                    }else{
                        cout<< " ";
                    }
               c.setTextColor(c.BRANCO);
               indiceY++;
           }
           if (j != 0 && i != 0) {
               if (j == 3 && i == 2) {
                   mapa[2][3].setFlagOcupada(1);
               }
               if (mapa[i][j].getFlagOcupada() == 1) {
                   c.setBackgroundColor(c.AMARELO);
                   // todo função para ir a jogo-> colonia-> ElementosJogo -> char
                   getID();
                   cout << mapa[i][j].getFlagOcupada();
                   c.setBackgroundColor(c.VERDE);
               }
               if (mapa[i][j].getFlagOcupada() == 0) {
                   c.setBackgroundColor(c.VERDE);
                   c.setTextColor(c.VERDE);
                   cout << mapa[i][j].getFlagOcupada();
                   c.setBackgroundColor(c.VERDE);
                   c.setTextColor(c.BRANCO);
               }

               // c.setBackgroundColor(c.VERDE);
               // cout << mapa[i][j].getFlagOcupada() << " ";
               cout << " ";
               c.setBackgroundColor(c.AZUL);
           }
       }
       cout << endl;
   }
       // zoom = 1

       /*   for (int i = 0; i < tamanhoMapaLinhas; i++) {
              for (int j = 0; j < tamanhoMapaColunas; j++) {
                  if (i == 0 && j == 0) {
                      cout << " ";
                  }
                  if (i == 0 && j != 0) {
                      if (j % 2 == 0) {
                          cout << indiceX << " ";
                          c.setTextColor(c.BRANCO);
                          indiceX++;
                      } else {
                          c.setTextColor(c.VERMELHO_CLARO);
                          cout << "  ";
                      }
                  }
                  if (j == 0 && i != 0) {
                      if (i % 2 == 0) {
                          c.setTextColor(c.VERMELHO_CLARO);
                          cout << indiceY << " ";
                          c.setTextColor(c.AMARELO);
                          indiceY++;
                      } else {
                          cout << "  ";
                      }

                  }
                  if (j != 0 && i != 0) {
                      if (mapa[i][j].getFlagOcupada() != 0) {
                          //mapa[i][j]. -> char;
                          //mapa[i][j]. -> cor ;
                      }
                      // cout << mapa[i][j].getCorCelula() << " ";
                      // cout << mapa[i][j].getFlagOcupada() << " ";
                      c.setBackgroundColor(c.VERDE);
                      cout << "  ";
                      c.setBackgroundColor(c.AZUL);
                  }
              }
              cout << endl;
          }
      */


}
//todo: inserir os get para os conteudo nas celulas
//todo: mapa de cores


// recebe o comando e envia-o para ao fazer jogada
string Interface::recebeComando() {

    cout << "insira comando: ";
    string frase = " ", comando = " ", arg1 = " ", arg2, arg3, arg4, nada, res = " ", id;
    int maxX = 50, maxY = 50;
    comando = " ";
    arg1 = "nada";
    arg2 = "nada";
    arg3 = "nada";
    arg4 = "nada";
    nada = "nada";

    do {
        getline(cin, frase);
        istringstream is(frase);
        is >> comando >> arg1 >> arg2 >> arg3 >> arg4 >> nada;

        if (comando == "foco") {
            cout << "Defina o foco do ecra" << endl;
        }
        if (comando == "zoomout") {
            cout << "Zoom " << endl;
        }
        if (comando == "setmoedas") {
            cout << "Numero de moedas alterado!" << endl;
        }
        if (comando == "build") {
            cout << "Edificio construido!" << endl;
        }
        if (comando == "list") {
            cout << "Lista de info da colonia" << endl;
        }
        if (comando == "listp") {
            cout << "Detalhes do perfil" << endl;
        }
        if (comando == "listallp") {
            cout << "Detalhe de todos os perfil" << endl;
        }
        if (comando == "mkbuild") {
            cout << "Inserido edificio teste" << endl;
        }
        if (comando == "repair") {
            cout << "Edificio reparado" << endl;
        }
        if (comando == "upgrade") {
            cout << "Edificio foi upgraded" << endl;
        }
        if (comando == "sell") {
            cout << "Edificio vendido!!" << endl;
        }
        if (comando == "ser") {
            cout << "Ser ou seres criados!" << endl;
        }
        if (comando == "next") {
            cout << "avancei 1 intante" << endl;
        }
        if (comando == "nextn") {
            cout << "avançou " << arg1 << "instantes!" << endl;
        }
        if (comando == "ataca") {
            cout << "Todos ao ataque" << endl;
        }
        if (comando == "recolhe") {
            cout << "Todos a voltar ao castelo" << endl;
        }
        if (comando == "fim") {
            cout << "Acabou a simulacao!" << endl;
        }
        if (comando == "save") {
            cout << "copia para a memoria" << endl;
        }
        if (comando == "restore") {
            cout << "Repos jogo" << endl;
        }
        if (comando == "erase") {
            cout << "Eliminou copia" << endl;
        }
        if (comando == "load") {
            cout << "Carregado do ficheiro!" << endl;
        }
    } while (1);

//    cin >> comando;
//    return comando;
}

/*int Interface::recebeCarateristicaSer(){
    return carateristica;
}*/

void Interface::listaCareteristicasSer() {


    int contaTiposSer = 0;
    int contaTiposSer1 = 0;
    char temp[1];
    int moedas = 10;
    int forca = 10;
    int merda = 10;
    int id;
    int saude = 0;
    int defesa = 0;
    int ataque = 0;
    int contador_espada = 0;
    int flag_remedio = 0;
    int flag_second_chance = 0;
    //todo ver a recolha de informção
    do {
        cout << "ESCOLHA UMA LETRA PARA IDENTIFICAR O SER " << endl;
        cin >> temp;

        //todo verificar se o carater já esta a ser usado

        do {
            cout << "PARA ESCOLHER AS CARATERISTICAS" << endl;
            cout << "INDIQUE AS CARATERISTICAS PELO ID DAS MESMAS " << endl;
            cout << "numero moedas " << moedas << " numero forca " << forca << endl;
            cout << "ID 1 Bandeira - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 2 Superior - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 3 Pele dura - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 4 Armadura - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 5 Faca - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 6 Espada - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 7 Agressao - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 8 Ecologico - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 9 Heatseeker - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 10 BuildSeker - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 11 Walker - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 12 Remedio - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 13 SecondChance - moedas -> 1, forca -> 0 " << endl;
            cout << "ID 14 Aluno - moedas -> 1, forca -> 0 " << endl;
            cout << "QUANDO NAO QUIZER MAIS CARACETERISTICAS INTRODUZA 0" << endl;
            cin >> id;
            moedas = moedas - caracteristicas[id - 1][0];
            forca = forca - caracteristicas[id - 1][1];

            if (id == 1) { saude = saude + 1; }

            if (id == 2) { defesa = defesa + 1; }

            if (id == 3) { defesa = defesa + 2; }

            if (id == 4) { ataque = ataque + 1; }

            if (id == 5) {
                ataque = ataque + 2;
                contador_espada = contador_espada + 2;
            }

            /*  if (id == 6){// flag agressao enimigos;}

              if (id == 7){// flag agressao edificios;}

              if (id == 8){// ver como se faz}

              if (id == 9){// ver como se faz}

              if (id == 10){// ver como se faz}*/

            if (id == 11) { flag_remedio = flag_remedio + 1; }

            if (id == 12) { flag_second_chance = flag_second_chance + 1; }

            if (moedas == 0 || id == 0) {
                criaSerBase();
                // preencher dados no vector
            }

        } while (moedas > 0 && forca >= 0 && id != 0);

        contaTiposSer1++;

    } while (contaTiposSer1 < 1);

}


void Interface::instrucoes() {

    int escolha;
    int flag = 0;

    cout << "CADA SER TEM 10 PONTOS DE FORCA" << endl;
    cout << "CADA CARATERISTICA TEM UM CUSTO EM FORCA E MOEDAS " << endl;
    cout << "TEM 5 TIPOS DE SERES PARA CONFIGURAR" << endl;
    cout << "PENSE BEM ANTES DE ESCOLHER" << endl;
    cout << endl;
    do {
        cout << "PARA CARREGAR CONFIGURACOES PRIMA A TECLA 1" << endl;
        cout << "PARA PERSONALIZAR CONFIGURACOES PRIMA A TECLA 2" << endl;
        cout << ":";
        cin >> escolha;

        if (escolha == 1 && flag == 0) {
            // ler ficheiro de configuração
        }
        if (escolha == 2 && flag == 0) {
            //todo fazer a configuração de ser
            listaCareteristicasSer();
            flag++;
        }

    } while (flag == 0);

}

void Interface::criaSerBase() {

    Ser *c = new Ser();
    vectorSeresBase.push_back(c);
}

void Interface::menuJogo() {

/*    cout << "" << endl;
    cout << "CADA CARATERISTICA TEM UM CUSTO EM FORCA E MOEDAS " << endl;
    cout << "TEM 5 TIPOS DE SERES PARA CONFIGURAR" << endl;
    cout << "PENSE BEM ANTES DE ESCOLHER" << endl;
    cout << endl;*/

}

