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
struct TickSyncTaskPoolWorker;
class TickSyncTaskPool {
    friend TickSyncTaskPoolWorker;

private:
    LLAPI static std::vector<std::function<void()>> tasks;
    LLAPI static std::atomic_bool                   hasTask;
    LLAPI static std::mutex                         mutex;

    LLAPI static void notify();

public:
    explicit TickSyncTaskPool(size_t) {}
    ~TickSyncTaskPool() = default;

    template <class F, class... Args>
    decltype(auto) addTask(F&& f, Args&&... args) {

        auto task = std::move(std::make_shared<std::packaged_task<std::invoke_result_t<F, Args...>()>>(
            [f = std::forward<F>(f), args...] { return f(args...); }
        ));
        auto res  = task->get_future();
        {
            std::lock_guard lock{mutex};
            tasks.emplace_back([task] { (*task)(); });
        }
        notify();

        return res;
    }
};
} // namespace ll::thread
