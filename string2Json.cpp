/*
 * string2Json.cpp
 *
 *  Created on: 2021.10.13
 *      Author: 	bb.y
 */


#include "string2Json.h"

Jsonpkg::Jsonpkg()
{

}

Jsonpkg:: ~Jsonpkg()
{

}

/**
 * 拼接int
 */
std::string Jsonpkg::getKeyValue(std::string sKey, int iValue)
{
    char szDoubleQutoes[] = "\"";
    char szColon[] = ":";
    char szValue[50] = { 0 };

    std::string strResult;

    strResult.append("{");
    strResult.append(szDoubleQutoes);
    strResult.append(sKey);
    strResult.append(szDoubleQutoes);

    strResult.append(szColon);
    sprintf(szValue, "%d", iValue);
    strResult.append(szValue);
    strResult.append("}");

    return strResult;
}
/**
 * 拼接float，保留3位
 */
std::string Jsonpkg::getKeyValue(std::string sKey, float fValue)
{
    char szDoubleQutoes[] = "\"";
    char szColon[] = ":";
    char szValue[50] = { 0 };

    std::string strResult;

    strResult.append("{");
    strResult.append(szDoubleQutoes);
    strResult.append(sKey);
    strResult.append(szDoubleQutoes);

    strResult.append(szColon);
    sprintf(szValue, "%0.3f", fValue);
    strResult.append(szValue);
    strResult.append("}");

    return strResult;
}
/**
 * 拼接string
 */
std::string Jsonpkg::getKeyValue(std::string sKey, std::string sValue)
{
    char szDoubleQutoes[] = "\"";
    char szColon[] = ":";
    std::string strResult;

    strResult.append("{");
    strResult.append(szDoubleQutoes);
    strResult.append(sKey);
    strResult.append(szDoubleQutoes);

    strResult.append(szColon);
    strResult.append(szDoubleQutoes);
    strResult.append(sValue);
    strResult.append(szDoubleQutoes);
    strResult.append("}");

    return strResult;
}

/**
 * 拼接char
 */
std::string Jsonpkg::getKeyValueWithoutQuote(std::string sKey, char iValue)
{
    char szDoubleQutoes[] = "\"";
    char szColon[] = ":";
    char szValue[50] = { 0 };

    std::string strResult;

    strResult.append(szDoubleQutoes);
    strResult.append(sKey);
    strResult.append(szDoubleQutoes);

    strResult.append(szColon);
    sprintf(szValue, "%d", iValue);
    strResult.append(szValue);

    return strResult;
}

/**
 * 拼接int
 */
std::string Jsonpkg::getKeyValueWithoutQuote(std::string sKey, int iValue)
{
    char szDoubleQutoes[] = "\"";
    char szColon[] = ":";
    char szValue[50] = { 0 };

    std::string strResult;

    strResult.append(szDoubleQutoes);
    strResult.append(sKey);
    strResult.append(szDoubleQutoes);

    strResult.append(szColon);
    sprintf(szValue, "%d", iValue);
    strResult.append(szValue);

    return strResult;
}
/**
 * 拼接float，保留3位
 */
std::string Jsonpkg::getKeyValueWithoutQuote(std::string sKey, float fValue)
{
    char szDoubleQutoes[] = "\"";
    char szColon[] = ":";
    char szValue[50] = { 0 };

    std::string strResult;

    strResult.append(szDoubleQutoes);
    strResult.append(sKey);
    strResult.append(szDoubleQutoes);

    strResult.append(szColon);
    sprintf(szValue, "%0.3f", fValue);
    strResult.append(szValue);

    return strResult;
}
/**
 * 拼接string
 */
std::string Jsonpkg::getKeyValueWithoutQuote(std::string sKey, std::string sValue)
{
    char szDoubleQutoes[] = "\"";
    char szColon[] = ":";
    std::string strResult;

    strResult.append(szDoubleQutoes);
    strResult.append(sKey);
    strResult.append(szDoubleQutoes);

    strResult.append(szColon);
    strResult.append(szDoubleQutoes);
    strResult.append(sValue);
    strResult.append(szDoubleQutoes);

    return strResult;
}


/**
 * 拼接object
 */
std::string Jsonpkg::getKeyValueObject(std::string sKey, std::string sObject)
{
    char szDoubleQutoes[] = "\"";
    char szColon[] = ":";
    std::string strResult;

    strResult.append(szDoubleQutoes);
    strResult.append(sKey);
    strResult.append(szDoubleQutoes);

    strResult.append(szColon);
    strResult.append(sObject);

    return strResult;
}
/**
 * 拼接array
 */
std::string Jsonpkg::getKeyValueArray(std::string sKey, std::string sArray)
{
    char szDoubleQutoes[] = "\"";
    char szColon[] = ":";
    std::string strResult;

    strResult.append(szDoubleQutoes);
    strResult.append(sKey);
    strResult.append(szDoubleQutoes);

    strResult.append(szColon);
    strResult.append("[");
    strResult.append(sArray);
    strResult.append("]");

    return strResult;
}
