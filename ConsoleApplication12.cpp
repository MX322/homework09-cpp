#include <iostream>
using namespace std;



int task1()
{
	int sum = 0;
	int j = 0;
	for (int i = 0; i < 10000000; i++)
	{
		for (; j < i; j++)
		{
			sum += j;
			if (sum == i) cout << i << "\n";
		}
		j = 0;
		sum = 0;
	}   
}


int task2()
{

    int prev_num_01 = 0;
    int prev_num_02 = 1;

    for (int i = 2; i < 10000000; i++)
    {
    

    	int sum = prev_num_01 + prev_num_02;

    	cout << sum << "\n";
    	prev_num_02 = prev_num_01;
    	prev_num_01 = sum;
    	
    	sum = 0;
    }

    return 0;
}


int task3()
{
    setlocale(0, "");


    int num;
    int height;
    cout << "количество ярусов: ";    
    cin >> num;

    cout << "высота яруса: "; 
    cin >> height;

    int temp = num * height;
    int check = temp / 2;

    cout << "\n";

    for (int i = 1; i <= num; i++)
    {
        int j = i;
        for (int k = 0; k < height; k++, j++)
        {
            for (int n = 0; n < temp; n++)
            {
                if (n < check + j && n > check - j)
                {
                    cout << (char)178 << (char)172;
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
    return 0;
}


int main()
{
    task1();
    task2();
    task3();
}