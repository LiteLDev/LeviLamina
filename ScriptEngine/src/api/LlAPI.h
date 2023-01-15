#pragma once
#include "api/APIHelp.h"


//////////////////// LLSE Static ////////////////////

class LlClass {
public:
    static Local<Value> getLanguage();
    static Local<Value> getMajorVersion();
    static Local<Value> getMinorVersion();
    static Local<Value> getRevisionVersion();
    static Local<Value> getScriptEngineVersion();
    static Local<Value> getVersionStatus();
    static Local<Value> isRelease();
    static Local<Value> isBeta();
    static Local<Value> isDev();
    static Local<Value> isWine();
    static Local<Value> isDebugMode(); 

    static Local<Value> registerPlugin(const Arguments& args);
    static Local<Value> versionString(const Arguments& args);
    static Local<Value> requireVersion(const Arguments& args);
    static Local<Value> getAllPluginInfo(const Arguments& args);
    static Local<Value> listPlugins(const Arguments& args);
    static Local<Value> exportFunc(const Arguments& args);
    static Local<Value> importFunc(const Arguments& args);
    static Local<Value> hasFuncExported(const Arguments& args);
    static Local<Value> require(const Arguments& args);
    static Local<Value> eval(const Arguments& args);
    static Local<Value> getPluginInfo(const Arguments& args);

    // For Compatibility
    static Local<Value> version(const Arguments& args);
    static Local<Value> getVersionStatusFunction(const Arguments& args);
    static Local<Value> isDebugModeFunction(const Arguments& args);
    static Local<Value> getScriptEngineVersionFunction(const Arguments& args);
};
extern ClassDefine<void> LlClassBuilder;
extern ClassDefine<void> VersionClassBuilder;