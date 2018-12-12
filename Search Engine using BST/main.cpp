#include "bst.h"
#include<hash_map>
#include<algorithm>
void create_files();
string getFile(string);
void main()
{
	system("mode con:cols=135 lines=12000");
	//create_files();                    //this function split files into many files so searching in the
	//will be easy
	hash_map<string, int>map, map2;
	hash_map<string, int>::iterator itr;
	hash_map<string, int>::size_type size;
	vector<std::pair<string, int>>vec;
	string str;
	fstream file1;
	string fname;
	file1.open("name.txt", ios::in | ios::out);
	while (getline(file1, str))
	{
		map[str]++;            //storing count of every record/key in map

	}
	file1.close();



	for (itr = map.begin(); itr != map.end(); itr++)    //iterate map from to end 
	{
		vec.push_back(make_pair(itr->first, itr->second));    //move data from map to vector
	}
	sort(vec.begin(), vec.end(), [](pair<string, int>&i, pair<string, int>&j)  //built-in function that
	{ return i.second > j.second; });										   //that will sort map



	int count = 0;
	binary_tree bobj;
	for (int i = 0; i < vec.size() && count<10000; i++) //
	{
		if (count < 10)
		{
			string str2 = (vec[i].first);
			string file = getFile(str2); //this function find the file where that record exist
			string url = bobj.get_url(str2, file);  //this function get the url's of that key/pagename from file
			bobj.insert_in_bst(str2, url);
		}
		else
		{
			string str2 = (vec[i].first);
			string file = getFile(str2);
			bobj.insert_in_bst(str2, file);    //to place simply filename and key in bst
		}
		count++;
	}
	string srch;
	for (int z = 0; z < 3; z++)
	{
		cout << "\nenter string to be searched : ";   //to search records related to url
		cin >> srch;
		bobj.showResult(srch);
	}
	cout << endl;



}
string getFile(string str)
{
	int i = 0;
	string fname;
	if ((str[i] >= 'a'&&str[i] <= 'd') || (str[i] >= 'A' && str[i] <= 'D'))
	{
		fname = "adfile.txt";
	}
	else if ((str[i] >= 'e'&&str[i] <= 'h') || (str[i] >= 'E' && str[i] <= 'H'))
	{
		fname = "ehfile.txt";
	}
	else if ((str[i] >= 'i'&&str[i] <= 'l') || (str[i] >= 'I' && str[i] <= 'L'))
	{
		fname = "ilfile.txt";
	}
	else if ((str[i] >= 'm'&&str[i] <= 'p') || (str[i] >= 'M' && str[i] <= 'P'))
	{
		fname = "mpfile.txt";
	}
	else if ((str[i] >= 'q'&&str[i] <= 't') || (str[i] >= 'Q' && str[i] <= 'T'))
	{
		fname = "qtfile.txt";
	}
	else
	{
		fname = "lastfile.txt";
	}
	return fname;
}
void create_files()
{
	string str;
	fstream file;
	int i = 0;
	int count = 0;
	file.open("search.txt", ios::in | ios::out);
	while (getline(file, str))            //splitting records in many files
	{
		if ((str[i] >= 'a'&&str[i] <= 'd') || (str[i] >= 'A'&&str[i] <= 'D'))
		{
			fstream in;
			in.open("adfile.txt", ios::in | ios::out | ios::app);
			in << str;
			in << endl;
			in.close();
		}
		else if ((str[i] >= 'e'&&str[i] <= 'h') || (str[i] >= 'E' && str[i] <= 'H'))
		{
			fstream in;
			in.open("ehfile.txt", ios::in | ios::out | ios::app);
			in << str;
			in << endl;
			in.close();
		}
		else if ((str[i] >= 'i'&&str[i] <= 'l') || (str[i] >= 'I' && str[i] <= 'L'))
		{
			fstream in;
			in.open("ilfile.txt", ios::in | ios::out | ios::app);
			in << str;
			in << endl;
			in.close();
		}
		else if ((str[i] >= 'm'&&str[i] <= 'p') || (str[i] >= 'M' && str[i] <= 'P'))
		{
			fstream in;
			in.open("mpfile.txt", ios::in | ios::out | ios::app);
			in << str;
			in << endl;
			in.close();
		}
		else if ((str[i] >= 'q'&&str[i] <= 't') || (str[i] >= 'Q' && str[i] <= 'T'))
		{
			fstream in;
			in.open("qtfile.txt", ios::in | ios::out | ios::app);
			in << str;
			in << endl;
			in.close();
		}
		else
		{
			fstream in;
			in.open("lastfile.txt", ios::in | ios::out | ios::app);
			in << str;
			in << endl;
			in.close();
		}
	}
	file.close();

}