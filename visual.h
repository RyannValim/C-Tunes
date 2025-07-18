#include <stdio.h>   
#include <stdlib.h>  
#include <string.h>  
#include <windows.h>

// Cabeçalho - Intro: será mostrada somente na primeira abertura do programa.
void cabecalhoIntro()
{
    printf("\033[H\033[J");
    printf("======================================================================================================\n");Sleep(100);
    printf("|                                                                                                    |\n");Sleep(100);
    printf("|                                                                                   !                |\n");Sleep(100);
    printf("|                                                                                   |    |~/         |\n");Sleep(100);
    printf("|                                                                                   |   _|~          |\n");Sleep(100);
    printf("|                                                                     .============.|  (_|   |~/     |\n");Sleep(100);
    printf("|                                                                   .-;____________;|.      _|~      |\n");Sleep(100);
    printf("|      _____         _                                              | [_________I__] |     (_|       |\n");Sleep(100);
    printf("|     | ____|       | |                                             |  ''''' (_) (_) |               |\n");Sleep(100);
    printf("|     | |   ______  | |_ _   _ _ __   ___ ___                       | .=====..=====. |               |\n");Sleep(100);
    printf("|     | |  |______| | __| | | | '_ | / _ | __|                      | |:::::||:::::| |               |\n");Sleep(100);
    printf("|     | |___        | |_| |_| | | | |  __|__ |                      | '=====''=====' |               |\n");Sleep(100);
    printf("|     |_____|       |__||__,__|_| |_||___|___/                      '----------------'               |\n");Sleep(100);
    printf("|                                                                                                    |\n");Sleep(100);
    printf("======================================================================================================\n");
    Sleep(200);
}

// Cabeçalho: será mostrado toda vez que o menu inicial precisar ser atualizado.
void cabecalho()
{
    printf("\033[H\033[J");
    printf("======================================================================================================\n");
    printf("|                                                                                                    |\n");
    printf("|                                                                                   !                |\n");
    printf("|                                                                                   |    |~/         |\n");
    printf("|                                                                                   |   _|~          |\n");
    printf("|                                                                     .============.|  (_|   |~/     |\n");
    printf("|                                                                   .-;____________;|.      _|~      |\n");
    printf("|      _____         _                                              | [_________I__] |     (_|       |\n");
    printf("|     | ____|       | |                                             |  ''''' (_) (_) |               |\n");
    printf("|     | |   ______  | |_ _   _ _ __   ___ ___                       | .=====..=====. |               |\n");
    printf("|     | |  |______| | __| | | | '_ | / _ | __|                      | |:::::||:::::| |               |\n");
    printf("|     | |___        | |_| |_| | | | |  __|__ |                      | '=====''=====' |               |\n");
    printf("|     |_____|       |__||__,__|_| |_||___|___/                      '----------------'               |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
    Sleep(200);
}

// Cabecalho da parte interna do aplicativo.
void cabecalhoParteInterna(){
    cabecalho();
    printf("|                                                                                                    |\n");
    printf("|              Esta seria a parte interna do aplicativo, com a interface para tocar musicas          |\n");
    printf("|                                                                                                    |\n");
    printf("|             Aqui, a partir de uma biblioteca o usuario poderia escolher musicas e faze-las         |\n");
    printf("|              tocar, tipo um player. Pretendemos expandir o projeto mais para frente, pois          |\n");
    printf("|                  achar um jeito de fazer a musica tocar conforme a playlist do usuario             |\n");
    printf("|                                   nao foi tao facil quanto pensamos.                               |\n");
    printf("|                                                                                                    |\n");
    printf("|                                   Aperte '0' para voltar para o menu                               |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
}

// Menu de escolhas será atualizado enquanto o usuário estiver navegando pelo menu inicial.
void escolhas()
{
    printf("|                                                                                                    |\n");
    printf("|              [1] Login                                                                             |\n");
    printf("|              [2] Criar Conta                                                                       |\n");
    printf("|              [3] Entrar como convidado                                                             |\n");
    printf("|              [4] Entrar como administrador                                                         |\n");
    printf("|              [5] Sobre o aplicativo                                                                |\n");
    printf("|                                                                                                    |\n");
    printf("|              [0] Sair                                                                              |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
}

// O menu de escolhas será mostrado atualizado sempre que o usuário digitar uma opção que não esteja presente no switch-case.
void escolhaErrada()
{
    system("cls");
    cabecalho();
    printf("|                                                                                                    |\n");
    printf("|                    Voce selecionou uma opcao errada. Por favor, tente novamente!                   |\n");
    printf("|                                                                                                    |\n");
    printf("|              [1] Login                                                                             |\n");
    printf("|              [2] Criar Conta                                                                       |\n");
    printf("|              [3] Entrar como convidado                                                             |\n");
    printf("|              [4] Entrar como administrador                                                         |\n");
    printf("|              [5] Sobre o aplicativo                                                                |\n");
    printf("|                                                                                                    |\n");
    printf("|              [0] Sair                                                                              |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
}

// Caso nenhuma conta tenha sido cadastrada ainda ou o arquivo "usuário.dat" não exista, essa função será utilizada.
void nenhumaContaCadastrada()
{
    system("cls");
    cabecalho();
    printf("|                                                                                                    |\n");
    printf("|                Nao existem contas criadas ainda. Por favor, cadastre uma nova conta!               |\n");
    printf("|                                                                                                    |\n");
    printf("|              [1] Login                                                                             |\n");
    printf("|              [2] Criar Conta                                                                       |\n");
    printf("|              [3] Entrar como convidado                                                             |\n");
    printf("|              [4] Entrar como administrador                                                         |\n");
    printf("|              [5] Sobre o aplicativo                                                                |\n");
    printf("|                                                                                                    |\n");
    printf("|              [0] Sair                                                                              |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
}

// Caso o usuário digite a opção '0' no menu inicial o programa finaliza.
void finalizarPrograma()
{
    cabecalho();
    printf("|                                                                                                    |\n");
    printf("|                                 Muito obrigado e ate uma proxima vez!                              |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
    Sleep(500);
    exit(0); // Finaliza o programa
}

// Informações para o cadastro de um novo usuário.
void infoCadastro()
{
    cabecalho();
    printf("|                                                                                                    |\n");
    printf("|                     Digite o numero '0' no campo 'E-mail' para voltar ao menu.                     |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
}

// Função que mostra o cabeçalho do menu sobre o aplicativo.
void cabecalhoSobreAplicativo(){
    cabecalho();
    printf("|                                                                                                    |\n");
    printf("|               Bem-vindo ao nosso aplicativo CTunes, um Music Player inteiro em C!                  |\n");
    printf("|                                                                                                    |\n");
    printf("|       Somos um grupo de tres estudantes do 2o periodo de Ciencia da Computacao na UP:              |\n");
    printf("|                    Lucas Haboski, Ryann Valim e Christian Andrade.                                 |\n");
    printf("|                                                                                                    |\n");
    printf("|        Nosso app permite que voce cadastre usuarios, crie playlists e curta suas musicas!          |\n");
    printf("|                                                                                                    |\n");
    printf("|                                                                                                    |\n");
    printf("|                             Aperte (0) para voltar para o Menu                                     |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
}

// Função que acessa o programa como convidado.
void acessarConvidado()
{
    cabecalho();
    printf("|                                                                                                    |\n");
    printf("|                Seja vem vindo convidado! Voce sera redirecionado em instantes.                     |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
    Sleep(3000);
}

// Função que será usada para as escolhas do administrador.
void escolhasAdmin()
{
    system("cls");
    cabecalho();
    printf("|                                                                                                    |\n");
    printf("|              [1] Listar usuarios                                                                   |\n");
    printf("|              [2] Excluir uma conta                                                                 |\n");
    printf("|              [3] Desativar uma conta                                                               |\n");
    printf("|              [4] Procurar por um usuario                                                           |\n");
    printf("|                                                                                                    |\n");
    printf("|              [0] Sair                                                                              |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
}

// Para caso o admin escolha uma opção errada.
void escolhasAdminErrada()
{
    system("cls");
    cabecalho();
    printf("|                                                                                                    |\n");
    printf("|                    Voce selecionou uma opcao errada. Por favor, tente novamente!                   |\n");
    printf("|                                                                                                    |\n");
    printf("|              [1] Listar usuarios                                                                   |\n");
    printf("|              [2] Excluir uma conta                                                                 |\n");
    printf("|              [3] Desativar uma conta                                                               |\n");
    printf("|              [4] Procurar por um usuario                                                           |\n");
    printf("|                                                                                                    |\n");
    printf("|              [0] Sair                                                                              |\n");
    printf("|                                                                                                    |\n");
    printf("======================================================================================================\n");
}

