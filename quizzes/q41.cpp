#include <iostream>
using namespace std;

int main()
{
  int selection;
  float area;

  cout << "Geometry Calculator\n";
  cout << "----------------------------\n";
  cout << "1. Calculate the Area of a Circle\n";
  cout << "2. Calculate the Area of a Rectangle\n";
  cout << "3. Calculate the Area of a Triangle\n";
  cout << "4. Quit\n";
  cout << "Please enter your choice (1-4):\n";

  cin >> selection;

  switch (selection)
  {
    case 1:
    {
      float radius;
      float pi = 3.14159;
      cout << "Please enter the radius:\n";
      cin >> radius;
      if (radius < 0)
      {
        cout << "Invalid input!\n";
        break;
      }
      area = (radius * radius) * pi;
      cout << "The area is: " << area << endl;
      break;
    }
    case 2:
    {
      float width, height;
      cout << "Please enter the width and height:\n";
      cin >> width >> height;
      if (width < 0 || height < 0)
      {
        cout << "Invalid input!\n";
        break;
      }
      area = width * height;
      cout << "The area is: " << area << endl;
      break;
    }
    case 3:
    {
      float width, height;
      cout << "Please enter the width and height:\n";
      cin >> width >> height;
      if (width < 0 || height < 0)
      {
        cout << "Invalid input!\n";
        break;
      }
      area = (width * height) / 2.0;
      cout << "The area is: " << area << endl;
      break;
    }
    case 4:
    {
      cout << "See you next time :)\n";
      break;
    }
    default:
    {
      cout << "Invalid input, sorry :(\n";
      break;
    }
  }
  return 0;
}