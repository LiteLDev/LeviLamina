#pragma once
#include "APIHelp.h"


//////////////////// System Static ////////////////////

class SystemClass {
public:
    static Local<Value> getTimeStr(const Arguments& args);
    static Local<Value> getTimeObj(const Arguments& args);
    static Local<Value> randomGuid(const Arguments& args);

    static Local<Value> cmd(const Arguments& args);
    static Local<Value> newProcess(const Arguments& args);
};
extern ClassDefine<void> SystemClassBuilder;