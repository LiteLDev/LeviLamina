#include "APIHelp.h"
#include "NativeAPI.h"
#include "../Tools/Demangler/include/MicrosoftDemangle.h"
#include <dyncall/dyncall_callback.h>
DCCallVM* vm;

using namespace llvm::ms_demangle;

ClassDefine<void> NativeClassBuilder =
    defineClass("native")
        .function("Hook", &NativeClass::Hook)
        .build();


struct SymbolTypeData {
    NativeTypes ret;
	
    vector<NativeTypes> paras;
	
    void* func;
};
void InitDynamicCallSystem() {
    vm = dcNewCallVM(4096);
    dcMode(vm, DC_CALL_C_DEFAULT);
}
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



list<DyHookData> hookData;
unordered_map<string, SymbolTypeData> symbols;

void* ResolveSymbol(const string& sym) {
    return dlsym_real(sym.c_str());
}


NativeTypes GetTypeSignature(llvm::ms_demangle::Node* type) {
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
    } else if (type->kind() == NodeKind::PointerType) {
        return NativeTypes::Pointer;
    }
}

char GetTypeSignature(NativeTypes type) {
    switch (type) {
        case NativeTypes::Bool:
            return 'B';
            break;
        case NativeTypes::Char:
        case NativeTypes::Int8:
            return 'c';
            break;
        case NativeTypes::UnsignedChar:
            return 'C';
            break;
        case NativeTypes::Short:
        case NativeTypes::Int16:
            return 's';
            break;
        case NativeTypes::UnsignedShort:
            return 'S';
            break;
        case NativeTypes::Int:
        case NativeTypes::Int32:
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
        case NativeTypes::Int64:
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
                case NativeTypes::Int8:
                    paras.emplace_back(Number::newNumber(dcbArgChar(args)));
                    break;
                case NativeTypes::UnsignedChar:
                    paras.emplace_back(Number::newNumber(dcbArgUChar(args)));
                    break;
                case NativeTypes::Short:
                case NativeTypes::Int16:
                    paras.emplace_back(Number::newNumber(dcbArgShort(args)));
                    break;
                case NativeTypes::UnsignedShort:
                    paras.emplace_back(Number::newNumber(dcbArgUShort(args)));
                    break;
                case NativeTypes::Int:
                case NativeTypes::Int32:
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
                case NativeTypes::Int64:
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
                    paras.emplace_back(Number::newNumber((intptr_t)dcbArgPointer(args)));
                    break;
                case NativeTypes::String:
                    paras.emplace_back(String::newString(*(string*)dcbArgPointer(args)));
                    break;
                default:
                    break;
            }
        }
        std::cout << hookInfo->callback.get().describeUtf8() << std::endl;
        Local<Value> res = hookInfo->callback.get().call({}, paras);

        switch (sym.ret) {
            case NativeTypes::Bool:
                result->B = res.asBoolean().value();
                break;
            case NativeTypes::Char:
            case NativeTypes::Int8:
                result->c = (char)res.toInt();
                break;
            case NativeTypes::UnsignedChar:
                result->C = (unsigned char)res.toInt();
                break;
            case NativeTypes::Short:
            case NativeTypes::Int16:
                result->s = (short)res.toInt();
                break;
            case NativeTypes::UnsignedShort:
                result->S = (unsigned short)res.toInt();
                break;
            case NativeTypes::Int:
            case NativeTypes::Int32:
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
            case NativeTypes::Int64:
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
            case NativeTypes::String:
                result->p = (void*)(uintptr_t)(res.asNumber().toInt64());
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



#define NATIVE_CHECK_ARG_TYPE(TYPE)                           \
    if (args[i].getKind() != TYPE) {                          \
        logger.error("Wrong type of argument!");                     \
        logger.error("In Symbol: " + sym);                           \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>();                                \
    }

#define NATIVE_CHECK_ARG_CLASS(TYPE)                          \
    if (!IsInstanceOf<TYPE>(args[i])) {                       \
        logger.error("Wrong type of argument!");                     \
        logger.error("In Symbol: " + sym);                           \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>();                                \
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
            case NativeTypes::Int8:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgChar(vm, (char)args[i].asNumber().toInt32());
                break;
            case NativeTypes::Short:
            case NativeTypes::UnsignedShort:
            case NativeTypes::Int16:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgShort(vm, (short)args[i].asNumber().toInt32());
                break;
            case NativeTypes::Int:
            case NativeTypes::UnsignedInt:
            case NativeTypes::Int32:
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
            case NativeTypes::Int64:
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
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgPointer(vm, (void*)(uintptr_t)args[i].asNumber().toInt64());
                break;
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
        case NativeTypes::Int8:
            res = Number::newNumber(dcCallChar(vm, func));
            break;
        case NativeTypes::Short:
        case NativeTypes::UnsignedShort:
        case NativeTypes::Int16:
            res = Number::newNumber(dcCallShort(vm, func));
            break;
        case NativeTypes::Int:
        case NativeTypes::UnsignedInt:
        case NativeTypes::Int32:
            res = Number::newNumber(dcCallInt(vm, func));
            break;
        case NativeTypes::Long:
        case NativeTypes::UnsignedLong:
            res = Number::newNumber((int)dcCallLong(vm, func));
            break;
        case NativeTypes::LongLong:
        case NativeTypes::UnsignedLongLong:
        case NativeTypes::Int64:
            res = Number::newNumber(dcCallLongLong(vm, func));
            break;
        case NativeTypes::Float:
            res = Number::newNumber(dcCallFloat(vm, func));
            break;
        case NativeTypes::Double:
            res = Number::newNumber(dcCallDouble(vm, func));
            break;
        case NativeTypes::Pointer:
            res = Number::newNumber((long long)(uintptr_t)dcCallPointer(vm, func));
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


#include <third-party/magic_enum/magic_enum.hpp>
std::pair<TypeNode*, vector<Node*>> getSymbolArgs(const std::string& sym) {
    Demangler D;
    vector<Node*> outlist;
    TypeNode* out = nullptr;
	
    StringView Name{sym.c_str()};
    SymbolNode* AST = D.parse(Name);
    auto mSpecialTableSymbolNode = dynamic_cast<SpecialTableSymbolNode*>(AST); // vftable
    auto mLocalStaticGuardVariableNode = dynamic_cast<LocalStaticGuardVariableNode*>(AST);
    auto mEncodedStringLiteralNode = dynamic_cast<EncodedStringLiteralNode*>(AST); //`string'
    auto mVariableSymbolNode = dynamic_cast<VariableSymbolNode*>(AST);             // Global static var
    auto mFunctionSymbolNode = dynamic_cast<FunctionSymbolNode*>(AST);             // regular function

    if (mFunctionSymbolNode) {		
        out = mFunctionSymbolNode->Signature->ReturnType;
        for (auto i = 0; i < mFunctionSymbolNode->Signature->Params->Count;++i) {
            outlist.push_back(mFunctionSymbolNode->Signature->Params->Nodes[i]);
		}
    }
    return std::pair<TypeNode*, vector<Node*>>(out, outlist);
}


Local<Value> NativeClass::Hook(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
	CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[args.size()-1], ValueKind::kFunction);
    try {
        string symbol = args[0].asString().toString();
        auto [ret,parlist] = getSymbolArgs(symbol);
		    
        if (symbols.find(symbol) == symbols.end()) {
            SymbolTypeData& data = symbols[symbol];
            data.ret = GetTypeSignature(ret);
            data.paras.push_back(NativeTypes::Pointer);
            for (int i = 0; i < parlist.size(); ++i) {
                data.paras.push_back(GetTypeSignature(parlist[i]));
            }
            data.func = ResolveSymbol(symbol.c_str());
            if (!data.func) {
                logger.error("Fail to hook: " + symbol);
                logger.error(std::string("In API: ") + __FUNCTION__);
                logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
                return Local<Value>();
            }
        }
		hookData.emplace_back(symbol, EngineScope::currentEngine(), args[args.size() - 1].asFunction());

        DyHookData* hookInfo = &hookData.back();
		
        string callbackStr;
		
        SymbolTypeData& data = symbols[symbol];
        callbackStr += 'p';
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
    CATCH("Fail in GetSymbol!")
}