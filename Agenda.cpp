#include <iostream>
#include <fstream>

#include "ConjuntoDeDias.hpp"

using namespace std;

int main() {

	ConjuntoDeDias* jan = new ConjuntoDeDias();
	ConjuntoDeDias* fev = new ConjuntoDeDias();
	ConjuntoDeDias* mar = new ConjuntoDeDias();
	ConjuntoDeDias* abr = new ConjuntoDeDias();
	ConjuntoDeDias* mai = new ConjuntoDeDias();
	ConjuntoDeDias* jun = new ConjuntoDeDias();
	ConjuntoDeDias* jul = new ConjuntoDeDias();
	ConjuntoDeDias* ago = new ConjuntoDeDias();
	ConjuntoDeDias* set = new ConjuntoDeDias();
	ConjuntoDeDias* out = new ConjuntoDeDias();
	ConjuntoDeDias* nov = new ConjuntoDeDias();
	ConjuntoDeDias* dez = new ConjuntoDeDias();

	int opcao = 0;

	do {

		std::cout << "1. Abrir a Agenda (cria as estruturas e armazenas os dados salvos anteriormente,se houver)" << std::endl;
		std::cout << "2. Insere compromisso" << std::endl;
		std::cout << "3. Remove compromisso" << std::endl;
		std::cout << "4. Lista compromissos" << std::endl;
		std::cout << "5. Verifica se existe compromisso agendado (dado dia e hora)" << std::endl;
		std::cout << "6. Fecha Agenda" << std::endl;
		cin >> opcao;

		if (opcao == 1) {

			string nome;
			std::cout << "Nome do arquivo: " << std::endl;
			cin >> nome;

			ifstream entrada;
			entrada.open(nome);

			if (entrada.is_open()) {

				int mes = 0;
				int dia = 0;
				string horario = "";
				char descricao[256] = "";

				while (!entrada.eof())
				{
					entrada >> dia >> mes >> horario;
					entrada.getline(descricao, 256);

					if (mes == 1) {
						jan->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 2) {
						fev->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 3) {
						mar->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 4) {
						abr->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 5) {
						mai->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 6) {
						jun->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 7) {
						jul->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 8) {
						ago->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 9) {
						set->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 10) {
						out->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 11) {
						nov->adicionarCompromisso(dia, horario, descricao);
					}
					else if (mes == 12) {
						dez->adicionarCompromisso(dia, horario, descricao);
					}
				}

				entrada.close();
			}
		}
		else if (opcao == 2) {

			int mes = 0;
			int dia = 0;
			char horario[256] = "";
			char descricao[256] = "";

			cout << "Dia" << endl;
			cin >> dia;

			cout << "Mes" << endl;
			cin >> mes;

			cout << "Horario" << endl;
			cin.ignore();
			cin.getline(horario, 256);

			cout << "Descrição" << endl;
			cin.getline(descricao, 256);

			if (mes == 1) {
				jan->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 2) {
				fev->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 3) {
				mar->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 4) {
				abr->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 5) {
				mai->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 6) {
				jun->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 7) {
				jul->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 8) {
				ago->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 9) {
				set->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 10) {
				out->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 11) {
				nov->adicionarCompromisso(dia, horario, descricao);
			}
			else if (mes == 12) {
				dez->adicionarCompromisso(dia, horario, descricao);
			}
		}
		else if (opcao == 3) {

			int mes = 0;
			int dia = 0;
			char horario[256] = "";

			cout << "Dia" << endl;
			cin >> dia;

			cout << "Mes" << endl;
			cin >> mes;

			cout << "Horario" << endl;
			cin.ignore();
			cin.getline(horario, 256);

			if (mes == 1) {
				jan->removerCompromisso(dia, horario);
			}
			else if (mes == 2) {
				fev->removerCompromisso(dia, horario);
			}
			else if (mes == 3) {
				mar->removerCompromisso(dia, horario);
			}
			else if (mes == 4) {
				abr->removerCompromisso(dia, horario);
			}
			else if (mes == 5) {
				mai->removerCompromisso(dia, horario);
			}
			else if (mes == 6) {
				jun->removerCompromisso(dia, horario);
			}
			else if (mes == 7) {
				jul->removerCompromisso(dia, horario);
			}
			else if (mes == 8) {
				ago->removerCompromisso(dia, horario);
			}
			else if (mes == 9) {
				set->removerCompromisso(dia, horario);
			}
			else if (mes == 10) {
				out->removerCompromisso(dia, horario);
			}
			else if (mes == 11) {
				nov->removerCompromisso(dia, horario);
			}
			else if (mes == 12) {
				dez->removerCompromisso(dia, horario);
			}
		}
		else if (opcao == 4) {

			int mes = 0;

			cout << "Mes" << endl;
			cin >> mes;

			if (mes == 1) {

				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Janeiro" << endl;
					Compromisso * dia = jan->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 2) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Fevereiro" << endl;
					Compromisso * dia = fev->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 3) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Março" << endl;
					Compromisso * dia = mar->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 4) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Abril" << endl;
					Compromisso * dia = abr->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 5) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Maio" << endl;
					Compromisso * dia = mai->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 6) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Junho" << endl;
					Compromisso * dia = jun->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 7) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Julho" << endl;
					Compromisso * dia = jul->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 8) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Agosto" << endl;
					Compromisso * dia = ago->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 9) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Setembro" << endl;
					Compromisso * dia = set->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 10) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Outubro" << endl;
					Compromisso * dia = out->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 11) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Novembro" << endl;
					Compromisso * dia = nov->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
			else if (mes == 12) {
				for (int i = 0; i < 30; i++)
				{
					cout << (i + 1) << " de Dezembro" << endl;
					Compromisso * dia = dez->todosCompromissos(i + 1);

					if (dia != nullptr)
					{
						Compromisso* aux = dia;
						for (int i = 0; i < dia->quantidade; i++)
						{
							cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
							aux = aux->prox;
						}
					}
				}
			}
		}
		else if (opcao == 5) {

			int mes = 0;
			int dia = 0;
			char horario[256] = "";

			cout << "Dia" << endl;
			cin >> dia;

			cout << "Mes" << endl;
			cin >> mes;

			cout << "Horario" << endl;
			cin >> horario;

			Compromisso* aux = nullptr;

			if (mes == 1) {
				aux = jan->pegarCompromisso(dia, horario);
			}
			else if (mes == 2) {
				aux = fev->pegarCompromisso(dia, horario);
			}
			else if (mes == 3) {
				aux = mar->pegarCompromisso(dia, horario);
			}
			else if (mes == 4) {
				aux = abr->pegarCompromisso(dia, horario);
			}
			else if (mes == 5) {
				aux = mai->pegarCompromisso(dia, horario);
			}
			else if (mes == 6) {
				aux = jun->pegarCompromisso(dia, horario);
			}
			else if (mes == 7) {
				aux = jul->pegarCompromisso(dia, horario);
			}
			else if (mes == 8) {
				aux = ago->pegarCompromisso(dia, horario);
			}
			else if (mes == 9) {
				aux = set->pegarCompromisso(dia, horario);
			}
			else if (mes == 10) {
				aux = out->pegarCompromisso(dia, horario);
			}
			else if (mes == 11) {
				aux = nov->pegarCompromisso(dia, horario);
			}
			else if (mes == 12) {
				aux = dez->pegarCompromisso(dia, horario);
			}

			if (aux != nullptr) {
				cout << aux->getHorario() << "\t" << aux->getDescricao() << endl;
			}
			else {
				cout << "Nenhum compromisso encontrado!" << endl;
			}
		}
		else if (opcao == 6) {

			string nome;

			std::cout << "Nome do arquivo: " << std::endl;
			cin >> nome;

			ofstream saida;
			saida.open(nome);

			if (saida.is_open()) {

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = jan->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 1 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = fev->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 2 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = mar->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 3 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = abr->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 4 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = mai->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 5 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = jun->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 6 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = jul->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 7 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = ago->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 8 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = set->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 9 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = out->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 10 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = nov->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 11 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}

				for (int i = 0; i < 30; i++)
				{
					Compromisso* dia = dez->todosCompromissos(i + 1);

					if (dia != nullptr && dia->quantidade > 0)
					{
						Compromisso* aux = dia;
						for (int c = 0; c < dia->quantidade; c++)
						{
							saida << i + 1 << " " << 12 << " " << aux->getHorario() << " " << aux->getDescricao() << "\n";
							aux = aux->prox;
						}
					}
				}
			}
		}

	} while (opcao != 6);

	delete jan;
	delete fev;
	delete mar;
	delete abr;
	delete jun;
	delete jul;
	delete ago;
	delete set;
	delete out;
	delete nov;
	delete dez;

	return 0;
}