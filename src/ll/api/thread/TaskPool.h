#pragma once

#include <functional>
#include <future>
#include <memory>
#include <type_traits>

namespace ll::thread {
class TaskPool {
public:
    virtual ~TaskPool() = default;

protected:
    virtual void addTaskImpl(std::function<void()>) = 0;

public:
    template <class F, class... Args>
    decltype(auto) addTask(F&& f, Args&&... args) {
        auto task = std::make_shared<std::packaged_task<std::invoke_result_t<F, Args...>()>>(
            std::bind(std::forward<F>(f), std::forward<Args>(args)...)
        );
        auto res = task->get_future();
        addTaskImpl([task] { (*task)(); });
        return res;
    }
};
} // namespace ll::thread
