// 用于实现 XMLTool.h 文件中定义的函数
// 其他文件中只需要引入 XMLTool.h 即可调用
#include "XMLTool.h"


string ReadAttributeValue(TiXmlElement* element, string key)
{
	string ret = "";
	if (element == NULL)
		return ret;
	TiXmlAttribute* atrribute = element->FirstAttribute();
	while (atrribute != NULL)
	{
		if (atrribute->Name() == key)
		{
			ret = atrribute->Value();
			return ret;
		}
		atrribute = atrribute->Next();
	}
	return ret;
}

string ReadElementValue(TiXmlElement* element)
{
	string ret = "";
	if (element == NULL)
		return ret;
	if (element->GetText() == NULL)
		return ret;
	ret = element->GetText();
	return ret;
}

string ReadSubElementValue(TiXmlElement* element, string key)
{
	string ret = "";
	if (element == NULL)
		return ret;
	TiXmlElement* subElement = element->FirstChildElement(key.c_str());
	ret = ReadElementValue(subElement);
	return ret;
}


TiXmlElement* WriteSubElement(TiXmlElement* element, string key)
{
	TiXmlElement* subElement = new TiXmlElement(key.c_str());
	element->LinkEndChild(subElement);
	return subElement;
}

TiXmlElement* WriteSubElementValue(TiXmlElement* element, string key, string value)
{
	TiXmlElement* subElement = new TiXmlElement(key.c_str());
	element->LinkEndChild(subElement);
	TiXmlText* subTextElement = new TiXmlText(value.c_str());
	subElement->LinkEndChild(subTextElement);
	return subElement;
}

TiXmlElement* WriteAttributeValue(TiXmlElement* element, string key, string value)
{
	if (element == NULL) return NULL;
	element->SetAttribute(key.c_str(), value.c_str());
	return element;
}



