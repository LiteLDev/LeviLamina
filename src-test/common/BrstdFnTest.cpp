#include "ll/core/LeviLamina.h"

#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

static bool run = [] {
    using namespace brstd;
    {
        ll::getLogger().info("copyable_function");
        auto fn = copyable_function<void(std::string par, int i, std::vector<float>&& fs)>(
            [](std::string par, int i, std::vector<float> fs) { ll::getLogger().warn("{}, {}, {}", par, i, fs); }
        );
        auto fn2 = fn;

        fn2(std::string{"emmmmm"}, 10, std::vector<float>{0.2f, 0.2f, 0.2f});
        fn       = nullptr;
        auto vec = std::vector<float>{0.7f, 0.7f, 0.7f};

        fn = [](std::string par, int i, std::vector<float> fs) { ll::getLogger().info("{} | {} | {}", par, i, fs); };

        fn(std::string{"hmmmmm"}, 17, std::move(vec));
    }
    {
        ll::getLogger().info("move_only_function");
        auto fn = move_only_function<void(std::string par, int i, std::vector<float>&& fs)>(
            [](std::string par, int i, std::vector<float> fs) { ll::getLogger().warn("{}, {}, {}", par, i, fs); }
        );

        fn(std::string{"emmmmm"}, 10, std::vector<float>{0.2f, 0.2f, 0.2f});
        fn       = nullptr;
        auto vec = std::vector<float>{0.7f, 0.7f, 0.7f};

        fn = [](std::string par, int i, std::vector<float> fs) { ll::getLogger().info("{} | {} | {}", par, i, fs); };

        fn(std::string{"hmmmmm"}, 17, std::move(vec));
    }

    return true;
}();
