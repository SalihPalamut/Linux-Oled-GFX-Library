#include <iostream>
#include <Linux_GFX.h>
#include <Fonts/FreeSerif9pt7b.h>
using namespace std;

int main()
{
    GFXcanvas1 OledCanvas(128,64);

    OledCanvas.setFont(&FreeSerif9pt7b);
    OledCanvas.puts((uint8_t*)&"Hello World!",12);
    OledCanvas.getBuffer();

    cout << "Hello world!" <<OledCanvas.getCanvasSize()<< endl;

    return 0;
}
