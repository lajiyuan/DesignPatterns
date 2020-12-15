//
// Created by biubiubiu on 2020/11/25.
//

#ifndef TEMPLATEMETHODPATTERN_GREATLIBRARY_H
#define TEMPLATEMETHODPATTERN_LIBRARY_H

#include "glog/logging.h"

class Library
{
public:
    int mData;
    explicit Library(int _data)
    {
        mData = _data;
    }
    bool Step1 () const
    {
        LOG(INFO) << "Step1 " << mData ;
        return false;
    }

    bool Step3 () const
    {
        LOG(INFO) << "Step3 " << mData ;
        return false;
    }

    bool Step5 () const
    {
        LOG(INFO) << "Step3 " << mData ;
        return false;
    }

};


#endif //TEMPLATEMETHODPATTERN_GREATLIBRARY_H
