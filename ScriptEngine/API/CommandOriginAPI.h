#pragma once
#include "APIHelp.h"
#include <MC/CommandOrigin.hpp>

class CommandOriginClass;
extern ClassDefine<void> OriginTypeStaticBuilder;
extern ClassDefine<CommandOriginClass> CommandOriginClassBuilder;


class CommandOriginClass : public ScriptClass {
    CommandOrigin const* ptr;
    inline CommandOrigin const* get() {
        return ptr;
    }

public:
    CommandOriginClass(CommandOrigin const* p);
    static Local<Object> newCommandOrigin(CommandOrigin const* p);
    Local<Value> getOriginType();
    Local<Value> getOriginTypeName();
    Local<Value> getOriginName();
    Local<Value> getBlockPosition();
    Local<Value> getPosition();
    Local<Value> getEntity();
    Local<Value> getPlayer();
    Local<Value> getNbt(const Arguments& args);
    Local<Value> toString();
};
