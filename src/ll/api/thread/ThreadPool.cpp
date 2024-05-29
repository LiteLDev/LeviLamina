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
    Impl(size_t nThreads) {
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
    ~Impl() {
        {
            std::lock_guard lock{mutex};
            stop = true;
        }
        condition.notify_all();
        for (auto& worker : workers) {
            if (worker.joinable()) worker.join();
        }
    }
};

ThreadPool::ThreadPool(size_t nThreads) : impl(std::make_unique<Impl>(nThreads)) {}

void ThreadPool::resize(size_t nThreads) { impl = std::make_unique<Impl>(nThreads); }

void ThreadPool::destroy() { impl.reset(); }

ThreadPool::~ThreadPool() {}
void ThreadPool::addTaskImpl(std::function<void()> task) {
    {
        std::lock_guard lock{impl->mutex};
        impl->tasks.emplace(std::move(task));
    }
    impl->condition.notify_one();
}
} // namespace ll::thread
