#pragma once
#include "APIHelp.h"

class I18nClass {
public:
    static Local<Value> _tr(const Arguments& args);
    static Local<Value> _load(const Arguments& args);
};
extern ClassDefine<I18nClass> I18nClassBuilder;
