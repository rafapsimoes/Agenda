#include "Compromisso.hpp"

class ConjuntoDeDias {
private:
	Compromisso** compromissos; // Conjunto de Dias é uma tabela com o número de entradas igual ao número de dias do mês.
public:
	ConjuntoDeDias();
	~ConjuntoDeDias();
	void adicionarCompromisso(int dia, std::string horario, std::string descricao);
	void removerCompromisso(int dia, std::string horario);
	Compromisso* pegarCompromisso(int dia, std::string horario);
	Compromisso* todosCompromissos(int dia);
};