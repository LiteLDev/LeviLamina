#include "gtest/gtest.h"

#include <array>
#include <memory>
#include <stdexcept>
#include <vector>

#include "ll/api/coro/Generator.h"

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

Generator<int&> referenceLeafGenerator(std::array<int, 3>& values) {
    for (auto& value : values) {
        co_yield value;
    }
}

Generator<int&> referenceMiddleGenerator(std::array<int, 3>& values) {
    co_yield ElementsOf(referenceLeafGenerator(values));
}

Generator<int&> referenceRootGenerator(std::array<int, 3>& values) {
    co_yield ElementsOf(referenceMiddleGenerator(values));
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

TEST(GeneratorTest, GeneratorElementOfPreservesReferenceAcrossNestedGenerators) {
    std::array<int, 3> values{1, 2, 3};
    std::vector<int*>  refs;

    for (auto& value : referenceRootGenerator(values)) {
        refs.push_back(std::addressof(value));
        value *= 10;
    }

    ASSERT_EQ(refs.size(), values.size());
    for (size_t i = 0; i < values.size(); ++i) {
        EXPECT_EQ(refs[i], std::addressof(values[i]));
    }
    EXPECT_EQ(values, (std::array<int, 3>{10, 20, 30}));
}
