#include "ll/core/LeviLamina.h"

#include "ll/api/data/AnyFunction.h"

static bool run = [] {
    using ll::data::AnyFunction;


    auto fn = AnyFunction([](std::string const& par, int i, std::vector<float>&& fs) {
        ll::getLogger().warn("{}, {}, {}", par, i, fs);
    });

    fn(std::string{"emmmmm"}, 10, std::vector<float>{0.2f, 0.2f, 0.2f});

    auto vec = std::vector<float>{0.7f, 0.7f, 0.7f};

    fn = [](std::string const& par, int i, std::vector<float>&& fs) {
        ll::getLogger().info("{} | {} | {}", par, i, fs);
    };

    fn(std::string{"hmmmmm"}, 17, std::ref(vec));

    return true;
}();
