#pragma once

#include <chrono>
#include <functional>
#include <future>
#include <memory>
#include <string>
#include <string_view>
#include <type_traits>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/thread/CancellableCallback.h"

namespace ll::thread {
class TaskExecutor : public std::enable_shared_from_this<TaskExecutor> {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    using Duration = std::chrono::high_resolution_clock::duration;

    LLNDAPI TaskExecutor(std::string_view name);

    LLNDAPI std::string const& getName() const;

    LLAPI virtual ~TaskExecutor();

    virtual void addTask(std::function<void()>) const = 0;

    virtual std::shared_ptr<CancellableCallback> addTaskAfter(std::function<void()>, Duration) const = 0;

    template <class F, class... Args>
    auto addPackagedTask(F&& f, Args&&... args) const {
        auto task = std::make_shared<std::packaged_task<std::invoke_result_t<F, Args...>()>>(
            std::bind(std::forward<F>(f), std::forward<Args>(args)...)
        );
        auto res = task->get_future();
        addTask([task = std::move(task)] { (*task)(); });
        return res;
    }
};
} // namespace ll::thread
