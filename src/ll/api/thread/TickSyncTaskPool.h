#pragma once

#include <functional>
#include <future>
#include <memory>
#include <type_traits>

#include "ll/api/base/Macro.h"

namespace ll::thread {
class TickSyncTaskPool {
public:
    LLAPI TickSyncTaskPool();

    LLAPI ~TickSyncTaskPool();

    template <class F, class... Args>
    decltype(auto) addTask(F&& f, Args&&... args) {
        auto task =
            std::make_shared<std::packaged_task<std::invoke_result_t<F, Args...>()>>([f = std::forward<F>(f), args...] {
                return f(args...);
            });
        auto res = task->get_future();
        addTaskImpl([task] { (*task)(); });
        return res;
    }

private:
    struct Worker;
    struct Impl;
    std::unique_ptr<Impl> impl;

    LLAPI void addTaskImpl(std::function<void()> f);
};

} // namespace ll::thread
