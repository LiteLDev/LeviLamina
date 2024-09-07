#include "ll/api/thread/ThreadPoolExecuter.h"

#include <condition_variable>
#include <mutex>
#include <queue>
#include <stdexcept>
#include <thread>
#include <vector>

#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::thread {

struct ScheduledWorker {};

struct ThreadPoolExecuter::Impl {
    std::vector<std::thread>          workers;
    std::queue<std::function<void()>> tasks;
    std::mutex                        mutex;
    std::condition_variable           condition;
    bool                              stop{false};
    Impl(size_t nThreads) {
        for (size_t i = 0; i < nThreads; ++i) {
            workers.emplace_back([this] {
                ll::error_utils::initExceptionTranslator();
                for (;;) {
                    std::function<void()> task;
                    {
                        std::unique_lock lock{mutex};
                        condition.wait(lock, [this] { return stop || !tasks.empty(); });
                        if (stop && tasks.empty()) return;
                        task = std::move(tasks.front());
                        tasks.pop();
                    }
                    try {
                        task();
                    } catch (...) {
                        getLogger().error("Error in ThreadPoolExecuter[{}]:", std::this_thread::get_id());
                        error_utils::printCurrentException(getLogger());
                    }
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

ThreadPoolExecuter::~ThreadPoolExecuter() = default;

ThreadPoolExecuter::ThreadPoolExecuter(size_t nThreads) : impl(std::make_unique<Impl>(nThreads)) {}

void ThreadPoolExecuter::resize(size_t nThreads) { impl = std::make_unique<Impl>(nThreads); }

void ThreadPoolExecuter::destroy() { impl.reset(); }

void ThreadPoolExecuter::addTask(std::function<void()> task) {
    {
        std::lock_guard lock{impl->mutex};
        impl->tasks.emplace(std::move(task));
    }
    impl->condition.notify_one();
}
void ThreadPoolExecuter::addTaskAfter(std::function<void()> f, Duration us) {
    if (us <= Duration{0}) {
        addTask(std::move(f));
    } // TODO:
}

ThreadPoolExecuter& ThreadPoolExecuter::getDefault() {
    static std::shared_ptr<ThreadPoolExecuter> p =
        std::make_shared<ThreadPoolExecuter>(std::max((int)std::thread::hardware_concurrency() - 2, 2));
    return *p;
}
} // namespace ll::thread
