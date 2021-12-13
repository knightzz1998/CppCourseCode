#include <iostream>
#include <bitset>
#include "BinaryFileOperator.h"
using namespace std;

/*
	读取二进制文件内容, 并输出到txt文件中
*/
void binaryFileToText(string binaryFile, string textFile) {

	unsigned char binaryCode[3] = {'11', '71', '19'}; // 用于存储3字节的二进制数据
	unsigned short textData[2]; 


	unsigned short temp1, temp2;
	temp1 = binaryCode[0];
	temp2 = binaryCode[1];

	temp1 = temp1 << 4;
	temp2 = temp2 >> 4;

	cout << temp1 << endl;
	cout << temp2 << endl;
}


void textToBinaryFile(string binaryFile, string textFile) {

}


