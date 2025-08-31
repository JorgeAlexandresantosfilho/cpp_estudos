#include <iostream>
#include <string>
#include <limits> 

class tipos_dados {
public:

    int inteiro = 19;
    bool booleano = true;
    char tipo_char = 'J';
    float flutuante = 1.2f;
    double prec_dupla = 1234.5463;
    std::string texto = "Meu nome eh jorge, meu apelido jorginho"; 


}; // toda classe termina em ponto e virgula


void pegar_dados(){
    int idade;
    std::string nome;


    std::cout << "Iniciando Pegada de dados do usuário\n";
    std::cout << "-------------------------------------------\n";

    std::cout << "Digite sua idade: \n";

    std::cin >> idade;  //para coisas simples sem getline()

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //limpa o buffer de entrada

    std::cout << "Digite seu nome completo: \n";
    std::getline(std::cin, nome);

    std::cout << "\nObrigado! Os dados recebidos foram:\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Idade: " << idade << " anos\n";
    std::cout << "--------------------------------------------\n\n";

}


int main() {
    std::cout << "Jorge Alexandre\n";

    std::cout << "Meu nome eh jorge e eu tenho 19 anos de idade\n";


    pegar_dados();

    // objeto para classe tipos_dados

    tipos_dados meus_dados;

    std::cout <<  "Imprimindo os tipos de dados\n";

    std::cout <<  "-----------------------------------------------------------------------------------\n";

    std::cout << meus_dados.booleano << "\n";
    std::cout << meus_dados.flutuante << "\n";
    std::cout << meus_dados.inteiro << "\n";
    std::cout << meus_dados.prec_dupla << "\n";
    std::cout << meus_dados.texto << "\n";
    std::cout << meus_dados.tipo_char << "\n";
    
    
    std::cout << "\n Programa sendo finalizado...Obrigado\n -----------------------------------------------------\n";


    system("pause");
    return 0;
 }

