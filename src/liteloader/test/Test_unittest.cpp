#include "gtest/gtest.h"

#include "liteloader/test/Test.h"
#include "liteloader/test/TestManager.h"

namespace {

using namespace ll::test;

class TestFrameworkTest : public Test {
public:
    TestFrameworkTest() : Test("TestFrameworkTest", "Test for LiteLoader TestFrameworkTest") {}

    Result init() override {
        TestManager::getInstance().printTestStatus();
        pass("Test passed message test");
        TestManager::getInstance().printTestStatus();
        return {};
    }
};

LL_TEST_REGISTER(TestFrameworkTest);

TEST(LiteLoader, TestFramework) { TestManager::getInstance().initAllTests(); }

} // namespace
