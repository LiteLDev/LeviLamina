#pragma once

#include <chrono>
#include <functional>
#include <future>
#include <memory>
#include <type_traits>

namespace ll::thread {
class TaskExecuter : public std::enable_shared_from_this<TaskExecuter> {
public:
    using Duration = std::chrono::microseconds;

    virtual ~TaskExecuter() = default;

    virtual void addTask(std::function<void()>) = 0;

    virtual void addTaskAfter(std::function<void()>, Duration) = 0;

    template <class F, class... Args>
    decltype(auto) addPackagedTask(F&& f, Args&&... args) {
        auto task = std::make_shared<std::packaged_task<std::invoke_result_t<F, Args...>()>>(
            std::bind(std::forward<F>(f), std::forward<Args>(args)...)
        );
        auto res = task->get_future();
        addTask([task = std::move(task)] { (*task)(); });
        return res;
    }
};
} // namespace ll::thread
