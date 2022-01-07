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
//function A
<<<<<<< HEAD
=======
//function B 
>>>>>>> f737a57780140b4f74cd90b620b136ef999970ce
};

#endif /* JSONCPP_MODE_H_ */
