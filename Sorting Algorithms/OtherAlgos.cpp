//#include<iostream>
//using namespace std;
//void bubbleSort(int a[], int N);
//void selectionSort(int a[], int N);
//void insertionSort(int arr[], int N);
//void quicksort(int a[], int p, int r);
//void mergesort( int , int );
//const int N = 16;
//void merge( int, int, int);
//int arr2[16] = { 4, 2, 12, 1, 19, 22, 7, 5, 3, 11, 30, 28, 21, 13, 9, 7 };
//void main()
//{
//	
//	int start, end;
//	int arr[16] = { 5, 14, 10, 27, 45, 30, 50, 7, 20, 40, 37, 43, 10, 14, 50, 53 };
//	int arr1[16] = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 21, 23, 19, 31, 37, 39, 41 };
//	
//	//bubbleSort(arr, N);
//	/*selectionSort(arr2, N);*/
//	/*insertionSort(arr2, N);*/
//	/*mergesort(0, N);
//		for (int i = 0; i < N; i++)
//			cout << arr2[i] << endl;*/
//
//}
//void bubbleSort(int a[], int N)
//{
//	int time=0, i=0, j=0;
//for (i = 0; i < N; i++)
//{
//	for (j =0; j < N -1 - i; j++)
//	{
//		if (a[j] >a[j+1])
//		{
//			int temp = a[j];
//			a[j] = a[j+1];
//			a[j+1] = temp;
//
//		}
//	}
//}
//		cout << "time complexity : " << time << endl<<"\nbubble sort : \n";
//		for (i = 0; i < N; i++)
//			cout << a[i] << endl;
//	
//}
//void selectionSort(int a[], int N)
//{
//	
//		int min,index,temp,i,j,time=0;
//
//		for (i = 0; i < N; i++)
//		{
//			min = a[i];
//			index = i;
//			for (j = i + 1; j < N; j++)
//			{
//				time++;
//				if (a[j] < min)
//				{
//					min = a[j];
//					index = j;
//				}
//			}
//			temp = a[i];
//			a[i] = a[index];
//			a[index] = temp;
//		}
//		cout << "time complexity : " << time << endl << "\nselection sort : \n";
//		for (int i = 0; i < N; i++)
//			cout << a[i]<<endl;
//	
//}
//void insertionSort(int a[], int N)
//{
//	int i = 1, j, temp,time=0;
//	for (int i = 1; i < N; i++)
//	{
//		j = i;
//		while (j > 0 )
//		{
//			time++;
//			if (a[j] > a[j-1])
//			{
//				break;
//				
//			}
//			else
//			{
//				temp = a[j - 1];
//				a[j - 1] = a[j];
//				a[j] = temp;
//				j--;
//			}
//			
//		}
//		
//	}
//	cout << "time complexity : " << time << endl << "\ninsertion sort : \n";
//	for (int i = 0; i < N; i++)
//		cout << a[i] << endl;
//}
////void quicksort(int a[], int i, int j)
////{
////	int mid = 0,time=0;
////	if (i < j)
////		mid = (i + j) / 2;
////	time++;
////	quicksort(a, i, mid);
////	quicksort(a, mid, j);
////	cout << "time complexity : " << time << endl << "\nquick sort : \n";
////	for (int i = 0; i < 16; i++)
////		cout << a[i] << endl;
////}
//void mergesort( int low, int high)
//{
//	
//	if (high <= low)
//		return;
//		int mid = (low + high) / 2;
//		mergesort( low, mid);
//		mergesort( mid + 1, high);
//		merge( low, high, mid);
//}
//void merge( int low, int high, int mid)
//{
//	int i, j, k;
//	int *temp = new int[N];
//	i = low;
//	k = low;
//	j = mid + 1;
//	while (i <= mid && j <= high)
//	{
//		if (arr2[i] < arr2[j])
//		{
//			temp[k] = arr2[i];
//			k++;
//			i++;
//		}
//		else
//		{
//			temp[k] = arr2[j];
//			k++;
//			j++;
//		}
//	}
//	while (i <= mid)
//	{
//		temp[k] = arr2[i];
//		k++;
//		i++;
//	}
//	while (j <= high)
//	{
//		temp[k] = arr2[j];
//		k++;
//		j++;
//	}
//	for (i = low; i < k; i++)
//	{
//		arr2[i] = temp[i];
//	}
//	
//}