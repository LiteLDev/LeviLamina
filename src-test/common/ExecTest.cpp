#include "ll/core/LeviLamina.h"

#include "ll/api/chrono/GameChrono.h"
#include "ll/api/thread/ServerThreadExecuter.h"
#include "ll/api/thread/ThreadPoolExecuter.h"

size_t i = 0;

static bool run = [] {
    using namespace ll;

    auto& exec = thread::ThreadPoolExecuter::getDefault();

    static std::function<void()> fn = [&]() {
        getLogger().info("now: {}", std::chrono::steady_clock::now().time_since_epoch());

        exec.addTaskAfter(fn, chrono::ticks{20});
        getLogger().info("erase: {}", exec.removeFromSch(exec.addTaskAfter(fn, chrono::ticks{1})));
    };
    // exec.addTask(fn);

    return true;
}();
