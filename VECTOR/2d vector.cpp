#include <vector>
#include <iostream>
using namespace std;

#define HEIGHT 3
#define WIDTH 3

// 2D VECTOR ARRAY EXAMPLE

int main() {
vector<vector<double> > array2D;
vector<double> currentRow;
double c;

// Set up sizes. (HEIGHT x WIDTH)
// 2D resize
array2D.resize(HEIGHT);
for (int i = 0; i < HEIGHT; ++i)
{
  array2D[i].resize(WIDTH);
}


for (int i = 0; i < HEIGHT; ++i)
{
    for(int j=0;j<WIDTH;j++)
    {
        cin>>c;
       array2D[i][j]=c;
    }
}

// Try putting some values in
//array2D[1][2] = 6.0; // this works
//array2D[2].push_back(45); // this value doesn't appear in vector output.  Why?

// 1D resize
//currentRow.resize(3);

// Insert values into row
//currentRow[0] = 1;
//currentRow[1] = 12.76;
//currentRow[2] = 3;

// Push row into 2D array
//array2D.push_back(currentRow); // this row doesn't appear in value output.  Why?

// Output all values
for (int i = 0; i < HEIGHT; ++i)
{
  for (int j = 0; j < WIDTH; ++j)
    {
        std::cout << array2D[i][j] << '\t';
  }
  std::cout << std::endl;
 }
 return 0;
}
