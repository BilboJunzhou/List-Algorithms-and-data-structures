#pragma once
#ifndef SOLUTIONLIST_H
#define SOLUTIONLIST_H
#include"SeqList.h"
class SolutionList {
public:
	int insertPre_seq(SeqList &palist, int p, int x);// ��ҵ��1�⣨˳���
	bool deleteV_seq(SeqList& palist, int x);// ��ҵ��2�⣨˳���
	void UPDown(SeqList& palist);// ��ҵ��3�⣬����ַ��ʽ��˳���
	void DeleteRepeat(SeqList& palist);//��ҵ��12�⣬����ַ��ʽ��˳��� ��
	int locate_seq(SeqList palist, int x);// ��˳�������ĳһԪ�ص��±�
	void TurnBack(int& a, int& b);// �����������ݵ�ֵ
	void GetSeq(SeqList palist);
	bool insertBack(SeqList& palist, int x);// ��palistĩβ����Ԫ��
	SeqList SetSeqList(); // ����˳���
};

#endif // !SOLUTIONLIST_H

