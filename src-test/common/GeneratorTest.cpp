#include "gtest/gtest.h"

#include <array>
#include <stdexcept>
#include <vector>

#include "ll/api/coro/Generator.h"

namespace {

using ll::coro::ElementsOf;
using ll::coro::Generator;

auto collect(Generator<int> generator) {
    std::vector<int> values;
    for (auto value : generator) {
        values.push_back(value);
    }
    return values;
}

Generator<int> childGenerator() {
    co_yield 1;
    co_yield 2;
}

Generator<int> parentGenerator() {
    co_yield 0;
    co_yield ElementsOf(childGenerator());
    co_yield 4;
}

Generator<int> vectorAndArrayGenerator() {
    std::vector<int> values{1, 2, 3};
    co_yield ElementsOf(values);
    co_yield ElementsOf(std::array{4, 5});
}

Generator<int> throwingChildGenerator() {
    co_yield 1;
    throw std::runtime_error("boom");
}

Generator<int> parentWithThrowingChild() {
    co_yield 0;
    co_yield ElementsOf(throwingChildGenerator());
    co_yield 2;
}

TEST(GeneratorTest, GeneratorElementOfFlattensNestedGenerator) {
    EXPECT_EQ((collect(parentGenerator())), (std::vector<int>{0, 1, 2, 4}));
}

TEST(GeneratorTest, GeneratorElementOfFlattensRanges) {
    EXPECT_EQ((collect(vectorAndArrayGenerator())), (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(GeneratorTest, GeneratorElementOfPropagatesNestedExceptions) {
    auto generator = parentWithThrowingChild();
    auto iter      = generator.begin();

    ASSERT_NE(iter, generator.end());
    EXPECT_EQ(*iter, 0);

    ++iter;
    ASSERT_NE(iter, generator.end());
    EXPECT_EQ(*iter, 1);

    EXPECT_THROW(++iter, std::runtime_error);
}

} // namespace