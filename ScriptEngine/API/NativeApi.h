#pragma once
#include "APIHelp.h"
#include <string>


class NativeClass {
public:
    static Local<Value> hook(const Arguments& args);
    static Local<Value> getSymbol(const Arguments& args);
    static Local<Value> getItemClass(const Arguments& args);
    static Local<Value> searchAddress(const Arguments& args);
    static Local<Value> patch(const Arguments& args);
    static Local<Value> getSymbolAddress(const Arguments& args);
};
extern ClassDefine<void> NativeClassBuilder;


class NativePointer : public ScriptClass {
private:
    void* mPtr;

public:
    explicit NativePointer(void*);

    static void* extract(Local<Value> v);

    static Local<Object> newNativePointer(void*);

    void* wrap() {
        return dAccess<void*>(this, 0);
    }

    void* unwrap() {
        return (void*)&(*((int*)mPtr));
    }

    void* get() {
        return mPtr;
    }

    void set(void* ptr) {
        mPtr = ptr;
    };

    Local<Value> getRawPtr(const Arguments& args);
    Local<Value> getRawPtrAsHex(const Arguments& args);

    Local<Value> offset(const Arguments& args);

    void setChar(const Local<Value>& value);
    void setMenByte(const Local<Value>& value);
    void setUchar(const Local<Value>& value);
    void setShort(const Local<Value>& value);
    void setUshort(const Local<Value>& value);
    void setInt(const Local<Value>& value);
    void setUint(const Local<Value>& value);
    void setLong(const Local<Value>& value);
    void setUlong(const Local<Value>& value);
    void setLonglong(const Local<Value>& value);
    void setUlonglong(const Local<Value>& value);
    void setFloat(const Local<Value>& value);
    void setDouble(const Local<Value>& value);
    void setString(const Local<Value>& value);
    void setBool(const Local<Value>& value);
    // Local<Value> setWstring(const Arguments& args);
    // Local<Value> setVoid(const Arguments& args);
    // Local<Value> setPointer(const Arguments& args);

    Local<Value> getMemByte();
    Local<Value> getChar();
    Local<Value> getUchar();
    Local<Value> getShort();
    Local<Value> getUshort();
    Local<Value> getInt();
    Local<Value> getUint();
    Local<Value> getLong();
    Local<Value> getUlong();
    Local<Value> getLonglong();
    Local<Value> getUlonglong();
    Local<Value> getFloat();
    Local<Value> getDouble();
    Local<Value> getString();
    Local<Value> getBool();
};
extern ClassDefine<NativePointer> NativePointerBuilder;


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