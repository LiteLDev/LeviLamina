#pragma once

#include <ChakraCore.h>

#include "../dll.h"

namespace ScriptApi {
class ScriptObjectHandle {
public:
    JsValueRef ref{};

    ScriptObjectHandle() {
    }
    ScriptObjectHandle(JsValueRef ref)
        : ref(ref) {
        if (ref)
            JsAddRef(ref, nullptr);
    }
    ScriptObjectHandle(ScriptObjectHandle const& rhs)
        : ref(rhs.ref) {
        if (ref)
            JsAddRef(ref, nullptr);
    }
    ScriptObjectHandle(ScriptObjectHandle&& rhs)
        : ref(rhs.ref) {
        rhs.ref = nullptr;
    }

    JsValueRef operator*() {
        return ref;
    }

    virtual ~ScriptObjectHandle() {
        if (ref)
            JsRelease(ref, nullptr);
    }
};
} // namespace ScriptApi