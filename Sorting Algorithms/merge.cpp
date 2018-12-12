#include<iostream>
using namespace std;
int t = 0;
class mergeSort
{
	int *ary;
	int N;
public:
	mergeSort(int a[],int n)
	{
		ary = new int[n];
		N = n;
		for (int i = 0; i < n; i++)
			ary[i] = a[i];

	}
	void mergesort(int low, int high)
	{
		if (high <= low)
			return;
		int mid = (low + high) / 2;
		mergesort(low, mid);
		mergesort(mid + 1, high);
		merge(low, high, mid);
	}
	void merge(int low, int high, int mid)
	{
		int i, j, k;
		int *temp = new int[N];
		i = low;
		k = low;
		j = mid + 1;
		while (i <= mid && j <= high)
		{
			if (ary[i] < ary[j])
			{
				
				temp[k] = ary[i];
				k++;
				i++;
			}
			else
			{
				temp[k] = ary[j];
				k++;
				j++;
			}
		}
		while (i <= mid)
		{
			temp[k] = ary[i];
			k++;
			i++;
		}
		while (j <= high)
		{
			temp[k] = ary[j];
			k++;
			j++;
		}
		for (i = low; i < k; i++)
		{
			ary[i] = temp[i];
		}

	}
	void display()
	{
		cout << "sorted array : \n";
		for (int i = 0; i < N; i++)
			cout << ary[i] << endl;
	}

};
void main()
{
	int arr2[5] = { 16,15,9,14,13};
	mergeSort obj(arr2, 5);
	obj.mergesort(0, 4);
	obj.display();
	cout << "\ntime : " << t << endl;
}