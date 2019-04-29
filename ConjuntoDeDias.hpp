#include "Compromisso.hpp"

class ConjuntoDeDias {
private:
	Compromisso** compromissos; // Conjunto de Dias � uma tabela com o n�mero de entradas igual ao n�mero de dias do m�s.
public:
	ConjuntoDeDias();
	~ConjuntoDeDias();
	void adicionarCompromisso(int dia, std::string horario, std::string descricao);
	void removerCompromisso(int dia, std::string horario);
	Compromisso* pegarCompromisso(int dia, std::string horario);
	Compromisso* todosCompromissos(int dia);
};