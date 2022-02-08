#pragma once
#include "APIHelp.h"


//////////////////// LXL Static ////////////////////

class LxlClass
{
public:
    static Local<Value> registerPlugin(const Arguments& args);
    static Local<Value> version(const Arguments& args);
    static Local<Value> requireVersion(const Arguments& args);
    static Local<Value> listPlugins(const Arguments& args);
    static Local<Value> importFunc(const Arguments& args);
    static Local<Value> exportFunc(const Arguments& args);
    static Local<Value> require(const Arguments& args);
    static Local<Value> eval(const Arguments& args);
};
extern ClassDefine<void> LxlClassBuilder;