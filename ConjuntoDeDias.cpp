#include "ConjuntoDeDias.hpp"

ConjuntoDeDias::ConjuntoDeDias()
{
	compromissos = new Compromisso * [30];
	for (int i = 0; i < 30; i++)
		compromissos[i] = new Compromisso();
}

ConjuntoDeDias::~ConjuntoDeDias()
{
	for (int i = 0; i < 30; i++)
	{
		while (compromissos[i] != nullptr && compromissos[i]->quantidade > 0)
		{
			removerCompromisso(i + 1, compromissos[i]->getHorario());
		}
	}
}

void ConjuntoDeDias::adicionarCompromisso(int dia, std::string horario, std::string descricao) {

	// O dia informado é valido?
	if (dia >= 1 && dia <= 30) {

		// Cada conjunto de dias vai de 0 até 29 (30 dias) por isso subtraimos 1 do dia.
		Compromisso* aux = compromissos[dia - 1];
		Compromisso* novo = new Compromisso(horario, descricao);

		if (aux == nullptr || aux->quantidade == 0)
		{
			compromissos[dia - 1] = novo;
			compromissos[dia - 1]->quantidade = 1;
		}
		else
		{
			// Encontra um compromisso nulo.
			while (aux->prox != nullptr) {
				aux = aux->prox;
			}

			// Quando encontrar uma posicao nula, atribui um novo compromisso.
			aux->prox = novo;
			compromissos[dia - 1]->quantidade++;
		}
	}
}

void ConjuntoDeDias::removerCompromisso(int dia, std::string horario) {

	// O dia informado é valido?
	if (dia >= 1 && dia <= 30) {

		if (compromissos[dia - 1] != nullptr)
		{
			if (compromissos[dia - 1]->quantidade > 0)
			{
				if (compromissos[dia - 1]->getHorario().compare(horario) == 0) {
					int tam = compromissos[dia - 1]->quantidade;
					Compromisso* aSerDeletado = compromissos[dia - 1];
					compromissos[dia - 1] = compromissos[dia - 1]->prox;

					if (compromissos[dia - 1] != nullptr)
						compromissos[dia - 1]->quantidade = tam - 1;

					delete aSerDeletado;
				}
				else
				{
					// Cada conjunto de dias vai de 0 até 29 (30 dias) por isso subtraimos 1 do dia.
					Compromisso* aux = compromissos[dia - 1];
					Compromisso* anterior = compromissos[dia - 1];

					// Verifica se há compromissos agendados para o dia
					if (aux != nullptr) {

						while (aux != nullptr) {

							Compromisso* aSerDeletado = aux;

							// Verifica se o horario do compromisso é o que desejamos
							if (aSerDeletado->getHorario().compare(horario) == 0) {
								anterior->prox = aSerDeletado->prox;
								delete aSerDeletado;
								compromissos[dia - 1]->quantidade--;
								break;
							}
							else {
								anterior = aux;
								aux = aux->prox;
							}
						}
					}
				}
			}
		}
	}
}

Compromisso* ConjuntoDeDias::pegarCompromisso(int dia, std::string horario)
{
	// O dia informado é valido?
	if (dia >= 1 && dia <= 30) {

		// Cada conjunto de dias vai de 0 até 29 (30 dias) por isso subtraimos 1 do dia.
		Compromisso* aux = compromissos[dia - 1];

		// Verifica se há compromissos agendados para o dia
		if (aux != nullptr) {

			while (aux != nullptr) {

				if (aux->getHorario().compare(horario) == 0) {
					return aux;
				}
				else {
					aux = aux->prox;
				}
			}
		}
	}

	// Caso não tenha encontrado nenhum compromisso com o horario
	// informado, retorna nulo.
	return nullptr;
}

Compromisso* ConjuntoDeDias::todosCompromissos(int dia)
{
	// O dia informado é valido?
	if (dia >= 1 && dia <= 30) {

		if (compromissos[dia - 1] != nullptr && compromissos[dia - 1]->quantidade > 0) {

			return compromissos[dia - 1];
		}
	}
	return nullptr;
}
