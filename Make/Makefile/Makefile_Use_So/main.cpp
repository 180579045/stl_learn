#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "calc2.h"

using namespace std;

int main(int argc, char **argv)
{
    int ret = 0;
    // 这里直接调用了一个不带后缀名的shared library文件，但是没法用……
    //func2(&ret);
    Get_Min(10,20);
    std::cout << "ret is " << ret << std::endl;
    std::cout << "GetMin: " << Get_Min(10,20) << std::endl;
}