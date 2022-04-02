#pragma once
#ifndef SOLUTIONLIST_H
#define SOLUTIONLIST_H
#include"SeqList.h"
class SolutionList {
public:
	int insertPre_seq(SeqList &palist, int p, int x);// 作业第1题（顺序表）
	bool deleteV_seq(SeqList& palist, int x);// 作业第2题（顺序表）
	void UPDown(SeqList& palist);// 作业第3题，传地址形式（顺序表）
	void DeleteRepeat(SeqList& palist);//作业第12题，传地址形式（顺序表 ）
	int locate_seq(SeqList palist, int x);// 在顺序表中求某一元素的下标
	void TurnBack(int& a, int& b);// 调换两个数据的值
	void GetSeq(SeqList palist);
	bool insertBack(SeqList& palist, int x);// 在palist末尾插入元素
	SeqList SetSeqList(); // 建立顺序表
};

#endif // !SOLUTIONLIST_H

