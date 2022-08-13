#pragma once
#include "APIHelp.h"
#include <string>
#include <dyncall/dyncall.h>
#include <dyncall/dyncall_callback.h>
#include <Tools/Demangler/include/MicrosoftDemangleNodes.h>
#include <concurrent_unordered_map.h>

class NativeFunction {
public:
    // TypesEnum
    enum class Types : int {
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
    };

    template <Types T>
    static Local<Value> getType() {
        return Number::newNumber((int)T);
    }
    // Data Members
    NativeFunction::Types mReturnVal = NativeFunction::Types::Void;
    vector<NativeFunction::Types> mParams = {};
    std::string mSymbol = "unknown";
    void* mFunction = nullptr;

    // Dyncall Helper

    /* get dynamic call signature char for Type*/
    static char getTypeSignature(NativeFunction::Types type);
    /* get NativeFunction::Type from LLVM Ast Node*/
    static NativeFunction::Types getNativeType(llvm::ms_demangle::Node* type);
    /* get dynamic call signature string for this function*/
    std::string buildDynCallbackSig();

    // Script Helper
    /* get a script::Function instance for scripts to call*/
    Local<Value> getCallableFunction();
    /* call NativeFunction by using DynamicCallVM, internel api*/
    static Local<Value> callNativeFunction(DCCallVM* vm, NativeFunction* funcSymbol, const Arguments& args);
    /* shared Hook Callback function that wrap script callback*/
    static char nativeCallbackHandler(DCCallback* cb, DCArgs* args, DCValue* result, void* userdata);

    // Cache Helper
    static Concurrency::concurrent_unordered_map<std::string, NativeFunction> parsedSymbol;
    static NativeFunction getOrParse(const std::string& symbol);

    /* clone from other NativeFunction instance*/
    inline void cloneFrom(const NativeFunction& i) {
        this->mReturnVal = i.mReturnVal;
        this->mParams = i.mParams;
        this->mSymbol = i.mSymbol;
        this->mFunction = i.mFunction;
    }
};

class ScriptNativeFunction : public NativeFunction, public ScriptClass {
public:
    explicit ScriptNativeFunction(const Local<Object>& scriptObj)
    : ScriptClass(scriptObj) {
    }
    explicit ScriptNativeFunction(const Local<Object>& scriptObj, const NativeFunction& symbol)
    : NativeFunction(symbol), ScriptClass(scriptObj) {
    }

    /* create NativeFunction instance from mangled symbol
     * dlsym will be called to query the address
     * > NativeFunction.fromSymbol(string"?xxx@xxx")
     */
    static Local<Value> fromSymbol(const Arguments& args);

    /* create NativeFunction by describe the arguments
     * you should set address manually before you call or hook it
     * > NativeFunction.fromDescribe(RetuenValue: NativeTypes.Void, Params: [NativeType.Int......])
     */
    static Local<Value> fromDescribe(const Arguments& args);

    /* create NativeFunction that wrap Script Function by describe the arguments
     * > NativeFunction.fromScript(RetuenValue: NativeTypes.Void, Params: [NativeType.Int......], Callback: func(Params...){})
     */
    static Local<Value> fromScript(const Arguments& args);
    Local<Value> setAddress(const Local<Value>& value);
    Local<Value> getAddress();

    /* Hook current NativeFunction by passing a fuction
     * > NativeFunction.hook(CallBack: func(a1,a2,a3...){})
     */
    Local<Value> hook(const Arguments& args);
};

class DynamicHookData : public ScriptNativeFunction {
public:
    script::ScriptEngine* mEngine = nullptr;
    DCCallback* mNativeCallack = nullptr;
    script::Global<Function> mScriptCallback;
    explicit DynamicHookData(const Local<Object>& scriptObj)
    : ScriptNativeFunction(scriptObj) {
    }
    explicit DynamicHookData(const Local<Object>& scriptObj, const NativeFunction& symbol)
    : ScriptNativeFunction(scriptObj, symbol) {
    }
};

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

    static Local<Value> fromSymbol(const Arguments& args);

    static Local<Value> mallocMem(const Arguments& args);

    static Local<Value> freeMem(const Arguments& args);

    Local<Value> asRawAddress(const Arguments& args);

    Local<Value> asHexStr(const Arguments& args);

    Local<Value> offset(const Arguments& args);

    void setMemByte(const Local<Value>& value);
    void setChar(const Local<Value>& value);
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

class NativePatch : public ScriptClass {
public:
    explicit NativePatch(const Local<Object>& scriptObj)
    : ScriptClass(scriptObj) {
    }
    static Local<Value> search(const Arguments& args);
    static Local<Value> patch(const Arguments& args);
    static Local<Value> dump(const Arguments& args);
};

// export apis
extern ClassDefine<void> NativeTypeEnumBuilder;
extern ClassDefine<ScriptNativeFunction> NativeCallBuilder;
extern ClassDefine<DynamicHookData> NativeHookBuilder;
extern ClassDefine<NativePointer> NativePointerBuilder;
extern ClassDefine<NativePatch> NativePatchBuilder;
