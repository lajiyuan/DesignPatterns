//
// Created by biubiubiu on 2020/11/25.
//

#ifndef TEMPLATEMETHODPATTERN_GREATLIBRARY_H
#define TEMPLATEMETHODPATTERN_GREATLIBRARY_H
#include "glog/logging.h"

class GreatLibrary
{
public:
    int mData;
    explicit GreatLibrary(int _data) : mData(_data)
    {}
    virtual ~GreatLibrary()= default;
    bool Run() {
        this -> Step1();
        this -> Step2();
        this -> Step3();
        this -> Step4();
        this -> Step5();
        return true;
    }

protected:

    bool Step1 () const
    {
        LOG(INFO) << "Step1 " << mData ;
        return true;
    }

    bool Step3 () const
    {
        LOG(INFO) << "Step3 " << mData ;
        return true;
    }

    bool Step5 () const
    {
        LOG(INFO) << "Step5 " << mData ;
        return true;
    }

    virtual bool Step2() = 0;
    virtual bool Step4() = 0;


};
#endif //TEMPLATEMETHODPATTERN_GREATLIBRARY_H
