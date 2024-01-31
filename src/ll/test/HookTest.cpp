#include "ll/api/memory/Hook.h"

#include <string>

namespace {
class TestClass {
protected:
    int some = 0;

public:
    int         test(int a, int b) const { return a + b; }
    int         test(int a, int b) { return a + b; }
    std::string test(std::string a, std::string b) { return a + b; }
};

// they will choose non-const version if possible
LL_TYPE_INSTANCE_HOOK(TestHook, HookPriority::Normal, TestClass, &TestClass::test, int, int a, int b) {
    some = 1;
    return a + b;
}
} // namespace
