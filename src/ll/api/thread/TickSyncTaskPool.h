#pragma once

#include <cstddef>
#include <functional>
#include <future>
#include <memory>
#include <mutex>
#include <queue>
#include <type_traits>

#include "ll/api/base/Macro.h"

namespace ll::thread {
class TickSyncTaskPool {
    struct Worker;

private:
    std::queue<std::function<void()>> tasks;
    std::recursive_mutex              mutex;
    size_t                            tasksPerTick;
    size_t                            id;

public:
    LLAPI explicit TickSyncTaskPool(size_t tasksPerTick = ~0ui64);
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
