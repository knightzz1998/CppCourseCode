// XMLTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "tinyxml.h"
#include "XMLTool.h"

using namespace std;

bool ReadXmlFile(string strOrderFile) {
    // 读取 XML DOM 对象
    TiXmlDocument *xmldoc = new TiXmlDocument(strOrderFile.c_str());
    bool isLoadSuccess = xmldoc->LoadFile();

    // 判断XML文件是否加载成功
    if (!isLoadSuccess) {
        cout << "load faild !" << endl;
        return false;
    }
    
    // 获取根节点对象
    TiXmlElement *root = xmldoc->RootElement();
    if (!root) {
        cout << "xml root is null !" << endl;
        return false;
    }

    // 获取根节点的 name 属性
    string nameAttribute = ReadAttributeValue(root, "name"); 
    cout << "name = " << nameAttribute.c_str() << endl;

    // 获取根节点的子节点 <input>
    TiXmlElement *input = root->FirstChildElement("input");
    TiXmlElement *imageFiles = input->FirstChildElement("imageFiles");
    TiXmlElement *image = imageFiles->FirstChildElement("image");

    // 循环遍历获取子元素
    while (image != NULL) {
        // 获取当前节点的值
        string imageElement = ReadElementValue(image);
        cout << "image = " << imageElement.c_str() << endl;
        // 获取当前节点的兄弟节点
        image = image->NextSiblingElement();
    }

    // 获取 <input> 的其他子节点
    string auxFileValue  = ReadSubElementValue(input, "auxFile");
    cout << "auxFileValue = " << auxFileValue.c_str() << endl;

    string gcpFileValue = ReadSubElementValue(input, "gcpFile");
    cout << "gcpFileValue = " << gcpFileValue.c_str() << endl;

    string imageIdValue = ReadSubElementValue(input, "imageId");
    cout << "imageIdValue = " << imageIdValue.c_str() << endl;

    // 获取 <output> 节点
    TiXmlElement* output = root->FirstChildElement("output");
    // 获取 子节点元素值
    string outDirValue = ReadSubElementValue(output, "outDir");
    cout << "outDirValue = " << outDirValue.c_str() << endl;

    string outCamFileValue = ReadSubElementValue(output, "outCamFile");
    cout << "outCamFileValue = " << outCamFileValue.c_str() << endl;

    return true;
}

int main()
{
    std::cout << "Hello World!\n";
    string strOrderFile = "K://CodeWorkSpace//CppCourseCode//XMLTest//Resource//Order.xml";

    bool res = ReadXmlFile(strOrderFile);
}
