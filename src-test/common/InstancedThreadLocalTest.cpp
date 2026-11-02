#include "gtest/gtest.h"

#include <atomic>
#include <thread>
#include <vector>

#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/deps/core/threading/InstancedThreadLocalValue.h"

using Bedrock::Threading::InstancedThreadLocal;
using Bedrock::Threading::InstancedThreadLocalValue;

namespace instanced_thread_local_test {
struct Counted {
    static inline std::atomic<int> alive{0};

    int value{7};

    Counted() { ++alive; }
    ~Counted() { --alive; }
};
} // namespace instanced_thread_local_test

using instanced_thread_local_test::Counted;

TEST(InstancedThreadLocalTest, KeepsSeparateValuePerThread) {
    InstancedThreadLocal<int> local;
    *local = 1;

    int workerInitial = -1;
    std::thread([&] {
        workerInitial = *local;
        *local        = 2;
    }).join();

    EXPECT_EQ(workerInitial, 0);
    EXPECT_EQ(*local, 1);
}

TEST(InstancedThreadLocalTest, IteratesOverEveryThreadInstance) {
    InstancedThreadLocal<int> local;
    *local = 1;

    std::vector<std::thread> workers;
    for (int i = 2; i <= 4; ++i) {
        workers.emplace_back([&local, i] { *local = i; });
    }
    for (auto& worker : workers) worker.join();

    int sum   = 0;
    int count = 0;
    for (int value : local) {
        sum += value;
        ++count;
    }
    EXPECT_EQ(count, 4);
    EXPECT_EQ(sum, 1 + 2 + 3 + 4);
}

TEST(InstancedThreadLocalTest, UsesCustomConstructor) {
    InstancedThreadLocal<int> local{[](int* value) { std::construct_at(value, 42); }};
    EXPECT_EQ(*local, 42);
}

TEST(InstancedThreadLocalTest, DestroysAllInstances) {
    Counted::alive = 0;
    {
        InstancedThreadLocal<Counted> local;
        EXPECT_EQ(local->value, 7);
        std::thread([&] { EXPECT_EQ(local->value, 7); }).join();
        EXPECT_EQ(Counted::alive, 2);
    }
    EXPECT_EQ(Counted::alive, 0);
}

TEST(InstancedThreadLocalValueTest, StoresValuePerThread) {
    InstancedThreadLocalValue<uint> local;
    EXPECT_EQ(local.get(), 0u);
    local.set(5);

    uint workerInitial = 1;
    std::thread([&] {
        workerInitial = local.get();
        local.set(9);
    }).join();

    EXPECT_EQ(workerInitial, 0u);
    EXPECT_EQ(local.get(), 5u);
}

TEST(InstancedThreadLocalValueTest, StoresPointers) {
    int                             target = 0;
    InstancedThreadLocalValue<int*> local;
    EXPECT_EQ(local.get(), nullptr);
    local.set(&target);
    EXPECT_EQ(local.get(), &target);
}
