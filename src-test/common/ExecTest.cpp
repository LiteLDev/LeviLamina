#include "ll/core/LeviLamina.h"

#include "ll/api/chrono/GameChrono.h"
#include "ll/api/thread/ServerThreadExecuter.h"

size_t i = 0;

static bool run = [] {
    using namespace ll;

    static std::function<void()> fn = [&]() {
        i++;
        if (i % 100000 == 0) getLogger().info("now: {}", chrono::GameTickClock::now().time_since_epoch());

        thread::ServerThreadExecuter::getDefault().addTaskAfter(fn, chrono::ticks{0});
    };

    // thread::ServerThreadExecuter::getDefault().addTask(fn);

    return true;
}();
