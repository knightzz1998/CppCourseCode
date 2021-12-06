#ifndef XMLTOOL_H
#define XMLTOOL_H


#include <string>
#include "tinyxml.h"
using namespace std;

string ReadAttributeValue(TiXmlElement* element, string key);

string ReadElementValue(TiXmlElement* element);

string ReadSubElementValue(TiXmlElement* element, string key);

TiXmlElement* WriteSubElement(TiXmlElement* element, string key);

TiXmlElement* WriteSubElementValue(TiXmlElement* element, string key, string value);

TiXmlElement* WriteAttributeValue(TiXmlElement* element, string key, string value);

#endif // XMLTOOL_H
