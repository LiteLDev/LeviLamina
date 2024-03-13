#include "ll/api/thread/ThreadPool.h"

#include <condition_variable>
#include <mutex>
#include <queue>
#include <stdexcept>
#include <thread>
#include <vector>

#include "ll/api/utils/ErrorUtils.h"

namespace ll::thread {

struct ThreadPool::Impl {
    std::vector<std::thread>          workers;
    std::queue<std::function<void()>> tasks;
    std::mutex                        mutex;
    std::condition_variable           condition;
    bool                              stop{false};
};

ThreadPool::ThreadPool(size_t nThreads) : impl(std::make_unique<Impl>()) {
    for (size_t i = 0; i < nThreads; ++i) {
        impl->workers.emplace_back([this] {
            ll::error_utils::setSehTranslator();
            for (;;) {
                std::function<void()> task;
                {
                    std::unique_lock lock{impl->mutex};
                    impl->condition.wait(lock, [this] { return impl->stop || !impl->tasks.empty(); });
                    if (impl->stop && impl->tasks.empty()) return;
                    task = std::move(impl->tasks.front());
                    impl->tasks.pop();
                }
                task();
            }
        });
    }
}
ThreadPool::~ThreadPool() {
    {
        std::lock_guard lock{impl->mutex};
        impl->stop = true;
    }
    impl->condition.notify_all();
    for (auto& worker : impl->workers) {
        if (worker.joinable()) worker.join();
    }
}
void ThreadPool::addTaskImpl(std::function<void()> task) {
    {
        std::lock_guard lock{impl->mutex};
        impl->tasks.emplace(std::move(task));
    }
    impl->condition.notify_one();
}
} // namespace ll::thread
