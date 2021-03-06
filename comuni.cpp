#include "comuni.h"

comuni::comuni(){}

comuni::comuni(sz_type dim) : v(dim){} //Vedere se funziona

comuni::comuni(sz_type dim, const comune &c){
	for(sz_type i=0; i<dim; i++)
		add_comune(c); //Potrebbe fallire??
}

comuni::comuni(const comuni &oth){

}

comuni::~comuni(){
	delete v; //???
}

comuni &comuni::operator=(const comuni &oth){
	//Da implementare
}

comune &comuni::operator[](sz_type index){
	return v.at(index);
}

const comune &operator[](sz_type index){
	return v.at(index);
}

void comuni::add_comune(const comune &c){
	v.push_back(c);
}

void comuni::add_comune(const std::string &n,
						const std::string &i, 
						const int cap, const int sup, 
						const std::string &asl, 
						const int cod_istat, 
						const int distanza_mi){
	comune c(n, i, cap, sup, asl, cod_istat, distanza_mi);
	v.push_back(c);
}

bool comuni::exist(const std::string &nome, comune &out) const{
	//Da implementare
}

sz_type comuni::get_size() const{
	return v.size();
}