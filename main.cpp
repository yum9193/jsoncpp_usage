/*
 * main.cpp
 *
 *  Created on: 2021.10.13
 *      Author: 	bb.y
 */


#include <iostream>
#include "json/json.h"  // include json head file
#include <fstream>
 
#include "jsoncpp_mode.h"
#include "string2Json.h"

using namespace std;
 
JsoncppMode JsoncppMode_;
Jsonpkg		Jsonpkg_; 
 

int main(void)
{
   	const char * parseJson_str = "{                         \
        \"Age\" : 26,	                                    \
        \"E-mail\" : 	                                    \
        {                                                   \
            \"Hotmail\" : \"liming.shao@hotmail.com\",      \
            \"Netease\" : \"lmshao@163.com\"                \
        },                                                  \
        \"Language\" :                                      \
        [                                                   \
            \"C++\",                                        \
            \"Java\"                                        \
        ],                                                  \
        \"Name\" : \"Liming\"                               \
    }";   

iii	//example of how to assembel data to json string.
	JsoncppMode_.AssembleDataToJson();

	//example of how to split json string.
	JsoncppMode_.parseJson(parseJson_str);

	//example of write json string to file
	JsoncppMode_.writeJsonStringToFile();
}


 //# #####



