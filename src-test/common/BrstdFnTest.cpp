#include "gtest/gtest.h"

#include <string>
#include <vector>

#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

TEST(BrstdFnTest, BrstdCopyableFunctionSupportsCopyResetAndRebind) {
    using brstd::copyable_function;

    std::string        recordedString;
    int                recordedInt = 0;
    std::vector<float> recordedValues;

    auto fn = copyable_function<void(std::string par, int i, std::vector<float>&& fs)>(
        [&](std::string par, int i, std::vector<float> fs) {
            recordedString = std::move(par);
            recordedInt    = i;
            recordedValues = std::move(fs);
        }
    );
    auto fn2 = fn;

    fn2(std::string{"emmmmm"}, 10, std::vector<float>{0.2f, 0.2f, 0.2f});

    EXPECT_EQ(recordedString, "emmmmm");
    EXPECT_EQ(recordedInt, 10);
    EXPECT_EQ(recordedValues, (std::vector<float>{0.2f, 0.2f, 0.2f}));

    fn = nullptr;
    EXPECT_FALSE(static_cast<bool>(fn));

    auto vec = std::vector<float>{0.7f, 0.7f, 0.7f};
    fn       = [&](std::string par, int i, std::vector<float> fs) {
        recordedString = std::move(par);
        recordedInt    = i;
        recordedValues = std::move(fs);
    };

    fn(std::string{"hmmmmm"}, 17, std::move(vec));

    EXPECT_EQ(recordedString, "hmmmmm");
    EXPECT_EQ(recordedInt, 17);
    EXPECT_EQ(recordedValues, (std::vector<float>{0.7f, 0.7f, 0.7f}));
}

TEST(BrstdFnTest, BrstdMoveOnlyFunctionSupportsResetAndRebind) {
    using brstd::move_only_function;

    std::string        recordedString;
    int                recordedInt = 0;
    std::vector<float> recordedValues;

    auto fn = move_only_function<void(std::string par, int i, std::vector<float>&& fs)>(
        [&](std::string par, int i, std::vector<float> fs) {
            recordedString = std::move(par);
            recordedInt    = i;
            recordedValues = std::move(fs);
        }
    );

    fn(std::string{"emmmmm"}, 10, std::vector<float>{0.2f, 0.2f, 0.2f});

    EXPECT_EQ(recordedString, "emmmmm");
    EXPECT_EQ(recordedInt, 10);
    EXPECT_EQ(recordedValues, (std::vector<float>{0.2f, 0.2f, 0.2f}));

    fn = nullptr;
    EXPECT_FALSE(static_cast<bool>(fn));

    auto vec = std::vector<float>{0.7f, 0.7f, 0.7f};
    fn       = [&](std::string par, int i, std::vector<float> fs) {
        recordedString = std::move(par);
        recordedInt    = i;
        recordedValues = std::move(fs);
    };

    fn(std::string{"hmmmmm"}, 17, std::move(vec));

    EXPECT_EQ(recordedString, "hmmmmm");
    EXPECT_EQ(recordedInt, 17);
    EXPECT_EQ(recordedValues, (std::vector<float>{0.7f, 0.7f, 0.7f}));
}
