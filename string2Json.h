/*
 * param.h
 *
 *  Created on: 2021.7.15
 *      Author: 	bb.y
 */

#ifndef JSONPKG_H_
#define JSONPKG_H_

#include <string>

class Jsonpkg {
public:
	Jsonpkg();
	virtual ~Jsonpkg();

public:
	std::string getKeyValue(std::string sKey, int iValue);
	std::string getKeyValue(std::string sKey, float fValue);
	std::string getKeyValue(std::string sKey, std::string sValue);
	std::string getKeyValueWithoutQuote(std::string sKey, char iValue);
    std::string getKeyValueWithoutQuote(std::string sKey, int iValue);
	std::string getKeyValueWithoutQuote(std::string sKey, float fValue);
	std::string getKeyValueWithoutQuote(std::string sKey, std::string sValue);
	std::string getKeyValueObject(std::string sKey, std::string sObject);
	std::string getKeyValueArray(std::string sKey, std::string sArray);


private:


};


#endif /* JSONPKG_H_ */
