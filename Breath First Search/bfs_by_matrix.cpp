//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//std::queue<int>qobj;
//int *dist;
//int *parent;
//class graph
//{
//	int **data;
//	int size;             //by matrix
//	graph *gprnt;
//public:
//	graph(int s)
//	{
//		size = s;
//		data = new int*[size];
//		for (int i = 0; i < size; i++)
//		{
//			data[i] = new int[size];
//		}
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = 0; j < size; j++)
//				data[i][j] = 0;
//		}
//	}
//	void addEdge(int u, int v)
//	{
//		
//		data[u][v] = 1;
//		data[v][u] = 1;
//	}
//	void bfs(int s)
//	{
//		bool *p;
//		p = new bool[size];
//		for (int i = 0; i < size; i++)
//		{
//			p[i] = false;
//		}
//		qobj.push(s);
//
//		while (!(qobj.empty()))
//		{
//			int r = qobj.front();
//			qobj.pop();
//			for (int c = 0; c < size; c++)
//			{
//				if (data[r][c] == 1)
//				{
//					if (p[c] == false)
//					{
//						p[c] = true;
//						qobj.push(c);
//						cout << c << ", ";
//					}
//				}
//			}
//
//		}
//	}
//	void short_path(int s)
//	{
//		bool *p;
//		p = new bool[size];
//		dist = new int[size];
//		parent = new int[size];
//		for (int i = 0; i < size; i++)
//		{
//			p[i] = false;
//			dist[i] = -1;
//			parent[i] = numeric_limits<int>::max();
//		}
//		qobj.push(s);
//		dist[s] = 0;
//		cout << s << ", ";
//		p[s] = true;
//
//		while (!(qobj.empty()))
//		{
//			int r = qobj.front();
//			qobj.pop();
//			for (int c = 0; c < size; c++)
//			{
//				if (data[r][c] == 1)
//				{
//					if (p[c] == false)
//					{
//						p[c] = true;
//						qobj.push(c);
//						cout << c << ", ";
//						dist[c] = dist[r] + 1;
//						parent[c] = r;
//					}
//				}
//			}
//
//		}
//		cout << endl;
//		displayPath(0, 4);
//
//	}
//
//	void displayPath(int s, int d)
//	{
//		if (s == d){
//			cout << d;
//		}
//		else{
//			displayPath(s, parent[d]);
//			cout << "->" << d;
//		}
//	}
//	bool isConnected(int u, int v)
//	{
//		if (data[u][v] == 1)
//			return true;
//		else
//			return false;
//	}
//
//
//
//};
//void main()
//{
//	graph obj(6);
//		obj.addEdge(0, 1);
//		obj.addEdge(0, 3);
//		obj.addEdge(1,2);
//		obj.addEdge(2, 3);
//		obj.addEdge(2, 5);
//		obj.addEdge(3, 5);
//		obj.addEdge(2, 4);
//		obj.short_path(0);
//		cout << endl;
//}