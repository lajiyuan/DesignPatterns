#include <iostream>
#include "Application.h"
int main(int argc, char **argv) {
    google::InitGoogleLogging(argv[0]);
    FLAGS_alsologtostderr = true;
    std::cout << "Hello, World!" << std::endl;
    Application app(0, 10);
    Library lib(8);
    lib.Step1();
    app.Step2();
    lib.Step3();
    app.Step4();
    return 0;
}
