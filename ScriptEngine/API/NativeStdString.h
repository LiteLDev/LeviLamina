#pragma once
#include "APIHelp.h"

class NativeStdString : public ScriptClass {
private:
    std::string* mStr;

public:
    explicit NativeStdString(const Local<Object>& scriptObj, std::string* ptr);
    explicit NativeStdString(std::string* ptr);
    static std::string* extract(Local<Value> v);
    static Local<Object> newNativeStdString(std::string* ptr);
    static NativeStdString* constructor(const Arguments& args);

    void* get() {
        return mStr;
    }

    void set(std::string* ptr) {
        mStr = ptr;
    };

    Local<Value> getNpos();

    Local<Value> clear();
    Local<Value> size();
    Local<Value> length();
    Local<Value> capacity();
    Local<Value> empty();
    Local<Value> front();
    Local<Value> back();
    Local<Value> pop_back();
    Local<Value> shrink_to_fit();

    Local<Value> at(const Arguments& args);
    Local<Value> append(const Arguments& args);
    Local<Value> push_back(const Arguments& args);
    Local<Value> assign(const Arguments& args);
    Local<Value> insert(const Arguments& args);
    Local<Value> erase(const Arguments& args);
    Local<Value> find(const Arguments& args);
    Local<Value> rfind(const Arguments& args);
    Local<Value> substr(const Arguments& args);
    Local<Value> compare(const Arguments& args);
    Local<Value> reserve(const Arguments& args);
    Local<Value> resize(const Arguments& args);

    Local<Value> toScriptString();
    Local<Value> destroy();
};

extern ClassDefine<NativeStdString> NativeStdStringBuilder;