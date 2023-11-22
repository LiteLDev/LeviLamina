#include "TestManager.h"

#include "fmt/color.h"
#include "fmt/format.h"

namespace ll::test {

void TestManager::registerTest(Test* test) { testStatus[test] = TestStatus::NotStarted; }

void TestManager::initAllTests() {
    size_t failed = 0;
    for (auto& [test, status] : testStatus) {
        auto result = test->init();
        if (!result.isPassed) {
            failed++;
            fmt::print("Test {0} init failed: {1}\n", test->getName(), result.message);
        }
        if (status == TestStatus::NotStarted) {
            status = result.isPassed ? TestStatus::Running : TestStatus::Failed;
        }
    }
    fmt::print(
        "Initialized {0} tests, success {1}, failed {2}\n",
        testStatus.size(),
        testStatus.size() - failed,
        failed
    );
}

void TestManager::submitResult(Test* test, Result const& result) {
    auto it = testStatus.find(test);
    if (it == testStatus.end()) {
        fmt::print("Test {0} is not registered, cannot submit result.\n", test->getName());
        return;
    }
    auto status = it->second;
    if (status != TestStatus::Running) {
        fmt::print("Test {0} is not running, cannot submit result.\n", test->getName());
        return;
    }
    if (!result.isPassed) {
        testStatus[test] = TestStatus::Failed;
        fmt::print("Test {0} failed: {1}\n", test->getName(), result.message);
        return;
    }
    testStatus[test] = TestStatus::Passed;
    if (!result.message.empty()) {
        fmt::print("Test {0} passed: {1}\n", test->getName(), result.message);
    } else {
        fmt::print("Test {0} passed\n", test->getName());
    }
}

void TestManager::printTestStatus() {
    for (auto& [test, status] : testStatus) {
        switch (status) {
        case TestStatus::NotStarted:
            fmt::print(fmt::fg(fmt::color::light_gray), "Test {0} not started\n", test->getName());
            break;
        case TestStatus::Running:
            fmt::print(fmt::fg(fmt::color::aqua), "Test {0} running\n", test->getName());
            break;
        case TestStatus::Passed:
            fmt::print(fmt::fg(fmt::color::green), "Test {0} passed\n", test->getName());
            break;
        case TestStatus::Failed:
            fmt::print(fmt::fg(fmt::color::red), "Test {0} failed\n", test->getName());
            break;
        }
    }
}

} // namespace ll::test
