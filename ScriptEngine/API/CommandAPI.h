#pragma once
#include "CommandCompatibleAPI.h"
#include <DynamicCommandAPI.h>
class CommandClass;
extern ClassDefine<CommandClass> CommandClassBuilder;

class CommandClass : public ScriptClass
{
    std::unique_ptr<DynamicCommandInstance> uptr;
    DynamicCommandInstance* ptr;
    bool registered = false;
    inline DynamicCommandInstance* get()
    {
        return ptr;
    }

public:
    CommandClass(std::unique_ptr<DynamicCommandInstance>&& p);
    CommandClass(DynamicCommandInstance* p);
    static Local<Object> newCommand(std::unique_ptr<DynamicCommandInstance>&& p);
    static Local<Object> newCommand(DynamicCommandInstance* p);
    Local<Value> getName();
    Local<Value> addEnum(const Arguments& args);
    Local<Value> newParameter(const Arguments& args);
    Local<Value> addOverload(const Arguments& args);
    Local<Value> setCallback(const Arguments& args);
    Local<Value> setup(const Arguments& args);
    Local<Value> isRegistered(const Arguments& args);
    Local<Value> toString(const Arguments& args);
};