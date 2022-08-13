#include "APIHelp.h"
#include "NativeAPI.h"
#include "NativeStdString.h"
#include <Utils/TypeConversionHelper.hpp>

//////////////////// NativePointer ////////////////////
ClassDefine<NativePointer>
    NativePointerBuilder =
        defineClass<NativePointer>("NativePointer")
            .constructor(nullptr)
            .function("fromSymbol", &NativePointer::fromSymbol)
            .function("malloc",&NativePointer::mallocMem)
            .function("free", &NativePointer::freeMem)
            .instanceFunction("asRawAddress", &NativePointer::asRawAddress)
            .instanceFunction("asHexAddress", &NativePointer::asHexAddress)
            .instanceFunction("offset", &NativePointer::offset)
            .instanceProperty("byte", &NativePointer::getMemByte, &NativePointer::setMemByte)
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

            .instanceFunction("asString", &NativePointer::asString)
            .build();

NativePointer::NativePointer(void* p)
: ScriptClass(ScriptClass::ConstructFromCpp<NativePointer>{}) {
    set(p);
}

Local<Value> NativePointer::fromSymbol(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    return newNativePointer(dlsym_real(args[0].asString().toStringHolder().c_str()));
}

Local<Value> NativePointer::mallocMem(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    size_t size = args[0].asNumber().toInt64();
    return newNativePointer(malloc(size));
}

// directly free memblock in c runtime
Local<Value> NativePointer::freeMem(const Arguments& args) {
    void* memObj = nullptr;
    CHECK_ARGS_COUNT(args, 1);
    if (args[0].isObject()) {
        memObj = NativePointer::extract(args[0]);
    } else if (args[0].isNumber()) {
        *((__int64*)&memObj) = args[0].asNumber().toInt64();
    }

    if (!memObj) {
        throw std::runtime_error("free(nullptr)");
    }
    free(memObj);
    return Local<Value>();
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

Local<Value> NativePointer::asRawAddress(const Arguments& args) {
    try {
        void* pkt = unwrap();
        if (!pkt)
            return Local<Value>();
        return Number::newNumber((intptr_t)pkt);
    }
    CATCH("Fail in getRawPtr!")
}


Local<Value> NativePointer::asHexAddress(const Arguments& args) {
    try {
        void* pkt = unwrap();
        if (!pkt)
            return Local<Value>();
		std::stringstream ss;
		ss << std::hex << (intptr_t)pkt;
		return String::newString(ss.str());
    }
    CATCH("Fail in asHexStr!")
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

void NativePointer::setMemByte(const Local<Value>& value) {
    try {
        ModUtils::MemSet((uintptr_t)get(), (unsigned char)stoul(value.asString().toString(), nullptr, 16), 1);
    } catch (...) {
        logger.error("Fail to set mem!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getChar() {
    try {
        return Number::newNumber(*(char*)get());
    }
    CATCH("Fail in getChar!")
}

void NativePointer::setChar(const Local<Value>& value) {
    try {
        *(char*)get() = (char)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set char!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getUchar() {
    try {
        return Number::newNumber(*(unsigned char*)get());
    }
    CATCH("Fail in getUchar!")
}
void NativePointer::setUchar(const Local<Value>& value) {
    try {
        *(unsigned char*)get() = (unsigned char)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set uchar!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getShort() {
    try {
        return Number::newNumber(*(short*)get());
    }
    CATCH("Fail in getShort!")
}
void NativePointer::setShort(const Local<Value>& value) {
    try {
        *(short*)get() = (short)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set short!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getUshort() {
    try {
        return Number::newNumber(*(unsigned short*)get());
    }
    CATCH("Fail in getUshort!")
}
void NativePointer::setUshort(const Local<Value>& value) {
    try {
        *(unsigned short*)get() = (unsigned short)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set ushort!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getInt() {
    try {
        return Number::newNumber(*(int*)get());
    }
    CATCH("Fail in getInt!")
}
void NativePointer::setInt(const Local<Value>& value) {
    try {
        *(int*)get() = (int)value.asNumber().toInt32();
    } catch (...) {
        logger.error("Fail to set int!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getUint() {
    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getUint!")
}
void NativePointer::setUint(const Local<Value>& value) {
    try {
        *(unsigned int*)get() = (unsigned int)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set uint!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getLong() {
    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getLong!")
}
void NativePointer::setLong(const Local<Value>& value) {
    try {
        *(long*)get() = (long)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set long!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getUlong() {
    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getUlong!")
}
void NativePointer::setUlong(const Local<Value>& value) {
    try {
        *(unsigned long*)get() = (unsigned long)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set ulong!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getLonglong() {

    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getLonglong!")
}
void NativePointer::setLonglong(const Local<Value>& value) {
    try {
        *(long long*)get() = (long long)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set longlong!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getUlonglong() {
    try {
        return Number::newNumber(*(long long*)get());
    }
    CATCH("Fail in getUlonglong!")
}
void NativePointer::setUlonglong(const Local<Value>& value) {
    try {
        *(unsigned long long*)get() = (unsigned long long)value.asNumber().toInt64();
    } catch (...) {
        logger.error("Fail to set ulonglong!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getFloat() {
    try {
        return Number::newNumber(*(float*)get());
    }
    CATCH("Fail in getFloat!")
}
void NativePointer::setFloat(const Local<Value>& value) {
    try {
        *(float*)get() = (float)value.asNumber().toFloat();
    } catch (...) {
        logger.error("Fail to set float!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getDouble() {
    try {
        return Number::newNumber(*(double*)get());
    }
    CATCH("Fail in getDouble!")
}
void NativePointer::setDouble(const Local<Value>& value) {
    try {
        *(double*)get() = (double)value.asNumber().toFloat();
    } catch (...) {
        logger.error("Fail to set double!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getString() {
    try {
        return String::newString(*(string*)get());
    }
    CATCH("Fail in getString!")
}
void NativePointer::setString(const Local<Value>& value) {
    try {
        *(string*)get() = value.asString().toString();
    } catch (...) {
        logger.error("Fail to set string!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::getBool() {
    try {
        return Boolean::newBoolean(*(bool*)get());
    }
    CATCH("Fail in getBool!")
}

void NativePointer::setBool(const Local<Value>& value) {
    try {
        *(bool*)get() = value.asBoolean().value();
    } catch (...) {
        logger.error("Fail to set bool!");
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
    }
}

Local<Value> NativePointer::asString() {
    try {
        return NativeStdString::newNativeStdString((std::string*)mPtr);
    }
    CATCH("Fail in asString!")
}