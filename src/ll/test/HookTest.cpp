#include <string>

#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Memory.h"

// NOLINTBEGIN
namespace {
class TestOverloadClass {
protected:
    int some = 0;

public:
    int         test(int a, int b) const { return a + b; }
    int         test(int a, int b) { return a + b; }
    std::string test(std::string a, std::string b) { return a + b; }
};

// they will choose non-const version if possible
LL_TYPE_INSTANCE_HOOK(TestHook, HookPriority::Normal, TestOverloadClass, &TestOverloadClass::test, int, int a, int b) {
    some = 1;
    return origin(a, b);
}

class TestPtrClass {
protected:
    int some = 0;

public:
    int test(int a, int b) { return a + b; }
};

// they will choose non-const version if possible
LL_TYPE_INSTANCE_HOOK(
    TestPtrHook,
    HookPriority::Normal,
    TestPtrClass,
    ll::memory::toFuncPtr(&TestPtrClass::test),
    int,
    __int64 a,
    __int64 b
) {
    some = 1;
    return origin(a, b);
}

LL_TYPE_INSTANCE_HOOK(TestUintptrHook, HookPriority::Normal, TestPtrClass, 0x1145141919810, int, __int64 a, __int64 b) {
    some = 1;
    return origin(a, b);
}
} // namespace
// NOLINTEND
