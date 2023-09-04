#include "gtest/gtest.h"

#include "liteloader/test/Test.h"
#include "liteloader/test/TestManager.h"

namespace {

using namespace ll::test;

class TestFrameworkTest : public Test {
public:
    TestFrameworkTest() : Test("TestFrameworkTest", "Test for LiteLoader TestFrameworkTest") {}

    Result init() override {
        pass("Test passed message test");
        return {};
    }
};

TEST(LiteLoader, TestFramework) {
    TestManager::getInstance().registerTest(new TestFrameworkTest());
    TestManager::getInstance().initAllTests();
    TestManager::getInstance().printTestStatus();
}

} // namespace
