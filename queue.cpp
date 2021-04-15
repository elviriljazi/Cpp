#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> queue, queue2, Queue;
    int start = 0, end = 0, a1, a2, index = -1, index2 = -1, length = 0, indexSaver;
    int c = 9;
    /* 
    cout<<"Jep numrin e elementeve n=";
    cin>>c;
    for(int i=1;i<=c;i++){
        cout<<"jep antarin e "<<i;
    cin>>c;
    queue.push(c);
    }
    */
    queue.push(0);
    queue.push(1);
    queue.push(2);
    queue.push(4);
    queue.push(5);
    queue.push(6);
    queue.push(7);
    queue.push(8);
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);
    queue.push(7);
    
    queue.push(10);
    queue.push(11);
    queue.push(12);
    queue.push(14);
    queue.push(20);

    queue.push(0);
    queue.push(1);
    queue.push(2);
    queue.push(4);
    queue.push(0);
    queue.push(1);
    queue.push(3);
    queue.push(9);
    queue.push(7);
    a1 = queue.front();
    queue.pop();
    int previousIndex = 0;
    int previousLength = 0;
    for (int i = 0; i < 28; i++)
    {
        a2 = queue.front();
        queue.pop();
        if (a1 < a2)
        {
            queue2.push(a1);
            length++;
        }
        else
        {
            queue2.push(a1);
            index++;
            length = 0;
        }
        if (previousIndex < index)
            previousIndex = index;
        if (previousLength < length)
            previousLength = length;
        a1 = a2;
    }
    start = previousIndex;
    end = start + previousLength;
    cout << "Start: " << start
         << "\nEnd: " << end << endl;
    for (int i = 0; i < 28; i++)
    {
        cout << "Q[" << i << "]:" << queue2.front() << endl;
        queue2.pop();
    }
    cout << "PL" << previousLength << endl;
    cout << "PI" << previousIndex << endl;
    return 0;
}
