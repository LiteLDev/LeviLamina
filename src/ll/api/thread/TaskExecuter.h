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

namespace ll::thread {
class TaskExecuter : public std::enable_shared_from_this<TaskExecuter> {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    using Duration = std::chrono::microseconds;

    using SchId = uint64;

    LLNDAPI TaskExecuter(std::string_view name);

    LLNDAPI std::string const& getName() const;

    LLAPI virtual ~TaskExecuter();

    virtual void addTask(std::function<void()>) const = 0;

    virtual SchId addTaskAfter(std::function<void()>, Duration) const = 0;

    virtual bool removeFromSch(SchId) const = 0;

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
