#include "APIHelp.h"
#include "NativeAPI.h"
#include <dyncall/dyncall_callback.h>
#include <magic_enum/magic_enum.hpp>

#include "../Tools/Demangler/include/MicrosoftDemangle.h"

DCCallVM* vm;
using namespace llvm::ms_demangle;

#define NATIVE_CHECK_ARG_TYPE(TYPE)                                  \
    if (args[i].getKind() != TYPE) {                                 \
        logger.error("Wrong type of argument!");                     \
        logger.error("In Symbol: " + sym);                           \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>();                                       \
    }

#define NATIVE_CHECK_ARG_CLASS(TYPE)                                 \
    if (!IsInstanceOf<TYPE>(args[i])) {                              \
        logger.error("Wrong type of argument!");                     \
        logger.error("In Symbol: " + sym);                           \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>();                                       \
    }

ClassDefine<void> NativeClassBuilder =
    defineClass("native")
        .function("Hook", &NativeClass::hook)
        .function("getSymbol", &NativeClass::getSymbol)
        .function("searchAddress", &NativeClass::searchAddress)
        .function("patch", &NativeClass::patch)
        .function("getSymbolAddress", &NativeClass::getSymbolAddress)
        .function("dump", &NativeClass::dump)
        .build();


struct SymbolTypeData {
    NativeTypes ret;

    vector<NativeTypes> paras;

    void* func;
};
using script::Global;

struct DyHookData {

    string sym;
    void* origin;
    DCCallback* cb;

    ScriptEngine* engine;
    Global<Function> callback;

    DyHookData(const string& sym, ScriptEngine* cur, Local<Function> callback) {
        this->sym = sym;
        this->engine = cur;
        this->callback = callback;
    }
};

vector<pair<NativeTypes, void*>> garbage;
list<DyHookData> hookData;
unordered_map<string, SymbolTypeData> symbols;


void InitDynamicCallSystem() {
    vm = dcNewCallVM(4096);
    dcMode(vm, DC_CALL_C_DEFAULT);
}

void* ResolveSymbol(const string& sym) {
    return dlsym_real(sym.c_str());
}

NativeTypes GetNativeTypes(llvm::ms_demangle::Node* type) {
    if (type) {
        if (type->kind() == NodeKind::PrimitiveType) {
            switch (((PrimitiveTypeNode*)type)->PrimKind) {
                case PrimitiveKind::Bool:
                    return NativeTypes::Bool;
                    break;
                case PrimitiveKind::Char:
                    return NativeTypes::Char;
                    break;
                case PrimitiveKind::Uchar:
                    return NativeTypes::UnsignedChar;
                    break;
                case PrimitiveKind::Short:
                    return NativeTypes::Short;
                    break;
                case PrimitiveKind::Ushort:
                    return NativeTypes::UnsignedShort;
                    break;
                case PrimitiveKind::Int:
                    return NativeTypes::Int;
                    break;
                case PrimitiveKind::Uint:
                    return NativeTypes::UnsignedInt;
                    break;
                case PrimitiveKind::Long:
                    return NativeTypes::Long;
                    break;
                case PrimitiveKind::Ulong:
                    return NativeTypes::UnsignedLong;
                    break;
                case PrimitiveKind::Int64:
                    return NativeTypes::LongLong;
                    break;
                case PrimitiveKind::Uint64:
                    return NativeTypes::UnsignedLongLong;
                    break;
                case PrimitiveKind::Float:
                    return NativeTypes::Float;
                    break;
                case PrimitiveKind::Double:
                    return NativeTypes::Double;
                    break;
                default:
                    return NativeTypes::Void;
            }
        } else if (type->kind() == NodeKind::PointerType || type->kind() == NodeKind::NamedIdentifier) {
            if (type->toString().find("std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>") != type->toString().npos) {
                return NativeTypes::String;
            }
            return NativeTypes::Pointer;
        } else if (type->kind() == NodeKind::TagType) {
            switch (((TagTypeNode*)type)->Tag) {
                case TagKind::Enum:
                    return NativeTypes::Int;
                default:
                    return NativeTypes::Pointer;
            }
        }
    }
    return NativeTypes::Void;
}

char GetTypeSignature(NativeTypes type) {
    switch (type) {
        case NativeTypes::Bool:
            return 'B';
            break;
        case NativeTypes::Char:
            return 'c';
            break;
        case NativeTypes::UnsignedChar:
            return 'C';
            break;
        case NativeTypes::Short:
            return 's';
            break;
        case NativeTypes::UnsignedShort:
            return 'S';
            break;
        case NativeTypes::Int:
            return 'i';
            break;
        case NativeTypes::UnsignedInt:
            return 'I';
            break;
        case NativeTypes::Long:
            return 'j';
            break;
        case NativeTypes::UnsignedLong:
            return 'J';
            break;
        case NativeTypes::LongLong:
            return 'l';
            break;
        case NativeTypes::UnsignedLongLong:
            return 'L';
            break;
        case NativeTypes::Float:
            return 'f';
            break;
        case NativeTypes::Double:
            return 'd';
            break;
        case NativeTypes::Pointer:
        case NativeTypes::String:
            return 'p';
            break;
        default:
            return 'v';
            break;
    }
}

char CallbackHandler(DCCallback* cb, DCArgs* args, DCValue* result, void* userdata) {
    DyHookData* hookInfo = (DyHookData*)userdata;
    SymbolTypeData sym = symbols[hookInfo->sym];

    EngineScope enter(hookInfo->engine);
    try {
        vector<Local<Value>> paras;
        for (int i = 0; i < sym.paras.size(); ++i) {
            switch (sym.paras[i]) {
                case NativeTypes::Bool:
                    paras.emplace_back(Boolean::newBoolean(dcbArgBool(args)));
                    break;
                case NativeTypes::Char:
                    paras.emplace_back(Number::newNumber(dcbArgChar(args)));
                    break;
                case NativeTypes::UnsignedChar:
                    paras.emplace_back(Number::newNumber(dcbArgUChar(args)));
                    break;
                case NativeTypes::Short:
                    paras.emplace_back(Number::newNumber(dcbArgShort(args)));
                    break;
                case NativeTypes::UnsignedShort:
                    paras.emplace_back(Number::newNumber(dcbArgUShort(args)));
                    break;
                case NativeTypes::Int:
                    paras.emplace_back(Number::newNumber(dcbArgInt(args)));
                    break;
                case NativeTypes::UnsignedInt:
                    paras.emplace_back(Number::newNumber((int)dcbArgUInt(args)));
                    break;
                case NativeTypes::Long:
                    paras.emplace_back(Number::newNumber((int)dcbArgLong(args)));
                    break;
                case NativeTypes::UnsignedLong:
                    paras.emplace_back(Number::newNumber((int)dcbArgULong(args)));
                    break;
                case NativeTypes::LongLong:
                    paras.emplace_back(Number::newNumber(dcbArgLongLong(args)));
                    break;
                case NativeTypes::UnsignedLongLong:
                    paras.emplace_back(Number::newNumber((long long)dcbArgULongLong(args)));
                    break;
                case NativeTypes::Float:
                    paras.emplace_back(Number::newNumber(dcbArgFloat(args)));
                    break;
                case NativeTypes::Double:
                    paras.emplace_back(Number::newNumber(dcbArgDouble(args)));
                    break;
                case NativeTypes::Pointer:
                    paras.emplace_back(NativePointer::newNativePointer((NativePointer*)dcbArgPointer(args)));
                    break;
                case NativeTypes::String:
                    paras.emplace_back(String::newString(*(string*)dcbArgPointer(args)));
                    break;
                default:
                    break;
            }
        }

        Local<Value> res = hookInfo->callback.get().call({}, paras);

        switch (sym.ret) {
            case NativeTypes::Bool:
                result->B = res.asBoolean().value();
                break;
            case NativeTypes::Char:
                result->c = (char)res.toInt();
                break;
            case NativeTypes::UnsignedChar:
                result->C = (unsigned char)res.toInt();
                break;
            case NativeTypes::Short:
                result->s = (short)res.toInt();
                break;
            case NativeTypes::UnsignedShort:
                result->S = (unsigned short)res.toInt();
                break;
            case NativeTypes::Int:
                result->i = (int)res.toInt();
                break;
            case NativeTypes::UnsignedInt:
                result->I = (unsigned int)res.toInt();
                break;
            case NativeTypes::Long:
                result->j = (long)res.toInt();
                break;
            case NativeTypes::UnsignedLong:
                result->J = (unsigned long)res.toInt();
                break;
            case NativeTypes::LongLong:
                result->l = (long long)res.asNumber().toInt64();
                break;
            case NativeTypes::UnsignedLongLong:
                result->L = (unsigned long long)res.asNumber().toInt64();
                break;
            case NativeTypes::Float:
                result->f = res.asNumber().toFloat();
                break;
            case NativeTypes::Double:
                result->d = res.asNumber().toDouble();
                break;
            case NativeTypes::Pointer:
                result->p = NativePointer::extract(res);
                break;
            case NativeTypes::String:
                result->p = new string(res.asString().toString());
                break;
            default:
                break;
        }
    } catch (const Exception& e) {
        logger.error("Hook Callback Failed!");
        logger.error("In Symbol: " + hookInfo->sym);
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }

    return GetTypeSignature(sym.ret);
}

Local<Value> CallNativeFunction(DCCallVM* vm, const string& sym, void* callfunc, const Arguments& args) {
    SymbolTypeData& data = symbols[sym];

    if (args.size() < data.paras.size()) {
        logger.error("Too Few arguments!");
        logger.error("In Symbol: " + sym);
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
        return Local<Value>();
    }

    dcReset(vm);
    for (int i = 0; i < data.paras.size(); ++i) {
        switch (data.paras[i]) {
            case NativeTypes::Bool:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kBoolean);
                dcArgBool(vm, args[i].asBoolean().value());
                break;
            case NativeTypes::Char:
            case NativeTypes::UnsignedChar:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgChar(vm, (char)args[i].asNumber().toInt32());
                break;
            case NativeTypes::Short:
            case NativeTypes::UnsignedShort:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgShort(vm, (short)args[i].asNumber().toInt32());
                break;
            case NativeTypes::Int:
            case NativeTypes::UnsignedInt:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgInt(vm, (int)args[i].asNumber().toInt32());
                break;
            case NativeTypes::Long:
            case NativeTypes::UnsignedLong:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgLong(vm, (long)args[i].asNumber().toInt32());
                break;
            case NativeTypes::LongLong:
            case NativeTypes::UnsignedLongLong:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgLongLong(vm, args[i].asNumber().toInt64());
                break;
            case NativeTypes::Float:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgFloat(vm, args[i].asNumber().toFloat());
                break;
            case NativeTypes::Double:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgDouble(vm, args[i].asNumber().toDouble());
                break;
            case NativeTypes::Pointer:
                NATIVE_CHECK_ARG_CLASS(NativePointer);
                dcArgPointer(vm, NativePointer::extract(args[i]));
                break;
            case NativeTypes::String: {
                NATIVE_CHECK_ARG_TYPE(ValueKind::kString);
                string* str = new string(args[i].toStr());
                garbage.push_back({NativeTypes::String, (void*)str});
                dcArgPointer(vm, (void*)(uintptr_t)str);
                break;
            }
            default:
                break;
        }
    }
    Local<Value> res;
    DCpointer func = (DCpointer)callfunc;
    switch (data.ret) {
        case NativeTypes::Void:
            dcCallVoid(vm, func);
            break;
        case NativeTypes::Bool:
            res = Boolean::newBoolean(dcCallBool(vm, func));
            break;
        case NativeTypes::Char:
        case NativeTypes::UnsignedChar:
            res = Number::newNumber(dcCallChar(vm, func));
            break;
        case NativeTypes::Short:
        case NativeTypes::UnsignedShort:
            res = Number::newNumber(dcCallShort(vm, func));
            break;
        case NativeTypes::Int:
        case NativeTypes::UnsignedInt:
            res = Number::newNumber(dcCallInt(vm, func));
            break;
        case NativeTypes::Long:
        case NativeTypes::UnsignedLong:
            res = Number::newNumber((int)dcCallLong(vm, func));
            break;
        case NativeTypes::LongLong:
        case NativeTypes::UnsignedLongLong:
            res = Number::newNumber(dcCallLongLong(vm, func));
            break;
        case NativeTypes::Float:
            res = Number::newNumber(dcCallFloat(vm, func));
            break;
        case NativeTypes::Double:
            res = Number::newNumber(dcCallDouble(vm, func));
            break;
        case NativeTypes::Pointer:
            res = NativePointer::newNativePointer((NativePointer*)dcCallPointer(vm, func));
            break;
        case NativeTypes::String: {
            res = String::newString(*(string*)dcCallPointer(vm, func));
            break;
        }
        default:
            break;
    }
    return res;
}


void* HookSymbol(const string& sym, void** org, void* hook) {
    void* found = dlsym_real(sym.c_str());
    if (!found) {
        ERROR("Failed to hook " + sym);
        return nullptr;
    }
    HookFunction(found, org, hook);
    return org;
}

std::pair<TypeNode*, vector<Node*>> getSymbolArgs(const std::string& sym) {
    Demangler D;
    vector<Node*> outlist;
    TypeNode* out = nullptr;

    StringView Name{sym.c_str()};
    SymbolNode* AST = D.parse(Name);
    auto mFunctionSymbolNode = dynamic_cast<FunctionSymbolNode*>(AST);
    if (mFunctionSymbolNode) {
        out = mFunctionSymbolNode->Signature->ReturnType;
        auto& NameComponents = mFunctionSymbolNode->Name->Components;
        auto& FunctionClass = mFunctionSymbolNode->Signature->FunctionClass;
        if (!(FunctionClass & FC_Static)) {
            if (mFunctionSymbolNode->Signature->Quals & llvm::ms_demangle::Q_Pointer64) {
                auto& NameComponents = mFunctionSymbolNode->Name->Components;
                if (NameComponents->Count >= 1) {
                    if (NameComponents->Count == 2) {
                        if (NameComponents->Nodes[0]) {
                            outlist.push_back(NameComponents->Nodes[0]);
                        }
                    } else if (NameComponents->Count > 2) {
                        size_t mMethodIter = NameComponents->Count - 2;
                        if (NameComponents->Nodes[mMethodIter]) {
                            outlist.push_back(NameComponents->Nodes[mMethodIter]);
                        } else {
                            size_t mMethodIter = NameComponents->Count - 1;
                            if (NameComponents->Nodes[mMethodIter]) {
                                outlist.push_back(NameComponents->Nodes[mMethodIter]);
                            }
                        }
                    }
                }
            }
        }
        if (mFunctionSymbolNode->Signature->Params) {
            for (auto i = 0; i < mFunctionSymbolNode->Signature->Params->Count; ++i) {
                outlist.push_back(mFunctionSymbolNode->Signature->Params->Nodes[i]);
            }
        }
    }
    return std::pair<TypeNode*, vector<Node*>>(out, outlist);
}


Local<Value> NativeClass::hook(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kFunction);
    try {
        string symbol = args[0].asString().toString();
        auto [ret, parlist] = getSymbolArgs(symbol);

        if (symbols.find(symbol) == symbols.end()) {
            SymbolTypeData& data = symbols[symbol];
            data.ret = GetNativeTypes(ret);
            for (int i = 0; i < parlist.size(); ++i) {
                data.paras.push_back(GetNativeTypes(parlist[i]));
            }
            data.func = ResolveSymbol(symbol.c_str());
            if (!data.func) {
                logger.error("Fail to hook: " + symbol);
                logger.error(std::string("In API: ") + __FUNCTION__);
                logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
                return Local<Value>();
            }
        }
        hookData.emplace_back(symbol, EngineScope::currentEngine(), args[1].asFunction());

        DyHookData* hookInfo = &hookData.back();

        string callbackStr;
        SymbolTypeData& data = symbols[symbol];
        for (int i = 0; i < data.paras.size(); ++i) {
            callbackStr += GetTypeSignature(data.paras[i]);
        }
        callbackStr += ')';
        callbackStr += GetTypeSignature(data.ret);
        hookInfo->cb = dcbNewCallback(callbackStr.c_str(), &CallbackHandler, hookInfo);

        HookSymbol(symbol, &hookInfo->origin, hookInfo->cb);

        return Function::newFunction([symbol, hookInfo](const Arguments& args) -> Local<Value> {
            SymbolTypeData& data = symbols[symbol];

            if (args.size() < data.paras.size()) {
                logger.error("Too Few arguments in Hook Callback!");
                logger.error("In Symbol: " + symbol);
                logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
                return Local<Value>();
            }
            return CallNativeFunction(vm, symbol, hookInfo->origin, args);
        });
        ;
    }
    CATCH("Fail in Hook!")
}

Local<Value> NativeClass::getSymbol(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try {
        string symbol{args[0].toStr()};
        auto [ret, parlist] = getSymbolArgs(symbol);
        if (symbols.find(symbol) == symbols.end()) {
            SymbolTypeData& data = symbols[symbol];
            data.ret = GetNativeTypes(ret);
            for (int i = 0; i < parlist.size(); ++i) {
                data.paras.push_back(GetNativeTypes(parlist[i]));
            }
            data.func = ResolveSymbol(symbol.c_str());
            if (!data.func) {
                logger.error("Fail to Symbol: " + symbol);
                logger.error(std::string("In API: ") + __FUNCTION__);
                logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
                return Local<Value>();
            }
        }

        return Function::newFunction([symbol](const Arguments& args) -> Local<Value> {
            SymbolTypeData& data = symbols[symbol];

            if (args.size() < data.paras.size()) {
                logger.error("Too Few arguments!");
                logger.error("In Symbol: " + symbol);
                logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
                return Local<Value>();
            }

            return CallNativeFunction(vm, symbol, data.func, args);
        });
    }
    CATCH("Fail in GetSymbol!")
}

#include <third-party/ModUtils/ModUtils.h>
#include <Utils/TypeConversionHelper.hpp>

Local<Value> NativeClass::searchAddress(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    if (args.size() >= 3 &&
        args[1].isObject() && args[2].isNumber()) {
        auto regionStart = (uintptr_t)NativePointer::extract(args[1]);
        auto size = args[2].asNumber().toInt32();
        std::vector<uint16_t> pattern = TCHelper::splitHex(args[0].asString().toString());
        uintptr_t address = ModUtils::SigScan(pattern, regionStart, size);
        if (address == 0) {
            return Local<Value>();
        }
        return NativePointer::newNativePointer((void*)address);
    }

    std::vector<uint16_t> pattern = TCHelper::splitHex(args[0].asString().toString());
    uintptr_t address = ModUtils::SigScan(pattern);
    if (address == 0) {
        return Local<Value>();
    }
    return NativePointer::newNativePointer((void*)address);
}

Local<Value> NativeClass::patch(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 3);
    CHECK_ARG_TYPE(args[0], ValueKind::kObject);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kString);
    // uintptr_t address = TCHelper::string_tohex(args[0].asString().toString());
    auto address = NativePointer::extract(args[0]);
    vector<uint16_t> oriByte = TCHelper::splitHex(args[1].asString().toString());
    vector<uint8_t> newByte = TCHelper::splitHex8(args[2].asString().toString());
    bool rtn = ModUtils::Replace((uintptr_t)address, oriByte, newByte);
    return Boolean::newBoolean(rtn);
}

Local<Value> NativeClass::getSymbolAddress(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    string symbol = args[0].asString().toString();
    return NativePointer::newNativePointer(dlsym_real(symbol.c_str()));
}

Local<Value> NativeClass::dump(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kObject);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
    auto address = NativePointer::extract(args[0]);
    auto size = args[1].asNumber().toInt32();
    std::vector<uint8_t> bytes(size);
    ModUtils::MemCopy((uintptr_t)bytes.data(), (uintptr_t)address, size);
    stringstream ss;
    ss << std::hex;
    for (auto i : bytes) {
        ss << (uint16_t)i << " ";
    }
    return String::newString(ss.str());
}
//////////////////// NativePointer ////////////////////
ClassDefine<NativePointer>
    NativePointerBuilder =
        defineClass<NativePointer>("NativePointer")
            .constructor(nullptr)
            .instanceFunction("getRawPtr", &NativePointer::getRawPtr)
            .instanceFunction("getRawPtrAsHex", &NativePointer::getRawPtrAsHex)
            .instanceFunction("offset", &NativePointer::offset)
            .instanceProperty("memByte", &NativePointer::getMemByte, &NativePointer::setMenByte)
            .instanceProperty("int8", &NativePointer::getChar, &NativePointer::setChar)
            .instanceProperty("uint8", &NativePointer::getUchar, &NativePointer::setUchar)
            .instanceProperty("int16", &NativePointer::getShort, &NativePointer::setShort)
            .instanceProperty("uint16", &NativePointer::getUshort, &NativePointer::setUshort)
            .instanceProperty("int32", &NativePointer::getInt, &NativePointer::setInt)
            .instanceProperty("uint32", &NativePointer::getUint, &NativePointer::setUint)
            .instanceProperty("long", &NativePointer::getLong, &NativePointer::setLong)
            .instanceProperty("ulong", &NativePointer::getUlong, &NativePointer::setUlong)
            .instanceProperty("int64", &NativePointer::getLonglong, &NativePointer::setLonglong)
            .instanceProperty("uint64", &NativePointer::getUlonglong, &NativePointer::setUlonglong)
            .instanceProperty("float", &NativePointer::getFloat, &NativePointer::setFloat)
            .instanceProperty("double", &NativePointer::getDouble, &NativePointer::setDouble)
            .instanceProperty("string", &NativePointer::getString, &NativePointer::setString)
            .instanceProperty("bool", &NativePointer::getBool, &NativePointer::setBool)
            .build();


NativePointer::NativePointer(void* p)
: ScriptClass(ScriptClass::ConstructFromCpp<NativePointer>{}) {
    set(p);
}

Local<Object> NativePointer::newNativePointer(void* ptr) {
    auto out = new NativePointer(ptr);
    return out->getScriptObject();
}

void* NativePointer::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NativePointer>(v))
        return EngineScope::currentEngine()->getNativeInstance<NativePointer>(v)->get();
    else
        return nullptr;
}

Local<Value> NativePointer::getRawPtr(const Arguments& args) {
    try {
        void* pkt = unwrap();
        if (!pkt)
            return Local<Value>();
        return Number::newNumber((intptr_t)pkt);
    }
    CATCH("Fail in getRawPtr!")
}

Local<Value> NativePointer::getRawPtrAsHex(const Arguments& args) {
    try {
        void* pkt = unwrap();
        if (!pkt)
            return Local<Value>();
        return String::newString(TCHelper::uto_string((uintptr_t)pkt));
    }
    CATCH("Fail in getRawPtrAsHex!")
}

Local<Value> NativePointer::offset(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    try {
        auto ptr = get();
        if (!ptr)
            return Local<Value>();
        return newNativePointer((void*)((uintptr_t)ptr + args[0].asNumber().toInt32()));
    }
    CATCH("Fail in offset!")
}

void NativePointer::setMenByte(const Local<Value>& value) {
    try {
        ModUtils::MemSet((uintptr_t)get(), (unsigned char)stoul(value.asString().toString(), nullptr, 16), 1);
    } catch (...) {
        logger.error("Fail to set mem!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

void NativePointer::setChar(const Local<Value>& value) {
    try {
        *(char*)get() = (char)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set char!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setUchar(const Local<Value>& value) {
    try {
        *(unsigned char*)get() = (unsigned char)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set uchar!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setShort(const Local<Value>& value) {
    try {
        *(short*)get() = (short)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set short!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setUshort(const Local<Value>& value) {
    try {
        *(unsigned short*)get() = (unsigned short)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set ushort!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

void NativePointer::setInt(const Local<Value>& value) {
    try {
        *(int*)get() = (int)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set int!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

void NativePointer::setUint(const Local<Value>& value) {
    try {
        *(unsigned int*)get() = (unsigned int)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set uint!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setLong(const Local<Value>& value) {
    try {
        *(long*)get() = (long)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set long!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setUlong(const Local<Value>& value) {
    try {
        *(unsigned long*)get() = (unsigned long)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set ulong!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setLonglong(const Local<Value>& value) {
    try {
        *(long long*)get() = (long long)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set longlong!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setUlonglong(const Local<Value>& value) {
    try {
        *(unsigned long long*)get() = (unsigned long long)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set ulonglong!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setFloat(const Local<Value>& value) {
    try {
        *(float*)get() = (float)value.asNumber().toFloat();
    } catch (...) {
        logger.error("Fail to set float!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setDouble(const Local<Value>& value) {
    try {
        *(double*)get() = (double)value.asNumber().toFloat();
    } catch (...) {
        logger.error("Fail to set double!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setString(const Local<Value>& value) {
    try {
        *(string*)get() = value.asString().toString();
    } catch (...) {
        logger.error("Fail to set string!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}
void NativePointer::setBool(const Local<Value>& value) {
    try {
        *(bool*)get() = value.asBoolean().value();
    } catch (...) {
        logger.error("Fail to set bool!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getMemByte() {
    try {
        auto ptr = get();
        if (!ptr)
            return Local<Value>();
        std::vector<uint8_t> buffer(1);
        ModUtils::MemCopy((uintptr_t)&buffer[0], (uintptr_t)ptr, buffer.size());
        uint8_t em = buffer[0];
        stringstream ss;
        ss << hex << int(em);
        return String::newString(ss.str());
    }
    CATCH("Fail in getMemByte!")
}

Local<Value> NativePointer::getChar() {
    try {
        return Number::newNumber(*(char*)get());
    }
    CATCH("Fail in getChar!")
}
Local<Value> NativePointer::getUchar() {
    try {
        return Number::newNumber(*(unsigned char*)get());
    }
    CATCH("Fail in getUchar!")
}

Local<Value> NativePointer::getShort() {
    try {
        return Number::newNumber(*(short*)get());
    }
    CATCH("Fail in getShort!")
}
Local<Value> NativePointer::getUshort() {
    try {
        return Number::newNumber(*(unsigned short*)get());
    }
    CATCH("Fail in getUshort!")
}


Local<Value> NativePointer::getInt() {
    try {
        return Number::newNumber(*(int*)get());
    }
    CATCH("Fail in getInt!")
}
Local<Value> NativePointer::getUint() {
    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getUint!")
}
Local<Value> NativePointer::getLong() {
    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getLong!")
}
Local<Value> NativePointer::getUlong() {
    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getUlong!")
}
Local<Value> NativePointer::getLonglong() {

    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getLonglong!")
}
Local<Value> NativePointer::getUlonglong() {
    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getUlonglong!")
}
Local<Value> NativePointer::getFloat() {
    try {
        return Number::newNumber(*(float*)get());
    }
    CATCH("Fail in getFloat!")
}
Local<Value> NativePointer::getDouble() {
    try {
        return Number::newNumber(*(double*)get());
    }
    CATCH("Fail in getDouble!")
}
Local<Value> NativePointer::getString() {
    try {
        return String::newString(*(string*)get());
    }
    CATCH("Fail in getString!")
}

Local<Value> NativePointer::getBool() {
    try {
        return Boolean::newBoolean(*(bool*)get());
    }
    CATCH("Fail in getBool!")
}