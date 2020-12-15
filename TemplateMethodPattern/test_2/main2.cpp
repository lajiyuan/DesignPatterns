//
// Created by biubiubiu on 2020/11/25.
//

#include <iostream>
#include "GreatApplication.h"

int main(int argc, char **argv) {
    google::InitGoogleLogging(argv[0]);
    FLAGS_alsologtostderr = true;
    Application app(1, 2);
    app.Run();
    Application app2(3,4);
    app2.Run();
    return 0;
}
