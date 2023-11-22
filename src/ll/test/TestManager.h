#pragma once

#include <type_traits>
#include <unordered_map>

#include "gtest/gtest.h"

#include "ll/test/Test.h"

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

    void submitResult(Test* test, Result const& result);

    void printTestStatus();

    static TestManager& getInstance() {
        static TestManager instance;
        return instance;
    }
};

template <class T>
concept Testable = std::is_base_of_v<ll::test::Test, T>;

template <Testable T>
class TestRegister {
public:
    TestRegister() { TestManager::getInstance().registerTest(new T()); }
};

#define LL_TEST_REGISTER(T) static ::ll::test::TestRegister<T> T##Register

} // namespace ll::test
