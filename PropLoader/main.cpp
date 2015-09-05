#include <iostream>
#include <cstddef>
#include "prop_loader.hpp"

int main(int argc, char **argv)
{
	_proploader::PropLoader* ip = new _proploader::PropLoader("test.properties");
	std::cout<<ip->getValue("abd")<<std::endl;
	ip->addProp("abd","update");
	ip->addProp("hot","new");
	std::cout<<ip->getValue("abd")<<"\t"<<ip->getValue("hot")<<std::endl;
	getchar();
	return 0;
}
