#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
#include <unordered_map>
#include "SolutionNode.h"
#include "ListNode.h"
#include "SolutionList.h"
using namespace std;

// 在顺序表中求某元素的下标
int SolutionList::locate_seq(SeqList palist, int x)
{
    for (int i = 0; i < palist.n; i++) {
        if (palist.element[i] == x)return i;
    }
    return -1;
}

//  在下标为p的位置插入x
int SolutionList::insertPre_seq(SeqList &palist, int p, int x)
{
    if (palist.n>=palist.MaxNum)
    {
        cout << "Overflow!" << endl;
        return 0;
    }
    if (p<0||p>palist.n)
    {
        cout << "Not exost!" << endl;
        return 0;
    }
    int q;
    for (q = palist.n - 1; q >= p; q--)
        palist.element[q + 1] = palist.element[q];
    palist.element[q] = x;
    palist.n = palist.n + 1;
    return 1;
}

bool SolutionList::deleteV_seq(SeqList& palist, int x)
{
    for (int i = 0; i < palist.n; i++) {
        if (palist.element[i] == x)
        {
            for (int j = i; j < palist.n - 1; j++)palist.element[j] = palist.element[j + 1];
            palist.n--;
            return true;
        }
    }
    return false;
}

void SolutionList::UPDown(SeqList& palist)
{
    for (int i = 0; i < palist.n/2; i++)
    {
        TurnBack(palist.element[i], palist.element[palist.n - i]);
    }
}

void SolutionList::DeleteRepeat(SeqList& palist)
{
    unordered_map<int, int> map;
    int i = 0;
    while (i < palist.n)
    {
        if (map.find(palist.element[i]) != map.end())
        {
            cout << "GetRepeat" << endl;
            for (int j = i; j < palist.n-1; j++)
            {
                palist.element[j] = palist.element[j + 1];
            }
            palist.n--;
        }
        else {
            map[palist.element[i]] = 1;
            i++;
        }
    }
}

void SolutionList::TurnBack(int& a, int& b)
{
    int x = a; a = b; b = x;
}

void SolutionList::GetSeq(SeqList palist)
{
    for (int i = 0; i < palist.n; i++)
    {
        cout << palist.element[i] << ' ';
    }
    printf("\n");
}

// 在palist末尾插入元素x
bool SolutionList::insertBack(SeqList& palist, int x)
{
    if (palist.n >= palist.MaxNum) {
        cout << "Overflow!";
        return false;
    }
    palist.n += 1;
    palist.element[palist.n-1] = x;
    return true;
}

SeqList SolutionList::SetSeqList()
{
    SeqList palist ;
    cout << "Start building a list,when pressing the Ctrl + z to end setup." << endl;
    int GETVAL;
    while (cin >> GETVAL)
    {
        palist.element[palist.n] = GETVAL;
        palist.n += 1;
    }
    return palist;
}
