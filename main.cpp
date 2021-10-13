#include <iostream>
#include "json/json.h"
#include <fstream>
 
using namespace std;
 
 
void readStrJson()
{
	//字符串  
	const char* str =
	"{\"name\":\"shuiyixin\",\"age\":\"21\",\"sex\":\"man\"}";
//	"{
//		"name" : "shuiyixin",
//		"age" : "21",
//		"sex" : "man"
//	}";
 
 
//	Json::Reader reader;
//	Json::Value root;

	Json::CharReaderBuilder b;
	Json::CharReader * reader(b.newCharReader());
	Json::Value root;
	JSONCPP_STRING errs;
	bool ok = reader->parse(str, str + std::strlen(str), &root, &errs);
	
	if(ok && errs.size() == 0)
	{
		string name = root["name"].asString();
                int age = root["nomen"].asInt();
                string sex = root["sex"].asString();
                cout << name + "," << age << "," << sex <<  endl;

	}

#if 0
	//从字符串中读取数据  
	if (reader.parse(str, root))
	{
		string name = root["name"].asString();
		int age = root["nomen"].asInt();
		string sex = root["sex"].asString();
		cout << name + "," << age << "," << sex <<  endl;
	}
#endif
}
 
int main(void)
{
        readStrJson();
        return 0;
}
