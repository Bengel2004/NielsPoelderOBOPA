#pragma once
#include <vector>
#include "Transactie.h"
#include <iostream>
class Bankrekening
{
public:
	Bankrekening();
	Bankrekening(float _saldo);
	Bankrekening operator+(Transactie _transactie);
	Bankrekening operator-(Transactie _transactie);
	friend std::ostream& operator<<(std::ostream& output, const Bankrekening &b);

	void showSaldo();
	void showTransactions();
	const float getSaldo();
private:
	float saldo;
	std::vector<Transactie> transactieHistorie;
};

