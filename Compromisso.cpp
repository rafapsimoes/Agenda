#include "Compromisso.hpp"

Compromisso::Compromisso()
{
	this->horario = "";
	this->descricao = "";
	this->quantidade = 0;
}

std::string Compromisso::getHorario(){
	return this->horario;
}

std::string Compromisso::getDescricao(){
	return this->descricao;
}
