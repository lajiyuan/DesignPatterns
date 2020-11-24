//
// Created by biubiubiu on 2020/11/25.
//

#ifndef TEMPLATEMETHODPATTERN_APPLICATION_H
#define TEMPLATEMETHODPATTERN_APPLICATION_H
#include "glog/logging.h"
#include "Library.h"
class Application {
public:
    int mem;
    explicit Application(int data, int _m)
    {
        mem = _m;
    }
    bool Step2() const{
        LOG(INFO) << "Step2" << " " << mem;
        return false;
    }

    bool Step4() const{
        LOG(INFO) << "Step4" << " " << mem;
        return false;
    }
};
#endif //TEMPLATEMETHODPATTERN_APPLICATION_H
