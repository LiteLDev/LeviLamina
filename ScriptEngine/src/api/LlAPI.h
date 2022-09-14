#pragma once
#include "APIHelp.h"


//////////////////// LLSE Static ////////////////////

class LlClass {
public:
    static Local<Value> registerPlugin(const Arguments& args);
    static Local<Value> version(const Arguments& args);
    static Local<Value> getVersionStatus(const Arguments& args);
    static Local<Value> isDebugMode(const Arguments& args);
    static Local<Value> versionString(const Arguments& args);
    static Local<Value> requireVersion(const Arguments& args);
    static Local<Value> getAllPluginInfo(const Arguments& args);
    static Local<Value> listPlugins(const Arguments& args);
    static Local<Value> exportFunc(const Arguments& args);
    static Local<Value> importFunc(const Arguments& args);
    static Local<Value> hasFuncExported(const Arguments& args);
    static Local<Value> require(const Arguments& args);
    static Local<Value> getScriptEngineVersion(const Arguments& args);
    static Local<Value> eval(const Arguments& args);
    static Local<Value> getPluginInfo(const Arguments& args);

    static Local<Value> getLanguage();
};
extern ClassDefine<void> LlClassBuilder;