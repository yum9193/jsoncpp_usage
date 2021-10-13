/*
 * jsoncpp_mode.cpp
 *
 *  Created on: 2021.10.13
 *      Author: 	bb.y
 */

#include "jsoncpp_mode.h"


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


