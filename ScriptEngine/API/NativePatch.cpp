#include "NativeApi.h"

#include <third-party/ModUtils/ModUtils.h>
#include <Utils/TypeConversionHelper.hpp>

Local<Value> NativePatch::search(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);//pattern

    //address search
    if (args.size() >= 3 &&
        args[1].isObject() && args[2].isNumber()) {
        auto regionStart = (uintptr_t)NativePointer::extract(args[1]);
        if (!regionStart)
            throw std::runtime_error("args[1].instanceOf(NativePointer) == false");
        auto searchStep = args[2].asNumber().toInt32();
        std::vector<uint16_t> pattern = TCHelper::splitHex(args[0].asString().toString());
        uintptr_t address = ModUtils::SigScan(pattern, regionStart, searchStep);
        if (address == 0) {
            return Local<Value>();
        }
        return NativePointer::newNativePointer((void*)address);
    }

    //pattern search
    std::vector<uint16_t> pattern = TCHelper::splitHex(args[0].asString().toString());
    uintptr_t address = ModUtils::SigScan(pattern);
    if (address == 0) {
        return Local<Value>();
    }
    return NativePointer::newNativePointer((void*)address);
}

Local<Value> NativePatch::patch(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 3);
    CHECK_ARG_TYPE(args[0], ValueKind::kObject);//NativePointer
    CHECK_ARG_TYPE(args[1], ValueKind::kString);//expect bytes
    CHECK_ARG_TYPE(args[2], ValueKind::kString);//target bytes

    auto address = NativePointer::extract(args[0]);

    vector<uint16_t> expect = TCHelper::splitHex(args[1].asString().toString());
    vector<uint8_t> target = TCHelper::splitHex8(args[2].asString().toString());

    bool success = ModUtils::Replace((uintptr_t)address, expect, target);

    return Boolean::newBoolean(success);
}

Local<Value> NativePatch::dump(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kObject);//NativePointer
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);//size

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

ClassDefine<NativePatch> NativePatchBuilder =
    defineClass<NativePatch>("NativePatch")
        .constructor()
        .function("search", &NativePatch::search)
        .function("patch", &NativePatch::patch)
        .function("dump", &NativePatch::dump)
        .build();