#include<iostream>
using namespace std;
class heap_node
{
public:
	int key;
	double data;
};
class heap_struct
{
	heap_node *arr;
	int size;
	int cur_pos;
public:						//lab,task min heap
	heap_struct(int s)
	{
		size = s;
		arr = new heap_node[size];
	}
	bool empty()
	{
		if (size == 0)
			return true;
		else
			return false;
	}
	bool enqueue(int k, double value)
	{
		if (size == cur_pos)
		{
			return false;
		}
		else
		{
			cur_pos++;
			arr[cur_pos].key = k;
			arr[cur_pos].data = value;
			heapify_up();

		}
		return true;
	}
	void heapify_up()
	{
		int i = cur_pos;
		while (i > 1)
		{
			int p = i / 2;
			if (arr[p].key > arr[i].key)
			{
				int t = arr[i].key;
				arr[i].key = arr[p].key;
				arr[p].key = t;
				double d = arr[i].data;
				arr[i].data = arr[p].data;
				arr[p].data = d;
				i = p;
			}
			else
				break;
		}

	}
	bool dequeue()
	{
		if (cur_pos == 0)
			return false;
		else
		{
			arr[1].key = arr[cur_pos].key;
			arr[1].data = arr[cur_pos].data;
			--cur_pos;
			heapify_down();
		}
		return true;
	}
	void heapify_down()
	{
		int i = 1;
		while (true)
		{
			int left = i * 2;
			int right = i * 2 + 1;
			int m = i;
			if (left <= cur_pos&&arr[left].key < arr[m].key)
				m = left;

			if (right <= cur_pos&&arr[right].key < arr[m].key)
				m = right;
			if (m == i)
				break;
			else
			{
				int t = arr[i].key;
				arr[i].key = arr[m].key;
				arr[m].key = t;
				double d = arr[i].data;
				arr[i].data = arr[m].data;
				arr[m].data = d;
			}
			i = m;
			//i++;
		}

	}
	void find_max()
	{
		int max = 0;
		int i = 0;
		int index;
		for (i = 1; i <= cur_pos; i++)
		{
			if (arr[i].key > max)
			{
				max = arr[i].key;
				index = i;
			}
		}
		cout << "max value is : " << max << endl;
		arr[index].key = arr[cur_pos].key;
		arr[index].data = arr[cur_pos].data;
		cur_pos--;
		del_max(index);

	}
	void del_max(int cur)
	{
		int i = cur;
		while (i > 1)
		{
			int p = i / 2;
			if (arr[i].key < arr[p].key)
			{
				int t = arr[i].key;
				arr[i].key = arr[p].key;
				arr[p].key = t;
				double d = arr[i].data;
				arr[i].data = arr[p].data;
				arr[p].data = d;
				i = p;
			}
			else
				break;
		}

	}
	int size_heap()
	{
		return cur_pos;
	}
	int top_heap()
	{
		return arr[1].key;
	}
	void display()
	{
		for (int i = 1; i <= cur_pos; i++)
		{
			cout << arr[i].key << ", " << arr[i].data << endl;

		}
		cout << endl;
	}
	int search(int val)
	{
		for (int i = 1; i <= cur_pos; i++)
		{
			if (arr[i].key == val)
				return i;
		}
		return -1;
	}
	void display_node(int val)
	{
		int p = search(val);
		if (p == -1)
			cout << "not found!!";
		else
		{
			cout << "parent: " << arr[p].key << endl;
			if (p * 2 <= cur_pos)
				cout << "left: " << arr[p * 2].key << endl;
			else
				cout << "\n\tleft not found\n";
			if (p * 2 + 1 <= cur_pos)
				cout << "right: " << arr[p * 2 + 1].key << endl;
			else
				cout << "\n\tright not found\n";
		}

	}
};
void main()
{
	int size = 7;
	heap_struct obj(7);
	int val;
	double d;
	for (int i = 0; i < 7; i++)
	{
		cout << "enter key #" << (i + 1) << " : ";
		cin >> val;
		cout << "enter data for key: ";
		cin >> d;
		if (obj.enqueue(val, d))
			cout << "\n\tenqueued\n";
		else

			cout << "\n\theap is full\n";
	}
	obj.display();
	obj.find_max();
	obj.display();
	cout << "enter value to print left and right : ";
	cin >> val;
	obj.display_node(val);
	system("pause");
	/*val = obj.top_heap();
	cout << "top key is : " << val<<endl;
	if (obj.dequeue())
	cout << "\nvalue deleted\n";
	else
	cout << "\nnot deleted\n";
	obj.display();
	val = obj.size_heap();
	cout << "size of heap is : " << val << endl;*/
}