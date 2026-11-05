#include "gtest/gtest.h"

#include <string>

#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Memory.h"

// NOLINTBEGIN
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

// test unchecked function pointer
LL_TYPE_INSTANCE_HOOK(
    TestPtrHook,
    HookPriority::Normal,
    TestPtrClass,
    ll::memory::unchecked(&TestPtrClass::test),
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

class TestVirtualDetectorClass {
public:
    int         nonVirtual() { return 1; }
    virtual int virtualMember() { return 2; }
    virtual int virtualConstMember() const { return 3; }
};

static_assert(!ll::memory::virtualDetector<
              decltype(&TestVirtualDetectorClass::nonVirtual),
              &TestVirtualDetectorClass::nonVirtual>());
static_assert(ll::memory::virtualDetector<
              decltype(&TestVirtualDetectorClass::virtualMember),
              &TestVirtualDetectorClass::virtualMember>());
static_assert(ll::memory::virtualDetector<
              decltype(&TestVirtualDetectorClass::virtualConstMember),
              &TestVirtualDetectorClass::virtualConstMember>());

class HookExTestClass {
protected:
    int some = 0;

public:
    void                    test(int a = 0) { some = a; }
    static HookExTestClass& getInstance() {
        static HookExTestClass ins;
        return ins;
    }
};

LL_TYPE_INSTANCE_HOOK_EX(
    HookExInstanceTest,
    HookPriority::Normal,
    RegisterSaveOptions::SaveAll,
    HookExTestClass,
    &HookExTestClass::test,
    void,
    int a
) {
    some = a + 1;
    return origin(a);
}

LL_TYPE_STATIC_HOOK_EX(
    HookExStaticTest,
    HookPriority::Normal,
    RegisterSaveOptions::SaveAll,
    HookExTestClass,
    &HookExTestClass::getInstance,
    HookExTestClass&
) {
    return origin();
}

TEST(HookTest, InstanceHookUsesNonConstOverloadAndPreservesResult) {
    TestOverloadClass instance;

    EXPECT_EQ(instance.test(2, 3), 5);
}

TEST(HookTest, InstanceHookSupportsUncheckedFunctionPointer) {
    TestPtrClass instance;

    EXPECT_EQ(instance.test(7, 8), 15);
}

TEST(HookTest, HookExPreservesStaticSingletonIdentity) {
    auto& instance1 = HookExTestClass::getInstance();
    auto& instance2 = HookExTestClass::getInstance();

    EXPECT_EQ(&instance1, &instance2);
}

#if defined(_MSC_VER)
class TestThisBasePrimary {
public:
    virtual ~TestThisBasePrimary() = default;

    int primary = 1;
};

class TestThisBaseCallback {
public:
    virtual ~TestThisBaseCallback() = default;
    virtual int read(int a) const { return base + a; }

    int base = 2;
};

class TestThisBaseHandler : public TestThisBasePrimary, public TestThisBaseCallback {
public:
    int read(int a) const override { return base + a; }
    int $read(int a) const;

    int value = 40;
};

LL_VIRTUAL_THIS_BASE(::TestThisBaseHandler, $read, int(int) const, ::TestThisBaseCallback);

static_assert(
    std::is_same_v<
        ll::VirtualThisBase<static_cast<int (TestThisBaseHandler::*)(int) const>(&TestThisBaseHandler::$read)>::type,
        TestThisBaseCallback>
);

LL_NOINLINE int TestThisBaseHandler::$read(int a) const {
    int volatile result = static_cast<TestThisBaseCallback const*>(static_cast<void const*>(this))->base;
    return result + a;
}

LL_TYPE_INSTANCE_HOOK(
    TestThisBaseHook,
    HookPriority::Normal,
    TestThisBaseHandler,
    &TestThisBaseHandler::$read,
    int,
    int a
) {
    return value + origin(a);
}

LL_TYPE_INSTANCE_HOOK(
    TestThisBaseOuterHook,
    HookPriority::High,
    TestThisBaseHandler,
    &TestThisBaseHandler::$read,
    int,
    int a
) {
    return thisFor<TestThisBaseCallback>()->value * 100 + origin(a);
}

TEST(HookTest, VirtualThisBaseHooksReceiveWholeObject) {
    TestThisBaseHandler handler;
    auto                call =
        reinterpret_cast<int (*)(TestThisBaseCallback const*, int)>(ll::memory::toFuncPtr(&TestThisBaseHandler::$read));

    TestThisBaseHook::hook();
    TestThisBaseOuterHook::hook();
    auto result = call(&handler, 1);
    TestThisBaseOuterHook::unhook();
    TestThisBaseHook::unhook();

    EXPECT_EQ(result, 4043);
}
#endif
// NOLINTEND
