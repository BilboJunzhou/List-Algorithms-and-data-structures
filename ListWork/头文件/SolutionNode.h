#ifndef SOLUTION_H
#define SOLUTION_H
#include "ListNode.h"
class SolutionNode {
public:
	ListNode* SetList();// 建立单向链表
	ListNode* SetCircularList();// 建立循环链表
	void getList(ListNode* head);
	bool insertPost_seq(ListNode* head, int p, int x); //作业第1题（链表）
	bool deleteV_seq(ListNode* head, int x);//作业第2题（链表）
	ListNode* UpSitDown(ListNode* head);// 作业第3题（链表）
	bool set_val_at_p(ListNode* head, ListNode* p, int x);// 作业第6题（链表）
	bool CirList_Delete(ListNode* list, int x, int k);//作业第9题（链表）
	void RemoveRepeat(ListNode* head);// 作业第12题（链表）
	void Delete_Last(ListNode* list);//作业第14题（链表）
};

#endif 
