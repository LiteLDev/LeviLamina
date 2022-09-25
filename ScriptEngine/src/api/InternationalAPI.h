#pragma once
#include "api/APIHelp.h"

class I18nClass {
public:
    static Local<Value> tr(const Arguments& args);
    static Local<Value> trl(const Arguments& args);
    static Local<Value> get(const Arguments& args);
    static Local<Value> load(const Arguments& args);
};
extern ClassDefine<void> I18nClassBuilder;
