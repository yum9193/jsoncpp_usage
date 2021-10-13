#include <iostream>
#include <string.h>

using namespace std;

/**
 * 拼接int
 */
std::string  getKeyValue(std::string sKey, int iValue)
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
std::string  getKeyValue(std::string sKey, float fValue)
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
std::string  getKeyValue(std::string sKey, std::string sValue)
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
 * 拼接object
 */
std::string  getKeyValueObject(std::string sKey, std::string sObject)
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
std::string  getKeyValueArray(std::string sKey, std::string sArray)
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

struct student
{
	int age;
	char sex[10];
	float score;
};

int main(void)
{
	student s1;
	s1.age = 20; 
	strcpy(s1.sex, "man");
	s1.score = 120.5;
	
	printf("%s\n", getKeyValue("age", s1.age).c_str());
	printf("%s\n", getKeyValue("sex", s1.sex).c_str());
	printf("%s\n", getKeyValue("score", s1.score).c_str());
	
	return 0;
}


