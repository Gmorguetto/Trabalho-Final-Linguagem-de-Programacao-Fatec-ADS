#include <iostream>
#include <string>

int opcao = 0;
int opcao_livro = 0;
int opcao_usuario = 0;

using namespace std;

int menu()
{
   system("cls"); // limpa o cmd toda vez que volta para esse menu
   cout << ".:: SISTEMA BIBLIOTECA ::.\n";
   cout << "[ 1 ] Cadastro de livros \n";
   cout << "[ 2 ] Cadastro de usuarios \n";
   cout << "[ 3 ] Emprestimo e devolucao \n";
   cout << "[ 4 ] Busca e filtragem \n";
   cout << "[ 5 ] Relatorio \n";
   cout << "[ 6 ] Fim do App \n";
   cout << "\nOpcao: ";
   cin >> opcao;
   return opcao;
}

// Menu de cadastro de livros
int menu_cadastro_livro()
{
   cout << "\n.:: MENU DA BIBLIOTECA ::.\n";
   cout << "[ 1 ] Adicionar Livro \n";
   cout << "[ 2 ] Exibir Livros \n";
   cout << "[ 3 ] Remover Livros \n";
   cout << "[ 4 ] Voltar ao menu principal \n";
   cout << "\nOpcao: ";
   cin >> opcao_livro;
   return opcao_livro;
}

// menu de cadastro de usuario
int menu_cadastro_usuario()
{
   cout << "\n.:: MENU DA BIBLIOTECA ::.\n";
   cout << "[ 1 ] Adicionar Usuario \n";
   cout << "[ 2 ] Voltar ao menu principal \n";
   cout << "\nOpcao: ";
   cin >> opcao_usuario;
   return opcao_usuario;
}