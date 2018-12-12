//#include<iostream>
//#include<string>
//using namespace std;
//static int sum = 0;
//static int cont = 0;
//int maxValue(int[], int);
//int fact(int);
//void print(string, int);
//int fibonacci(int);
//float power(float, int);
//int sumArray(int[], int);
//bool palindrome(string str, int);
//int gcf(int, int);
//int binarySearch(int[], int, int, int, int);
//int multiply(int, int);//using only + and -
//int elfish(string, int, int, int, int); //if strinh has f,e,l in it then elfish
//int xish(string, string, int, int);
//void main()
//{
//	string str="hamid",str1="hamzad";
//	///*cout << "enter string : ";
//	//getline(cin, str);
//	//print(str, 5);*/
//	//int no;
//	//cout << "enter number of which you want to find factorial : ";
//	//cin >> no;
//	//cout << "factorial is : " << fact(no) << endl;
//	//cout << "ente number of fibonacci you want to see : ";
//	//cin >> no;
//	//for (int i = 0; i < no; i++)
//	//{
//	//	cout << fibonacci(i) << "  ";
//	//}
//	//cout << endl;
//	//cout << "result of power function is :  " << power(3, 4)<<endl;
//	//int ary[5] = { 4, 6, 8, 10, 12 };
//	//cout << "sum of array : " << sumArray(ary, 4)<<endl; //pass size with one decriment coz array start from 0
//	//sum = 0;
//	//cout << "max digit is : " << maxValue(ary, 5)<<endl;
//	//cout << "enter string : ";
//	//cin.ignore();
//	//getline(cin, str);
//	//int c;
//	//for (c = 0; str[c] != NULL; c++)
//	//{
//	//}
//	//sum = 0;
//	//cont = c / 2;
//	//c--;
//	//if (palindrome(str, c))
//	//	cout << "\n\tpalindrome\n";
//	//else
//	//	cout << "\n\tnot palindrome\n";
//	//cout << "gcf is : " << gcf(50, 113)<<endl;
//	//int ary1[2000], start = 0, end = 2000, mid = (start + end) / 2, a = 2; //binary search
//	//bool test = true;
//	//for (int i = 0; i < 2000; i++)
//	//{
//	//	ary1[i] = a;
//	//	a = a + 2;
//
//	//}
//	//a = 1032;
//	//int N;
//	//N = binarySearch(ary1, start, end, mid, a);
//	//if (N != -1)
//	//	cout << "found at index " << N;
//	//else
//	//	cout << "\nnotfound \n";
//	//cout << "result of multiplication is : " << multiply(10, 8)<<endl;
//	/*int n = elfish(str, 0, 0, 0, 0);
//	if (n == 1)
//		cout << "\n\telfish\n";
//	else
//		cout << "\n\tnot elfish \n";*/
//	int n = xish(str, str1, 0, 0);
//	if (n == 1)
//		cout << "\n\txish\n";
//	else
//		cout << "\n\tnot xish \n";
//
//
//
//}
//int xish(string str, string str1, int i, int r)
//{
//	if (str1[r] == NULL)
//		return -1;
//	if (str[i] == NULL)
//		return 1;
//	if (str[i] == str1[r])
//	{
//		i++;
//		r = 0;
//	}
//	else
//		r++;
//	return xish(str, str1, i, r);
//}
//int elfish(string str, int e, int l, int f, int i)
//{
//	if (e == 1 && l == 1 && f == 1)
//		return 1;
//	if (str[i] == NULL)
//		return -1;
//	if (str[i] == 'e' || str[i] == 'E')
//		e = 1;
//	if (str[i] == 'l' || str[i] == 'L')
//		l = 1;
//	if (str[i] == 'f' || str[i] == 'F')
//		f = 1;
//	return elfish(str, e, l, f, ++i);
//}
//int multiply(int a, int b)
//{
//	if (b == 1)
//		return a;
//	return a + multiply(a,b - 1);
//}
//int binarySearch(int a[], int start, int end, int mid, int k)
//{
//	if (start > end)
//		return -1;
//	else if (k == a[mid])
//		return mid;
//	else if (k < a[mid])
//	{
//		end = mid - 1;
//		mid = (start + end) / 2;
//	}
//	else
//	{
//		start = mid + 1;
//		mid = (start + end) / 2;
//	}
//	binarySearch(a, start, end, mid, k);
//}
//int gcf(int x, int y)
//{
//
//	if (x == 0)
//		return y;
//	if (y == 0)
//		return x;
//	if (y != 0)
//		return gcf(y, x%y);
//	else
//		return x;
//}
//bool palindrome(string str, int n)
//{
//	if (sum == cont)
//		return true;
//	else if (str[sum] == str[n])
//	{
//		bool test;
//		sum++;
//		test=palindrome(str, n - 1);
//		return test;
//	}
//	else
//		return false;
//
//}
//int maxValue(int arr[],int n)
//{
//	if (n == 0)
//		return 0;
//	if (sum < arr[n - 1])
//		sum = arr[n - 1];
//	maxValue(arr, n - 1);
//	return sum;
//
//}
//int sumArray(int *arr, int n)
//{
//	if (n == 0)
//		return arr[0];
//	return arr[n] + sumArray(arr, n - 1);
//	/*if (n == 0)
//		return 0;
//	sum = sum + arr[n - 1];
//	sumArray(arr, n - 1);
//	return sum;*/
//}
//float power(float f, int n)
//{
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return f;
//		return f*power(f,n-1);
//
//}
//int fibonacci(int n)
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return(fibonacci(n - 1) + fibonacci(n - 2));
//}
//void print(string n, int times)
//{
//	if (times == 0)
//		return;
//	print(n, times - 1);
//	cout << times << " - " << n << endl;
//}
//int fact(int num)
//{
//	if (num == 0)
//		return 1;
//	return num*fact(num - 1);
//}