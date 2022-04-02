#ifndef SQLEST_H
#define SQLEST_H
#define MAXNUM 100
struct SeqList
{
	int MaxNum;
	int n;
	int* element;
	SeqList() :MaxNum(MAXNUM), n(0), element((int*)malloc(sizeof(int)* MaxNum)) {}
	SeqList(int m) :MaxNum(MAXNUM), n(0), element((int*)malloc(sizeof(int)* MaxNum)) {}
	SeqList(int m, int MAX) :MaxNum(MAX), n(0), element((int*)malloc(sizeof(int)* MAX)) {}

};
#endif // !SQLEST_H
