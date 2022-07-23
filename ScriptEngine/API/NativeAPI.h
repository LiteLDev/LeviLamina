#pragma once
#include "APIHelp.h"
#include <string>

enum class NativeTypes : int {
    Void,
    Bool,
    Char,
    UnsignedChar,
    Short,
    UnsignedShort,
    Int,
    UnsignedInt,
    Long,
    UnsignedLong,
    LongLong,
    UnsignedLongLong,
    Float,
    Double,
    Pointer,
    CString,
    CWideString,
    String,
    WideString,
    Vector,
    Map,
    Int8,
    Int16,
    Int32,
    Int64,
    HANDLE,
    DWORD,
    LPSTR,
    LPWSTR,

    Player,
    Block,
    Entity,
    ItemStack,
    BlockEntity,
    Container,
    Objective,
    BlockPos,
    Vec3
};

class NativeClass{
    public:
        static Local<Value> Hook(const Arguments& args);
};
extern ClassDefine<void> NativeClassBuilder;