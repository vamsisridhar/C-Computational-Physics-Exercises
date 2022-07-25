#include "radioactive_decay.h"


void radioactive_decay::run()
{
	initialize();
	calculate();
	store();

}

void radioactive_decay::initialize()
{
	printf("Initial number of nuclei: ");
	scanf_s("%lf", &(N_U[0]));
	printf("Time constant: ");
	scanf_s("%lf", &tau);
	printf("Delta time: ");
	scanf_s("%lf", &dt);
	std::cin >> run_name;
	t[0] = 0.0;
	return;
}

void radioactive_decay::calculate()
{

	for (int i = 0; i < MAX - 1; i++)
	{
		N_U[i + 1] = N_U[i] * (1 - (dt / tau));
		t[i + 1] = t[i] + dt;
	}
	return;
}

void radioactive_decay::store()
{

	std::ofstream outfile("radioactive_decay/"+run_name+".csv");
	for (int i = 0; i < MAX; i++)
	{
		outfile << N_U[i] << "," << t[i] << std::endl;
	}
	outfile.close();
}
