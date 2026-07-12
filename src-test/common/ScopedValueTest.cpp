#include "gtest/gtest.h"

#include <stdexcept>
#include <string>
#include <thread>

#include "ll/api/base/ScopedValue.h"

namespace {
thread_local int scopedValue = 1;
}

TEST(ScopedValueTest, RestoresPreviousValueAfterNestedScopes) {
    scopedValue = 1;
    {
        ll::ScopedValue outer{scopedValue, 2};
        EXPECT_EQ(scopedValue, 2);
        {
            ll::ScopedValue inner{scopedValue, 3};
            EXPECT_EQ(scopedValue, 3);
        }
        EXPECT_EQ(scopedValue, 2);
    }
    EXPECT_EQ(scopedValue, 1);
}

TEST(ScopedValueTest, RestoresPreviousValueDuringStackUnwinding) {
    scopedValue = 1;
    try {
        ll::ScopedValue scope{scopedValue, 2};
        throw std::runtime_error("expected");
    } catch (std::runtime_error const&) {}
    EXPECT_EQ(scopedValue, 1);
}

TEST(ScopedValueTest, ConvertsReplacementToTheTargetType) {
    std::string value = "original";
    {
        ll::ScopedValue scope{value, "temporary"};
        EXPECT_EQ(value, "temporary");
    }
    EXPECT_EQ(value, "original");
}

TEST(ScopedValueTest, DoesNotAffectOtherThreads) {
    scopedValue        = 1;
    int workerInitial  = 0;
    int workerScoped   = 0;
    int workerRestored = 0;

    {
        ll::ScopedValue scope{scopedValue, 2};
        std::thread     worker([&] {
            scopedValue   = 3;
            workerInitial = scopedValue;
            {
                ll::ScopedValue workerScope{scopedValue, 4};
                workerScoped = scopedValue;
            }
            workerRestored = scopedValue;
        });
        worker.join();
        EXPECT_EQ(scopedValue, 2);
    }

    EXPECT_EQ(scopedValue, 1);
    EXPECT_EQ(workerInitial, 3);
    EXPECT_EQ(workerScoped, 4);
    EXPECT_EQ(workerRestored, 3);
}
