#pragma once
#include "APIHelp.h"
#include <string>

//////////////////// Classes ////////////////////
class Container;
class ContainerClass : public ScriptClass {
private:
    Container* container;

public:
    explicit ContainerClass(Container* p);

    Container* get() {
        return container;
    }

    static Local<Object> newContainer(Container* p);
    static Container* extract(Local<Value> v);
    Local<Value> asPointer(const Arguments& args);

    Local<Value> getSize();
    Local<Value> getType();

    Local<Value> addItem(const Arguments& args);
    Local<Value> addItemToFirstEmptySlot(const Arguments& args);
    Local<Value> hasRoomFor(const Arguments& args);
    Local<Value> removeItem(const Arguments& args);
    Local<Value> getItem(const Arguments& args);
    Local<Value> setItem(const Arguments& args);
    Local<Value> getAllItems(const Arguments& args);
    Local<Value> removeAllItems(const Arguments& args);
    Local<Value> isEmpty(const Arguments& args);
};
extern ClassDefine<ContainerClass> ContainerClassBuilder;