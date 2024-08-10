#include "gtest/gtest.h"

#include "ll/test/Test.h"
#include "ll/test/TestManager.h"

namespace {

using namespace ll::test;

class TestFrameworkTest : public Test {
public:
    TestFrameworkTest() : Test("TestFrameworkTest", "Test for LeviLamina TestFrameworkTest") {}

    Result init() override {
        pass("Test passed message test");
        return {};
    }
};

TEST(LeviLamina, TestFramework) {
    TestManager::getInstance().registerTest(new TestFrameworkTest());
    TestManager::getInstance().initAllTests();
    TestManager::getInstance().printTestStatus();
}

} // namespace
