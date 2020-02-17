#include <iostream>

using namespace std;
//! 我为数不多的通过
string longestCommonPrefix(vector<string>& strs) {
        string res;
        if(strs.size() ==0)
        {
            return res;
        }
        for(int i=0;i<strs[0].size();++i){
            char tmp = strs[0][i];
            for(int j =1;j<strs.size();++j)
            {
                if(i<strs[j].size()&&tmp==strs[j][i])
                {
                    //ojbk
                }else{
                    return res;
                }

            }
            res+=strs[0][i];
        }
        return res;

    }、
    struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
    //! 删除链表倒数第n个node
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;

        ListNode* p = dummyHead;
        ListNode* q = dummyHead;
        for( int i = 0 ; i < n + 1 ; i ++ ){
            q = q->next;
        }

        while(q){
            p = p->next;
            q = q->next;
        }

        ListNode* delNode = p->next;
        p->next = delNode->next;
        delete delNode;

        ListNode* retNode = dummyHead->next;
        delete dummyHead;

        return retNode;

    }

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
