#include <iostream>
#include "Application.h"
int main(int argc, char **argv) {
    google::InitGoogleLogging(argv[0]);
    FLAGS_alsologtostderr = true;

    // 第一个app
    Application app(0, 10);
    Library lib(8);
    lib.Step1();
    app.Step2();
    lib.Step3();
    app.Step4();
    lib.Step5();

    // 第二个app
    Application app2(0,3);
    lib.Step1();
    app2.Step2();
    lib.Step3();
    app2.Step4();
    lib.Step5();
    return 0;
}
