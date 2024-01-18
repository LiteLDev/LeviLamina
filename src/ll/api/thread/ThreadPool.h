#pragma once

#include <condition_variable>
#include <functional>
#include <future>
#include <memory>
#include <mutex>
#include <queue>
#include <stdexcept>
#include <thread>
#include <vector>

#include "ll/api/utils/ErrorUtils.h"

namespace ll::thread {
class ThreadPool {
private:
    std::vector<std::thread>          workers;
    std::queue<std::function<void()>> tasks;
    std::mutex                        mutex;
    std::condition_variable           condition;
    bool                              stop{false};

public:
    explicit ThreadPool(size_t nThreads = 1) {
        for (size_t i = 0; i < nThreads; ++i) {
            workers.emplace_back([this] {
                ll::error_utils::setSehTranslator();
                for (;;) {
                    std::function<void()> task;
                    {
                        std::unique_lock lock{mutex};
                        condition.wait(lock, [this] { return stop || !tasks.empty(); });
                        if (stop && tasks.empty()) return;
                        task = std::move(tasks.front());
                        tasks.pop();
                    }
                    task();
                }
            });
        }
    }
    ~ThreadPool() {
        {
            std::lock_guard lock{mutex};
            stop = true;
        }
        condition.notify_all();
        for (auto& worker : workers) {
            if (worker.joinable()) worker.join();
        }
    }
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
        condition.notify_one();

        return res;
    }
};
} // namespace ll::thread
