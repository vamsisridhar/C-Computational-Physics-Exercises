#pragma once

#include "../include_header.h"

class radioactive_decay
{

#define MAX 100
public:
	double N_U[100];
	double t[100];
	double dt;
	double tau;
	double t_max;
	std::string run_name;
	void run();

private:
	void initialize();
	void calculate();
	void store();
};

