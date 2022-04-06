void fsort(vector <string>& numb) {
	for (int i = 0; i < numb.size(); ++i) {
		for (int j = 0; j < numb.size() - i - 1; ++j) {
			if (numb[j] < numb[j + 1])
				swap(numb[j + 1], numb[j]);
		}
	}
}

void emplace_world(vector <string>& mass, vector <string>& v)
{
	int count = 1;
	for (int i = 0; i < mass.size() - 1; i++)
	{
		if (mass[i] == mass[i + 1])
		{
			count++;
		}
		else
		{
			if (count > 1)
			{
				for (int j = 0; j < count; j++)
				{
					v.push_back(mass[i]);
				}
			}
			count = 1;
		}
	}
}

int main()
{
	ifstream file;
	ofstream file2;
	string s;
	vector <string> arr;
	vector <string> arr1;
	file.open("f1.txt");
	file2.open("f2.txt");

	for (file >> s; !file.eof(); file >> s)
	{
		arr.emplace_back(s);
	}

	fsort(arr);
	emplace_world(arr, arr1);

	for (auto i : arr1)
	{
		file2 << i << endl;
	}

	file.close();
	file2.close();

}