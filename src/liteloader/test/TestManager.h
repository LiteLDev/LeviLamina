#pragma once

#include <type_traits>
#include <unordered_map>

#include "gtest/gtest.h"

#include "liteloader/test/Test.h"

namespace ll::test {
class TestManager {

    enum TestStatus {
        NotStarted,
        Running,
        Passed,
        Failed,
    };

    std::unordered_map<Test*, TestStatus> testStatus;

public:
    void registerTest(Test* test);

    void initAllTests();

    void submitResult(const Test* test, const Result& result);

    void printTestStatus();

    static TestManager& getInstance() {
        static TestManager instance;
        return instance;
    }
};

template <typename T>
concept Testable = std::is_base_of<ll::test::Test, T>::value;

template <Testable T>
class TestRegister {
public:
    TestRegister() { TestManager::getInstance().registerTest(new T()); }
};

#define LL_TEST_REGISTER(T) static ::ll::test::TestRegister<T> T##Register

} // namespace ll::test
