/*
 * jsoncpp_mode.cpp
 *
 *  Created on: 2021.10.13
 *      Author: 	bb.y
 */

#include "jsoncpp_mode.h"
#include <fstream>

JsoncppMode::JsoncppMode()
{

}

JsoncppMode:: ~JsoncppMode()
{

}

std::string JsoncppMode::AssembleDataToJson()
{
    std::string jsonStr;
    Json::Value root, lang, mail;
    Json::StreamWriterBuilder writerBuilder;
    std::ostringstream os;

    root["Name"] = "Liming";
    root["Age"] = 26;

    lang[0] = "C++";
    lang[1] = "Java";
    root["Language"] = lang;

    mail["Netease"] = "lmshao@163.com";
    mail["Hotmail"] = "liming.shao@hotmail.com";
    root["E-mail"] = mail;

    std::unique_ptr<Json::StreamWriter> jsonWriter(writerBuilder.newStreamWriter());
    jsonWriter->write(root, &os);
    jsonStr = os.str();

    std::cout << "Assemble Json result:\n" << jsonStr << std::endl;
    return jsonStr;
}

bool JsoncppMode::parseJson(const std::string &info)
{
    if (info.empty())
        return false;

    bool res;
    JSONCPP_STRING errs;
    Json::Value root, lang, mail;
    Json::CharReaderBuilder readerBuilder;

    std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
    res = jsonReader->parse(info.c_str(), info.c_str()+info.length(), &root, &errs);
    if (!res || !errs.empty()) {
        std::cout << "parseJson err. " << errs << std::endl;
    }

    std::cout << "Name: " << root["Name"].asString() << std::endl;
    std::cout << "Age: " << root["Age"].asInt() << std::endl;

    lang = root["Language"];
    std::cout << "Language: ";
    for (int i = 0; i < lang.size(); ++i) {
        std::cout << lang[i] << " ";
    }
    std::cout << std::endl;

    mail = root["E-mail"];
    std::cout << "Netease: " << mail["Netease"].asString() << std::endl;
    std::cout << "Hotmail: " << mail["Hotmail"].asString() << std::endl;

    return true;
}


void JsoncppMode::writeJsonStringToFile()
{
	//根节点  
	Json::Value root;
 
	//根节点属性  
	root["name"] = Json::Value("shuiyixin");
	root["age"] = Json::Value(21);
	root["sex"] = Json::Value("man");
 
	//子节点  
	Json::Value friends;
 
	//子节点属性  
	friends["friend_name"] = Json::Value("ZhaoWuxian");
	friends["friend_age"] = Json::Value(21);
	friends["friend_sex"] = Json::Value("man");
 
	//子节点挂到根节点上  
	root["friends"] = Json::Value(friends);
 
	//数组形式  
	root["hobby"].append("sing");
	root["hobby"].append("run");
	root["hobby"].append("Tai Chi");
 
	//直接输出  
	//cout << "FastWriter:" << endl;
	//Json::FastWriter fw;
	//cout << fw.write(root) << endl << endl;
 
	//缩进输出  
	std::cout << "StyledWriter:" << std::endl;
	Json::StyledWriter sw;
	std::cout << sw.write(root) << std::endl;
 
	//输出到文件  
	std::ofstream os;
	os.open("demo.json", std::ios::out | std::ios::app);
	if (!os.is_open())
		std::cout << "error：can not find or create the file which named \" demo.json\"." << std::endl;
	os << sw.write(root);
	os.close();
 
}

