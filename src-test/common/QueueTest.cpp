#include "gtest/gtest.h"

#include <algorithm>
#include <queue>
#include <vector>

#include "ll/api/base/Containers.h"

struct MyCompare {
    int operator()(int x, int y) { return y % 10 < x % 10; } // highest first
};

std::vector<int> drainConcurrentPriorityQueue(std::vector<int> const& values) {
    ll::ConcurrentPriorityQueue<int, MyCompare> queue;
    for (int value : values) {
        queue.push(value);
    }

    std::vector<int> result;
    while (queue.try_pop_if([&](int& value) {
        result.push_back(value);
        return true;
    })) {}
    return result;
}

std::vector<int> drainStdPriorityQueue(std::vector<int> const& values) {
    std::priority_queue<int, std::vector<int>, MyCompare> queue;
    for (int value : values) {
        queue.push(value);
    }

    std::vector<int> result;
    while (!queue.empty()) {
        result.push_back(queue.top());
        queue.pop();
    }
    return result;
}

TEST(QueueTest, ConcurrentPriorityQueueMatchesStdPriorityQueueOrdering) {
    auto input    = std::vector<int>{2, 10, 21, 30, 42, 51};
    auto actual   = drainConcurrentPriorityQueue(input);
    auto expected = drainStdPriorityQueue(input);

    ASSERT_EQ(actual.size(), expected.size());

    auto actualBuckets   = std::vector<int>{};
    auto expectedBuckets = std::vector<int>{};
    std::transform(actual.begin(), actual.end(), std::back_inserter(actualBuckets), [](int value) {
        return value % 10;
    });
    std::transform(expected.begin(), expected.end(), std::back_inserter(expectedBuckets), [](int value) {
        return value % 10;
    });

    EXPECT_EQ(actualBuckets, expectedBuckets);

    auto sortedActual   = actual;
    auto sortedExpected = expected;
    std::ranges::sort(sortedActual);
    std::ranges::sort(sortedExpected);
    EXPECT_EQ(sortedActual, sortedExpected);
}
