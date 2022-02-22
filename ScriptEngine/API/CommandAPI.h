#pragma once
#include "CommandCompatibleAPI.h"
#include <DynamicCommandAPI.h>

extern ClassDefine<void> ParamStaticBuilder;
extern ClassDefine<void> PermissionStaticBuilder;

class CommandClass : public ScriptClass
{
    std::unique_ptr<DynamicCommandInstance> uptr;
    DynamicCommandInstance* ptr;
    bool registered = false;
    inline DynamicCommandInstance* get()
    {
        return ptr;
    }
    inline std::vector<std::string> parseStringList(Local<Array> arr)
    {
        if (arr.size() == 0 || !arr.get(0).isString())
            return {};
        std::vector<std::string> strs;
        for (size_t i = 0; i < arr.size(); i++)
        {
            strs.push_back(arr.get(i).toStr());
        }
        return std::move(strs);
    }
    inline Local<Value> getStringArray(std::vector<std::string> values)
    {
        Local<Array> arr = Array::newArray(values.size());
        for (auto& str : values)
        {
            arr.add(String::newString(str));
        }
        return arr;
    }

public:
    CommandClass(std::unique_ptr<DynamicCommandInstance>&& p);
    CommandClass(DynamicCommandInstance* p);
    static Local<Object> newCommand(std::unique_ptr<DynamicCommandInstance>&& p);
    static Local<Object> newCommand(DynamicCommandInstance* p);
    Local<Value> getName();
    Local<Value> setEnum(const Arguments& args);
    Local<Value> newParameter(const Arguments& args);
    Local<Value> mandatory(const Arguments& args);
    Local<Value> optional(const Arguments& args);
    Local<Value> addOverload(const Arguments& args);
    Local<Value> setCallback(const Arguments& args);
    Local<Value> setup(const Arguments& args);
    Local<Value> isRegistered();
    Local<Value> toString(const Arguments& args);
    Local<Value> setSoftEnum(const Arguments& args);
    Local<Value> addSoftEnumValues(const Arguments& args);
    Local<Value> removeSoftEnumValues(const Arguments& args);
    Local<Value> getSoftEnumValues(const Arguments& args);
    Local<Value> getSoftEnumNames(const Arguments& args);
};
extern ClassDefine<CommandClass> CommandClassBuilder;
