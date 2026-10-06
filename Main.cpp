#include <iostream>


int main()
{

	// CAESB cobra até 10m3: R$ 3.00 por m3
	// Acima de 10 até 20m3: os primeiros 10m3 custam R$ 3.00 cada; o excedente custa R$ 5,00 por m3
	// Acima de 20m3: os primeiros 10m3 custamm R$ 3,00 cada, os próximos 10 custam R$ 5,00 cada e o que passar de 20 custa R$ 8,00 por m3
	// Some uma taxa fica de R$ 12,00 à conta

	double valorBruto;
	double valorLiquido;
	double taxaFixa = 12.00;
	int consumoMensal = 0;
	
	std::cout << "Qual o seu consumo mensal? ";
	std::cin >> consumoMensal;

	if (consumoMensal <= 10)
	{
		std::cout << "Consumo: " << consumoMensal << " m3\n";

		valorLiquido = (consumoMensal * 3.00);
		std::cout << "Custo pelo consumo: R$ " << valorLiquido << "\n";

		std::cout << "Taxa padrao: R$ " << taxaFixa << "\n";

		valorBruto = (consumoMensal * 3.00) + taxaFixa;
		std::cout << "Valor total da agua: R$ " << valorBruto;
	}
	else if (consumoMensal > 10 && consumoMensal <= 20)
	{

		std::cout << "Consumo: " << consumoMensal << " m3\n";
		valorLiquido = 10 * 3.00 + (consumoMensal - 10) * 5.00;
		std::cout << "Custo pelo consumo: R$ " << valorLiquido << "\n";
		std::cout << "Taxa padrao: R$ " << taxaFixa << "\n";
		valorBruto = valorLiquido + taxaFixa;
		std::cout << "Valor total da agua: R$ " << valorBruto;

	}

	else
	{
		std::cout << "Consumo: " << consumoMensal << " m3\n";
		valorLiquido = 10 * 3.00 + 10 * 5 + (consumoMensal - 20) * 8.00;
		std::cout << "Custo pelo consumo: R$ " << valorLiquido << "\n";
		std::cout << "Taxa padrao: R$ " << taxaFixa << "\n";
		valorBruto = valorLiquido + taxaFixa;
		std::cout << "Valor total da agua: R$ " << valorBruto;


	}

}