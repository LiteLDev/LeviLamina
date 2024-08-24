#pragma once

#include <type_traits>

#include "gtest/gtest.h"

#include "Test.h"

#include "ll/api/base/Containers.h"

namespace ll::test {
class TestManager {

    enum TestStatus {
        NotStarted,
        Running,
        Passed,
        Failed,
    };

    DenseMap<Test*, TestStatus> testStatus;

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
