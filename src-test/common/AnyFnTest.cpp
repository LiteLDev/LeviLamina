#include "gtest/gtest.h"

#include <string>
#include <vector>

#include "ll/api/data/AnyFunction.h"

namespace {

using ll::data::AnyFunction;

TEST(AnyFnTest, AnyFunctionSupportsReassignmentAndReferenceArgs) {
    std::string        recordedString;
    int                recordedInt = 0;
    std::vector<float> recordedValues;

    auto fn = AnyFunction([&](std::string const& par, int i, std::vector<float>&& fs) {
        recordedString = par;
        recordedInt    = i;
        recordedValues = fs;
    });

    fn(std::string{"emmmmm"}, 10, std::vector<float>{0.2f, 0.2f, 0.2f});

    EXPECT_EQ(recordedString, "emmmmm");
    EXPECT_EQ(recordedInt, 10);
    EXPECT_EQ(recordedValues, (std::vector<float>{0.2f, 0.2f, 0.2f}));

    auto vec = std::vector<float>{0.7f, 0.7f, 0.7f};

    fn = [&](std::string const& par, int i, std::vector<float>&& fs) {
        recordedString = par;
        recordedInt    = i;
        recordedValues = fs;
    };

    fn(std::string{"hmmmmm"}, 17, std::ref(vec));

    EXPECT_EQ(recordedString, "hmmmmm");
    EXPECT_EQ(recordedInt, 17);
    EXPECT_EQ(recordedValues, vec);
}

} // namespace
