#include <string>

class Compromisso {
private:
	std::string horario;
	std::string descricao;
public:
	Compromisso();
	Compromisso(std::string h, std::string d) : horario(h), descricao(d) {}

	Compromisso* prox = nullptr;	// Apontador de encadeamento dos Compromissos do dia
	int quantidade = 0;				// Quantidade de compromissos no dia

	std::string getHorario();		// Hora do compromisso
	std::string getDescricao();		// Descrição do compromisso
};