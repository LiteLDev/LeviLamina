#pragma once

#include <functional>
#include <future>
#include <memory>
#include <mutex>
#include <queue>
#include <stdexcept>
#include <thread>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::thread {
class TickSyncTaskPool {
    struct Worker;

private:
    std::queue<std::function<void()>> tasks;
    std::mutex                        mutex;
    size_t                            tasksPerTick;
    size_t                            id;

public:
    LLAPI TickSyncTaskPool(size_t tasksPerTick = ~0ui64);
    LLAPI ~TickSyncTaskPool();

    template <class F, class... Args>
    decltype(auto) addTask(F&& f, Args&&... args) {

        auto task =
            std::make_shared<std::packaged_task<std::invoke_result_t<F, Args...>()>>([f = std::forward<F>(f), args...] {
                return f(args...);
            });
        auto res = task->get_future();
        {
            std::lock_guard lock{mutex};
            tasks.emplace([task] { (*task)(); });
        }
        return res;
    }
};
} // namespace ll::thread
