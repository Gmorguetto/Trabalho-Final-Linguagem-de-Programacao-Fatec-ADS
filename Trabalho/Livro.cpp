#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    int isbn;
    string genero;
    int quantidade;

public:
    Livro() {

    }

public:
    Livro(const std::string &titulo, const std::string &autor, int isbn, std::string &genero, int quantidade) : titulo(titulo), autor(autor), isbn(isbn), genero(genero), quantidade(quantidade) {}

    void exibirInformacoes() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Genero: " << genero << endl;
        cout << "Quantidade: " << quantidade << endl;
    }

    int getISBN() const {
        return isbn;
    }

    string getAutor() const {
        return autor;
    }

    string getTitulo() const {
        return titulo;
    }

    int& getQuantidade() {
        return quantidade;
    }

    string getGenero() const {
        return genero;
    }
};