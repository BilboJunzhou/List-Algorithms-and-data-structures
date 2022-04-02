#ifndef SOLUTION_H
#define SOLUTION_H
#include "ListNode.h"
class SolutionNode {
public:
	ListNode* SetList();// ������������
	ListNode* SetCircularList();// ����ѭ������
	void getList(ListNode* head);
	bool insertPost_seq(ListNode* head, int p, int x); //��ҵ��1�⣨����
	bool deleteV_seq(ListNode* head, int x);//��ҵ��2�⣨����
	ListNode* UpSitDown(ListNode* head);// ��ҵ��3�⣨����
	bool set_val_at_p(ListNode* head, ListNode* p, int x);// ��ҵ��6�⣨����
	bool CirList_Delete(ListNode* list, int x, int k);//��ҵ��9�⣨����
	void RemoveRepeat(ListNode* head);// ��ҵ��12�⣨����
	void Delete_Last(ListNode* list);//��ҵ��14�⣨����
};

#endif 
