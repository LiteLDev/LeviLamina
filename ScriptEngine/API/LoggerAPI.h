#pragma once
#include "APIHelp.h"


//////////////////// Classes ////////////////////

class LoggerClass
{
public:
    static Local<Value> log(const Arguments& args);
    static Local<Value> debug(const Arguments& args);
    static Local<Value> info(const Arguments& args);
    static Local<Value> warn(const Arguments& args);
    static Local<Value> error(const Arguments& args);
    static Local<Value> fatal(const Arguments& args);

    static Local<Value> setTitle(const Arguments& args);
    static Local<Value> setConsole(const Arguments& args);
    static Local<Value> setFile(const Arguments& args);
    static Local<Value> setPlayer(const Arguments& args);

    static Local<Value> setLogLevel(const Arguments& args);
};
extern ClassDefine<void> LoggerClassBuilder;