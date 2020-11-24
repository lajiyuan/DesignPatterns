//
// Created by biubiubiu on 2020/11/25.
//

#ifndef TEMPLATEMETHODPATTERN_GREATAPPLICATION_H
#define TEMPLATEMETHODPATTERN_GREATAPPLICATION_H
#include "glog/logging.h"
#include "GreatLibrary.h"
class Application : public GreatLibrary{
public:
    int mem;
    explicit Application(int data, int _m) : GreatLibrary(data) {
        mem = _m;
    }

protected:
    bool Step2() override{
        LOG(INFO) << "Step2" << " " << mem;
        return false;
    }

    bool Step4() override{
        LOG(INFO) << "Step4" << " " << mem;
        return false;
    }
};
#endif //TEMPLATEMETHODPATTERN_GREATAPPLICATION_H
