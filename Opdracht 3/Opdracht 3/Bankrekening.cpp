#include "Bankrekening.h"
#include <iostream>

Bankrekening::Bankrekening()
{
}

Bankrekening::Bankrekening(float _saldo) : saldo(_saldo)
{
}

Bankrekening Bankrekening::operator+(Transactie _transactie)
{
	_transactie.setType("Bijschrijving");
	this->saldo = this->saldo + _transactie.getAmount();
	transactieHistorie.push_back(_transactie);

	return Bankrekening();
}

Bankrekening Bankrekening::operator-(Transactie _transactie)
{
	_transactie.setType("Afschrijving");
	saldo -= _transactie.getAmount();
	transactieHistorie.push_back(_transactie);

	return Bankrekening();
}

std::ostream& operator<<(std::ostream& output, const Bankrekening &b)
{
	std::string _temp;
	if (b.transactieHistorie.size() > 0) {
		for (int i = 0; i < b.transactieHistorie.size(); i++)
		{
			//output << b.transactieHistorie[i].getTransaction();

			output << "Transactie type: " << b.transactieHistorie[i].type << " Hoeveelheid: " << b.transactieHistorie[i].amount << " Datum: " << b.transactieHistorie[i].date << std::endl;
		}
	}

	output << "Totaal saldo: " << b.saldo << std::endl;
	return output;
}


void Bankrekening::showSaldo()
{
	std::cout << "Saldo op rekening: " << saldo << std::endl;
}

const float Bankrekening::getSaldo()
{
	return saldo;
}

