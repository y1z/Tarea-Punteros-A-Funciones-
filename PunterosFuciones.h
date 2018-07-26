#pragma once
/*  Este .h es para tener muchas cominacion de punteros para funciones perhechos para usar como yo quiero 
	(me da hueva tener que teclar todos estos todo el tiempo )    
*/
struct Ptr_Funciones {
	void(*FunV_Null)();
	void(*FunV_int)(int val);
	void(*FunV_intR)(int &val);
	void(*FunV_float)(float val);
	void(*FunV_double)(double val);

	int(*FunI_Null)();
	int(*FunI_int)(int val);
	int(*FunI_intR)(int &val);
	int(*FunI_float)(float val);
	int(*FunI_double)(double val);

	bool(*FunB_Null)();
	bool(*FunB_int)(int val);
	bool(*FunB_intR)(int &val);
	bool(*FunB_float)(float val);
	bool(*FunB_double)(double val);

}PTR_Funcion_list ;

