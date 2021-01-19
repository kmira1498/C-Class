#include <iostream>
using namespace std;

//define function floyd to create the desired floyd's triangle
void floyd (int lines)
{
  int number = 1;

    cout << "Number of lines you want to display of Floyd's triangle: ";
    cin >> lines;

  for(int i = 1; i <= lines; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
          cout << number << " ";
          ++number;
        }
           
      cout << endl;
    };
}

// call function
int main()
{
  int lines;
  floyd(lines);

  return 0;
}