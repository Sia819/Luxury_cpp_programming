#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Random::Random()
{
    srand((unsigned)time(0)); // rand() �Լ��� seed�� �ο��մϴ�.
}

int Random::next()
{
    return rand();
}

int Random::nextInRange(int from, int to)
{
    return rand() % (to - from + 1) + from;
}


int main()
{
    Random r;
    cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
    for (int i = 0; i < 10; i++)
    {
        int n = r.next();
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 ��--" << endl;
    for (int i = 0; i < 10; i++)
    {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
}

/* 
[����]
���� ���� �߻���Ű�� Random Ŭ������ ������. Random Ŭ������ �̿��Ͽ� ����
�� ������ 10�� ��»�� ��ʴ� ������ ����. Random Ŭ������ ������, next(),
nextInRange()�� 3���� ��� �Լ��� �������� �ۼ��ϰ� main() �Լ��� ���� �ϳ�
�� cpp ���Ͽ� �����Ͽ���.

[��Ʈ]
���� ������ �߻���Ű�� ���� ���� �� ������ �ڵ尡 �ʿ��ϰ�, <cstdlib>�� <ctime> ���
������ include �ؾ��Ѵ�.
srand((unsigned)time(0)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
in n = rand(); // 0���� RAND_MAX(32767) ������ ������ ���� �߻�
*/

/*
[������]
-- 0���� 32767������ ���� ���� 10 ��--
13246 2885 28445 22780 7449 17864 15898 18869 9758 15465

-- 2���� 4 ������ ���� ���� 10 ��--
3 2 3 3 2 2 3 4 2 2
*/