#include "NativeAPI.h"

#include <HookAPI.h>
#include <magic_enum/magic_enum.hpp>
#include "../Tools/Demangler/include/MicrosoftDemangle.h"


Concurrency::concurrent_unordered_map<std::string, NativeFunction> NativeFunction::parsedSymbol;

#define NATIVE_CHECK_ARG_TYPE(TYPE)                                  \
    if (args[i].getKind() != TYPE) {                                 \
        logger.error("Wrong type of argument!");                     \
        logger.error("In Symbol: " + funcSymbol->mSymbol);           \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>();                                       \
    }

#define NATIVE_CHECK_ARG_CLASS(TYPE)                                 \
    if (!IsInstanceOf<TYPE>(args[i])) {                              \
        logger.error("Wrong type of argument!");                     \
        logger.error("In Symbol: " + funcSymbol->mSymbol);           \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>();                                       \
    }

Local<Value> NativeFunction::callNativeFunction(DCCallVM* vm, NativeFunction* funcSymbol, const Arguments& args) {
    if (args.size() < funcSymbol->mParams.size()) {
        logger.error("Too Few arguments!");
        logger.error("In Symbol: " + funcSymbol->mSymbol);
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
        return Local<Value>();
    }

    dcReset(vm);
    for (int i = 0; i < funcSymbol->mParams.size(); ++i) {
        switch (funcSymbol->mParams[i]) {
            case NativeFunction::Types::Bool:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kBoolean);
                dcArgBool(vm, args[i].asBoolean().value());
                break;
            case NativeFunction::Types::Char:
            case NativeFunction::Types::UnsignedChar:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgChar(vm, (char)args[i].asNumber().toInt32());
                break;
            case NativeFunction::Types::Short:
            case NativeFunction::Types::UnsignedShort:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgShort(vm, (short)args[i].asNumber().toInt32());
                break;
            case NativeFunction::Types::Int:
            case NativeFunction::Types::UnsignedInt:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgInt(vm, (int)args[i].asNumber().toInt32());
                break;
            case NativeFunction::Types::Long:
            case NativeFunction::Types::UnsignedLong:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgLong(vm, (long)args[i].asNumber().toInt32());
                break;
            case NativeFunction::Types::LongLong:
            case NativeFunction::Types::UnsignedLongLong:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgLongLong(vm, args[i].asNumber().toInt64());
                break;
            case NativeFunction::Types::Float:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgFloat(vm, args[i].asNumber().toFloat());
                break;
            case NativeFunction::Types::Double:
                NATIVE_CHECK_ARG_TYPE(ValueKind::kNumber);
                dcArgDouble(vm, args[i].asNumber().toDouble());
                break;
            case NativeFunction::Types::Pointer:
                NATIVE_CHECK_ARG_CLASS(NativePointer);
                dcArgPointer(vm, NativePointer::extract(args[i]));
                break;
            case NativeFunction::Types::String: {
                // TODO: [std::string &] as param
                NATIVE_CHECK_ARG_TYPE(ValueKind::kString);
                string str = args[i].toStr();
                // garbage.push_back({NativeFunction::Types::String, (void*)str});
                dcArgPointer(vm, (void*)(uintptr_t)&str);
                break;
            }
            default:
                break;
        }
    }
    Local<Value> res;
    DCpointer func = (DCpointer)funcSymbol->mFunction;
    switch (funcSymbol->mReturnVal) {
        case NativeFunction::Types::Void:
            dcCallVoid(vm, func);
            break;
        case NativeFunction::Types::Bool:
            res = Boolean::newBoolean(dcCallBool(vm, func));
            break;
        case NativeFunction::Types::Char:
        case NativeFunction::Types::UnsignedChar:
            res = Number::newNumber(dcCallChar(vm, func));
            break;
        case NativeFunction::Types::Short:
        case NativeFunction::Types::UnsignedShort:
            res = Number::newNumber(dcCallShort(vm, func));
            break;
        case NativeFunction::Types::Int:
        case NativeFunction::Types::UnsignedInt:
            res = Number::newNumber(dcCallInt(vm, func));
            break;
        case NativeFunction::Types::Long:
        case NativeFunction::Types::UnsignedLong:
            res = Number::newNumber((int)dcCallLong(vm, func));
            break;
        case NativeFunction::Types::LongLong:
        case NativeFunction::Types::UnsignedLongLong:
            res = Number::newNumber(dcCallLongLong(vm, func));
            break;
        case NativeFunction::Types::Float:
            res = Number::newNumber(dcCallFloat(vm, func));
            break;
        case NativeFunction::Types::Double:
            res = Number::newNumber(dcCallDouble(vm, func));
            break;
        case NativeFunction::Types::Pointer:
            res = NativePointer::newNativePointer((NativePointer*)dcCallPointer(vm, func));
            break;
        case NativeFunction::Types::String: {
            res = String::newString(*(string*)dcCallPointer(vm, func));
            break;
        }
        default:
            break;
    }
    return res;
}
char NativeFunction::getTypeSignature(NativeFunction::Types type) {
    switch (type) {
        case NativeFunction::Types::Bool:
            return 'B';
            break;
        case NativeFunction::Types::Char:
            return 'c';
            break;
        case NativeFunction::Types::UnsignedChar:
            return 'C';
            break;
        case NativeFunction::Types::Short:
            return 's';
            break;
        case NativeFunction::Types::UnsignedShort:
            return 'S';
            break;
        case NativeFunction::Types::Int:
            return 'i';
            break;
        case NativeFunction::Types::UnsignedInt:
            return 'I';
            break;
        case NativeFunction::Types::Long:
            return 'j';
            break;
        case NativeFunction::Types::UnsignedLong:
            return 'J';
            break;
        case NativeFunction::Types::LongLong:
            return 'l';
            break;
        case NativeFunction::Types::UnsignedLongLong:
            return 'L';
            break;
        case NativeFunction::Types::Float:
            return 'f';
            break;
        case NativeFunction::Types::Double:
            return 'd';
            break;
        case NativeFunction::Types::Pointer:
        case NativeFunction::Types::String:
            return 'p';
            break;
        default:
            return 'v';
            break;
    }
}
inline std::string NativeFunction::buildDynCallbackSig() {
    std::string result;
    size_t params_size = mParams.size();
    result.reserve(params_size + 2);
    for (int i = 0; i < params_size; ++i) {
        result[i] = getTypeSignature(mParams[i]);
    }
    result[params_size + 0] = ')';
    result[params_size + 1] = getTypeSignature(mReturnVal);
    return result;
}
NativeFunction::Types NativeFunction::getNativeType(llvm::ms_demangle::Node* type) {
    using namespace llvm::ms_demangle;
    if (type) {
        if (type->kind() == NodeKind::PrimitiveType) {
            switch (((PrimitiveTypeNode*)type)->PrimKind) {
                case PrimitiveKind::Bool:
                    return NativeFunction::Types::Bool;
                    break;
                case PrimitiveKind::Char:
                    return NativeFunction::Types::Char;
                    break;
                case PrimitiveKind::Uchar:
                    return NativeFunction::Types::UnsignedChar;
                    break;
                case PrimitiveKind::Short:
                    return NativeFunction::Types::Short;
                    break;
                case PrimitiveKind::Ushort:
                    return NativeFunction::Types::UnsignedShort;
                    break;
                case PrimitiveKind::Int:
                    return NativeFunction::Types::Int;
                    break;
                case PrimitiveKind::Uint:
                    return NativeFunction::Types::UnsignedInt;
                    break;
                case PrimitiveKind::Long:
                    return NativeFunction::Types::Long;
                    break;
                case PrimitiveKind::Ulong:
                    return NativeFunction::Types::UnsignedLong;
                    break;
                case PrimitiveKind::Int64:
                    return NativeFunction::Types::LongLong;
                    break;
                case PrimitiveKind::Uint64:
                    return NativeFunction::Types::UnsignedLongLong;
                    break;
                case PrimitiveKind::Float:
                    return NativeFunction::Types::Float;
                    break;
                case PrimitiveKind::Double:
                    return NativeFunction::Types::Double;
                    break;
                default:
                    return NativeFunction::Types::Void;
            }
        } else if (type->kind() == NodeKind::PointerType || type->kind() == NodeKind::NamedIdentifier) {
            if (type->toString().find("std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>") != type->toString().npos) {
                return NativeFunction::Types::String;
            }
            return NativeFunction::Types::Pointer;
        } else if (type->kind() == NodeKind::TagType) {
            switch (((TagTypeNode*)type)->Tag) {
                case TagKind::Enum:
                    return NativeFunction::Types::Int;
                default:
                    return NativeFunction::Types::Pointer;
            }
        }
    }
    return NativeFunction::Types::Void;
}

NativeFunction NativeFunction::getOrParse(const std::string& symbol) {
    // query cache
    if (auto iter = parsedSymbol.find(symbol); iter != parsedSymbol.end()) {
        return iter->second; // return by copy
    }
    // no cache found
    using namespace llvm::ms_demangle;
    NativeFunction result;

    result.mFunction = dlsym_real(symbol.c_str());
    result.mSymbol = symbol;

    Demangler demangler;
    StringView symbolView{symbol.c_str()};
    SymbolNode* AST = demangler.parse(symbolView);
    if (demangler.Error)
        throw std::runtime_error("failed to demangle symbol");
    if (AST->kind() != NodeKind::FunctionSymbol)
        throw std::runtime_error("mangled name is not a function");
    auto funcAST = static_cast<FunctionSymbolNode*>(AST);
    result.mReturnVal = getNativeType(funcAST->Signature->ReturnType);
    if (funcAST->Signature->Quals & Q_Pointer64)
        result.mParams.push_back(NativeFunction::Types::Pointer);

    if (funcAST->Signature->Params) {
        result.mParams.reserve(funcAST->Signature->Params->Count + 1);
        for (auto i = 0; i < funcAST->Signature->Params->Count; ++i) {
            result.mParams.push_back(getNativeType(funcAST->Signature->Params->Nodes[i]));
        }
    }

    // push into cache
    parsedSymbol.insert({symbol, result});

    return result;
}
Local<Value> ScriptFunctionSymbol::fromSymbol(const Arguments& args) {
    using namespace llvm::ms_demangle;
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    const std::string symbol = args[0].toStr();

    auto scriptResult = args.engine()->newNativeClass<ScriptFunctionSymbol>();
    ScriptFunctionSymbol* result = args.engine()->getNativeInstance<ScriptFunctionSymbol>(scriptResult);

    result->cloneFrom(getOrParse(symbol));

    return scriptResult;
}
Local<Value> ScriptFunctionSymbol::fromDescribe(const Arguments& args) {
    auto scriptResult = args.engine()->newNativeClass<ScriptFunctionSymbol>();
    ScriptFunctionSymbol* result = args.engine()->getNativeInstance<ScriptFunctionSymbol>(scriptResult);
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    size_t argsSize = args.size();
    result->mReturnVal = magic_enum::enum_cast<NativeFunction::Types>(args[0].toInt()).value_or(NativeFunction::Types::Void);
    for (size_t i = 1; i < argsSize; i++) {
        CHECK_ARG_TYPE(args[i], ValueKind::kNumber);
        result->mParams.push_back(magic_enum::enum_cast<NativeFunction::Types>(args[i].toInt()).value_or(NativeFunction::Types::Void));
    }
    return scriptResult;
}

Local<Value> NativeFunction::getCallableFunction() {
    return Function::newFunction([this](const Arguments& args) -> Local<Value> {
        if (args.size() < mParams.size()) {
            logger.error("Too Few arguments!");
            logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
            return Local<Value>();
        }
        return callNativeFunction(ENGINE_OWN_DATA()->dynamicCallVM, this, args);
    });
}
char NativeFunction::hookCallbackHandler(DCCallback* cb, DCArgs* args, DCValue* result, void* userdata) {
    DynamicHookData* hookInfo = (DynamicHookData*)userdata;

    EngineScope enter(hookInfo->mEngine);
    try {
        vector<Local<Value>> paras;
        for (int i = 0; i < hookInfo->mParams.size(); ++i) {
            switch (hookInfo->mParams[i]) {
                case NativeFunction::Types::Bool:
                    paras.emplace_back(Boolean::newBoolean(dcbArgBool(args)));
                    break;
                case NativeFunction::Types::Char:
                    paras.emplace_back(Number::newNumber(dcbArgChar(args)));
                    break;
                case NativeFunction::Types::UnsignedChar:
                    paras.emplace_back(Number::newNumber(dcbArgUChar(args)));
                    break;
                case NativeFunction::Types::Short:
                    paras.emplace_back(Number::newNumber(dcbArgShort(args)));
                    break;
                case NativeFunction::Types::UnsignedShort:
                    paras.emplace_back(Number::newNumber(dcbArgUShort(args)));
                    break;
                case NativeFunction::Types::Int:
                    paras.emplace_back(Number::newNumber(dcbArgInt(args)));
                    break;
                case NativeFunction::Types::UnsignedInt:
                    paras.emplace_back(Number::newNumber((int)dcbArgUInt(args)));
                    break;
                case NativeFunction::Types::Long:
                    paras.emplace_back(Number::newNumber((int)dcbArgLong(args)));
                    break;
                case NativeFunction::Types::UnsignedLong:
                    paras.emplace_back(Number::newNumber((int)dcbArgULong(args)));
                    break;
                case NativeFunction::Types::LongLong:
                    paras.emplace_back(Number::newNumber(dcbArgLongLong(args)));
                    break;
                case NativeFunction::Types::UnsignedLongLong:
                    paras.emplace_back(Number::newNumber((long long)dcbArgULongLong(args)));
                    break;
                case NativeFunction::Types::Float:
                    paras.emplace_back(Number::newNumber(dcbArgFloat(args)));
                    break;
                case NativeFunction::Types::Double:
                    paras.emplace_back(Number::newNumber(dcbArgDouble(args)));
                    break;
                case NativeFunction::Types::Pointer:
                    paras.emplace_back(NativePointer::newNativePointer((NativePointer*)dcbArgPointer(args)));
                    break;
                case NativeFunction::Types::String:
                    paras.emplace_back(String::newString(*(string*)dcbArgPointer(args)));
                    break;
                default:
                    break;
            }
        }

        Local<Value> res = hookInfo->mScriptCallback.get().call({}, paras);

        switch (hookInfo->mReturnVal) {
            case NativeFunction::Types::Bool:
                result->B = res.asBoolean().value();
                break;
            case NativeFunction::Types::Char:
                result->c = (char)res.toInt();
                break;
            case NativeFunction::Types::UnsignedChar:
                result->C = (unsigned char)res.toInt();
                break;
            case NativeFunction::Types::Short:
                result->s = (short)res.toInt();
                break;
            case NativeFunction::Types::UnsignedShort:
                result->S = (unsigned short)res.toInt();
                break;
            case NativeFunction::Types::Int:
                result->i = (int)res.toInt();
                break;
            case NativeFunction::Types::UnsignedInt:
                result->I = (unsigned int)res.toInt();
                break;
            case NativeFunction::Types::Long:
                result->j = (long)res.toInt();
                break;
            case NativeFunction::Types::UnsignedLong:
                result->J = (unsigned long)res.toInt();
                break;
            case NativeFunction::Types::LongLong:
                result->l = (long long)res.asNumber().toInt64();
                break;
            case NativeFunction::Types::UnsignedLongLong:
                result->L = (unsigned long long)res.asNumber().toInt64();
                break;
            case NativeFunction::Types::Float:
                result->f = res.asNumber().toFloat();
                break;
            case NativeFunction::Types::Double:
                result->d = res.asNumber().toDouble();
                break;
            case NativeFunction::Types::Pointer:
                result->p = NativePointer::extract(res);
                break;
            case NativeFunction::Types::String:
                result->p = new string(res.asString().toString());
                break;
            default:
                break;
        }
    } catch (const Exception& e) {
        logger.error("Hook Callback Failed!");
        logger.error("In Symbol: " + hookInfo->mSymbol);
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }

    return NativeFunction::getTypeSignature(hookInfo->mReturnVal);
}


Local<Value> ScriptFunctionSymbol::setAddress(const Local<Value>& value) {
    auto engine = this->getScriptEngine();
    bool isNativePointer = engine->isInstanceOf<NativePointer>(value);
    bool isInt64 = value.getKind() == ValueKind::kNumber;
    if (isNativePointer) {
        NativePointer* ptr = engine->getNativeInstance<NativePointer>(value);
        this->mFunction = ptr->unwrap();
        return Local<Value>();
    }
    if (isInt64) {
        *((__int64*)&this->mFunction) = value.asNumber().toInt64();
        return Local<Value>();
    }
    LOG_WRONG_ARG_TYPE();
    return Local<Value>();
}
Local<Value> ScriptFunctionSymbol::getAddress() {
    try {
        return Number::newNumber(*((__int64*)&this->mFunction));
    }
    CATCH("Fail in getUchar!")
}

Local<Value> ScriptFunctionSymbol::hook(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kFunction);
    auto scriptResult = args.engine()->newNativeClass<DynamicHookData>(args.thiz());
    DynamicHookData* hookSymbol = args.engine()->getNativeInstance<DynamicHookData>(scriptResult);
    hookSymbol->cloneFrom(NativeFunction(*args.engine()->getNativeInstance<ScriptFunctionSymbol>(args.thiz())));
    hookSymbol->mEngine = args.engine();
    hookSymbol->mNativeCallack = dcbNewCallback(hookSymbol->buildDynCallbackSig().c_str(), &hookCallbackHandler, hookSymbol);
    hookSymbol->mScriptCallback = args[0].asFunction();
    void* hookOriginl = nullptr;
    int hookResult = HookFunction(hookSymbol->mFunction, &hookOriginl, hookSymbol->mNativeCallack);
    hookSymbol->mFunction = hookOriginl;
    return scriptResult;
}

ClassDefine<void> NativeTypeEnumBuilder =
    defineClass("NativeTypes")
        .property("Void", &NativeFunction::getType<NativeFunction::Types::Void>)
        .property("Bool", &NativeFunction::getType<NativeFunction::Types::Bool>)
        .property("Char", &NativeFunction::getType<NativeFunction::Types::Char>)
        .property("UnsignedChar", &NativeFunction::getType<NativeFunction::Types::UnsignedChar>)
        .property("Short", &NativeFunction::getType<NativeFunction::Types::Short>)
        .property("UnsignedShort", &NativeFunction::getType<NativeFunction::Types::UnsignedShort>)
        .property("Int", &NativeFunction::getType<NativeFunction::Types::Int>)
        .property("UnsignedInt", &NativeFunction::getType<NativeFunction::Types::UnsignedInt>)
        .property("Long", &NativeFunction::getType<NativeFunction::Types::Long>)
        .property("UnsignedLong", &NativeFunction::getType<NativeFunction::Types::UnsignedLong>)
        .property("LongLong", &NativeFunction::getType<NativeFunction::Types::LongLong>)
        .property("UnsignedLongLong", &NativeFunction::getType<NativeFunction::Types::UnsignedLongLong>)
        .property("Float", &NativeFunction::getType<NativeFunction::Types::Float>)
        .property("Double", &NativeFunction::getType<NativeFunction::Types::Double>)
        .property("String", &NativeFunction::getType<NativeFunction::Types::String>)
        .property("Pointer", &NativeFunction::getType<NativeFunction::Types::Pointer>)
        .build();

ClassDefine<ScriptFunctionSymbol> NativeCallBuilder =
    defineClass<ScriptFunctionSymbol>("NativeFunction")
        .constructor()
        .function("fromSymbol", &ScriptFunctionSymbol::fromSymbol)
        .function("fromDescribe", &ScriptFunctionSymbol::fromDescribe)
        .instanceFunction("hook", &ScriptFunctionSymbol::hook)
        .instanceProperty("call", &ScriptFunctionSymbol::getCallableFunction)
        .instanceProperty("address", &ScriptFunctionSymbol::getAddress, &ScriptFunctionSymbol::setAddress)
        .build();

ClassDefine<DynamicHookData> NativeHookBuilder =
    defineClass<DynamicHookData>("NativeHook")
        .constructor()
        .instanceProperty("call", &ScriptFunctionSymbol::getCallableFunction)
        .build();