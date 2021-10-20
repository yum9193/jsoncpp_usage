/*
 * jsoncpp_mode.h
 *
 *  Created on: 2021.10.13
 *      Author: 	bb.y
 */

#ifndef JSONCPP_MODE_H_
#define JSONCPP_MODE_H_

#include <string>
#include <iostream>
#include "json/json.h"

class JsoncppMode {
public:
	JsoncppMode();
	virtual ~JsoncppMode();

public:
	std::string AssembleDataToJson();
	bool parseJson(const std::string &info);
	void writeJsonStringToFile();


private:
//reserved aaaaaabbbbb

};

#endif /* JSONCPP_MODE_H_ */
