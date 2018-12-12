//#include<iostream>
//using namespace std;
//class quick
//{
//	int *ary;
//public:
//	quick(int a[], int s)
//	{
//		ary = new int[s];
//
//		for (int i = 0; i < s; i++)
//		{
//			ary[i] = a[i];
//		}
//	}
//	int partition(int s, int e)
//	{
//		int no = ary[e];
//		int i = s - 1;
//		for (int j = s; j <= e - 1; j++)
//		{
//			if (ary[j] < no)
//			{
//				i++;
//				int temp = ary[i];
//				ary[i] = ary[j];
//				ary[j] = temp;
//			}
//		}
//		int temp = ary[i + 1];
//		ary[i + 1] = no;
//		ary[e] = temp;
//		return (i + 1);
//	}
//	void quickSort(int s, int e)
//	{
//		if (e <= s)
//			return;
//		else
//		{
//			int index = partition(s, e);
//			quickSort(s, index - 1);
//			quickSort(index + 1, e);
//		}
//
//	}
//	void display()
//	{
//		for (int i = 0; i < 8; i++)
//			cout << ary[i] << "  ";
//		cout << endl;
//	}
//};
//void main()
//{
//	int ary[8] = { 12, 4, 15, 9, 7, 3, 1, 5 };
//	quick obj(ary,8);
//	obj.quickSort(0, 7);
//
//	//cout << "index of last element of array is : " << obj.partition(0, 9)<<endl;
//	obj.display();
//}