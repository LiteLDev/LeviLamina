#pragma once
#include "CommandCompatibleAPI.h"
#include <DynamicCommandAPI.h>
class CommandClass;
extern ClassDefine<CommandClass> CommandClassBuilder;

class CommandClass : public ScriptClass
{
    std::unique_ptr<DynamicCommandInstance> uptr;
    DynamicCommandInstance* ptr;
    inline DynamicCommandInstance* get()
    {
        if (uptr)
            return uptr.get();
        return ptr;
    }

public:
    CommandClass(std::unique_ptr<DynamicCommandInstance>&& p);
    static Local<Object> newCommand(std::unique_ptr<DynamicCommandInstance>&& p);
    //name, description, permission, flag
    Local<Value> getName();
    // string, vector<string>
    Local<Value> addEnum(const Arguments& args);
    // type, name, optional, description, identifier
    // type, name, description, identifier
    Local<Value> newParameter(const Arguments& args);
    // vector<identifier>
    // vector<int>
    Local<Value> addOverload(const Arguments& args);
    // function (origin, output, results){}
    Local<Value> setCallback(const Arguments& args);

    Local<Value> setup(const Arguments& args);
};