#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const char TL_CORNER[] = "┌";
const char BL_CORNER[] = "└";
const char BR_CORNER[] = "┘";
const char TR_CORNER[] = "┐";
const char HORIZ[] = "─";
const char VERT[] = "│";

void drawRectangle(int w, int h);
void drawALine(int w, const char* left, const char* mid, const char* right);

int main() {
  int width (0);
  int height (0);

  cout << "Enter rectangle width: ";
  cin >> width;

  cout << "Enter rectangle height: ";
  cin >> height;

  drawRectangle(width, height);
}
void drawRectangle(int w, int h)
{
  drawALine(w, TL_CORNER, HORIZ, TR_CORNER);
  for(int y = 0; y < h - 2; y++) {
    drawALine(w, VERT, " ", VERT);
  }
  drawALine(w, BL_CORNER, HORIZ, BR_CORNER);
}
void drawALine(int w, const char* left, const char* mid, const char* right)
{
  cout << left;
  for(int x = 0; x < w -2; x++){
    cout << mid;
  }
  cout << right << endl;

}


