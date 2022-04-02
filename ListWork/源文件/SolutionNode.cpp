#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
#include <unordered_map>
#include "SolutionNode.h"
#include "ListNode.h"

using namespace std;



// ������,������
ListNode* SolutionNode::UpSitDown(ListNode* head)
{
	ListNode* prev = nullptr;
	ListNode* curr = head;
	while (curr) {
		ListNode* next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}


// ������������ͷ���
ListNode* SolutionNode::SetList()
{
	int NOWINT;
	cout << "Start building a linked list,when pressing the Ctrl + z to end setup." << endl;
	ListNode* head = new ListNode();
	ListNode* curr = head;
	while (cin >> NOWINT)
	{
		ListNode* NewList = new ListNode(NOWINT);
		curr->next = NewList;
		curr = curr->next;
	}
	return head->next;
}

// ����ѭ���б�	
ListNode* SolutionNode::SetCircularList()
{
	int NOWINT;
	cout << "Start building a circular list,when pressing the Ctrl + z to end setup." << endl;
	ListNode* head = new ListNode();
	ListNode* curr = head;
	while (cin >> NOWINT)
	{
		ListNode* NewList = new ListNode(NOWINT);
		curr->next = NewList;
		curr = curr->next;
	}
	curr->next = head->next;
	return head->next;
}

void SolutionNode::getList(ListNode* head)
{
	while (head)
	{
		cout << head->val << ' ';
		head = head->next;
	}
	printf("\n");
}

// ɾ��ѭ�������ǰ���ڵ�
void SolutionNode::Delete_Last(ListNode* list)
{
	ListNode* curr = list;
	while (list != curr->next->next)
	{
		curr = curr->next;
	}
	curr->next = list;
}

// ɾ��ѭ��������ֵΪx�Ľڵ�
bool SolutionNode::deleteV_seq(ListNode* head, int x)
{
	ListNode* curr = head;
	while (curr)
	{
		if (curr->next->val == x)
		{
			curr->next = curr->next->next;
			return true;
		}
	}
	return false;
}

// ���±�Ϊp����������ֵΪx�Ľڵ�
bool SolutionNode::insertPost_seq(ListNode* head, int p, int x)
{
	ListNode* InitVal = new ListNode(x);
	if (!head)return false;
	for (int i = 0; i < p; i++)
	{
		head = head->next;
		if (!head)return false;
	}
	InitVal->next = head->next;
	head->next = InitVal;
	return true;
}

// �ӵ�x���ڵ��Ժ�ɾ��k���ڵ�
bool SolutionNode::CirList_Delete(ListNode* list, int x, int k)
{
	for (int i = 0; i < x - 1; i++) {
		list = list->next;
		if (!list) {
			cout << "Failed to delete because the length is insufficient";
			return false;
		}
	}
	ListNode* curr = list;
	for (int i = 0; i < k; i++)
	{
		curr = curr->next;
		if (!curr) {
			cout << "Failed to delete because the length is insufficient";
			return false;
		}
	}
	list->next = curr;
	return true;
}

// ��ָ��ͷ����е�P�ռ�λ�ò���X�ڵ㣬�������Ƿ�ɹ�
bool SolutionNode::set_val_at_p(ListNode* head, ListNode* p, int x)
{
	ListNode* setX = new ListNode(x);
	while (head)
	{
		if (head->next == p)
		{
			head->next = setX;
			setX->next = p;
			return true;
		}
		head = head->next;
	}
	return false;
}

// ������ϣ���洢֮ǰû�г��ֵ����ݣ����������ɾ��
void SolutionNode::RemoveRepeat(ListNode* head)
{
	unordered_map<int, int> map;
	if (!head)
		return;
	while (head->next)
	{
		if (map.find(head->next->val)!=map.end())
		{
			head->next = head->next->next;
		}
		else
		{
			map[head->val] = 1;
			head = head->next;
		}
		
//		head = head->next;

	}
}


