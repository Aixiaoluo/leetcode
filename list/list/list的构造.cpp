#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l1;
	list<int> l2(4, 100);
	list<int> l3(l2.begin(), l2.end());
	list<int> l4(l3);

	//������Ϊ���������乹��l5
	int arr[] = { 16, 2, 77, 29 };
	list<int> l5(arr, arr + sizeof(arr) / sizeof(int));

	//�õ������ķ�����ӡl5�е�Ԫ��
	for (list<int>::iterator it = l5.begin(); it != l5.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	//��Χfor����
	for (auto& i : l5)
	{
		cout << i << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}
