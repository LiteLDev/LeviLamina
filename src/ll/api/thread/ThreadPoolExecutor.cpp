#include "ll/api/thread/ThreadPoolExecutor.h"

#include <condition_variable>
#include <queue>
#include <semaphore>
#include <shared_mutex>
#include <thread>
#include <vector>

#include "ll/api/base/Containers.h"
#include "ll/api/thread/InterruptableSleep.h"
#include "ll/api/thread/ThreadName.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::thread {

struct ThreadPoolExecutor::Impl {
    struct ScheduledWork {
        Clock::time_point                          time;
        std::shared_ptr<data::CancellableCallback> callback;
    };
    struct SwCmp {
        bool operator()(ScheduledWork const& x, ScheduledWork const& y) { return x.time > y.time; }
    };
    struct ScheduledWorker {
        std::thread                                   schtrd;
        ConcurrentPriorityQueue<ScheduledWork, SwCmp> works;
        InterruptableSleep                            sleeper;
        std::atomic_bool                              working{true};
        ScheduledWorker(Executor const& e) {
            schtrd = std::thread{[this, &e]() {
                ll::error_utils::initExceptionTranslator();
                setThreadName(fmt::format("{}[sch]", e.getName()));
                while (working) {
                    std::optional<Clock::duration> frontTime{};

                    auto now = Clock::now();
                    while (works.try_pop_if([&](Impl::ScheduledWork& w) {
                        if (w.time <= now) {
                            w.callback->moveTo([&](auto&& fn) {
                                e.execute(std::move(fn));
                                return true;
                            });
                            return true;
                        }
                        frontTime = w.time - now;
                        return false;
                    })) {}

                    if (!frontTime) {
                        sleeper.sleep();
                    } else {
                        sleeper.sleepFor(*frontTime);
                    }
                }
            }};
        }

        ~ScheduledWorker() {
            working = false;
            sleeper.interrupt();
            if (schtrd.joinable()) schtrd.join();
        }
    };


    std::vector<std::thread>               workers;
    ConcurrentQueue<std::function<void()>> tasks;
    std::counting_semaphore<>              taskCount{0};
    std::optional<ScheduledWorker>         scheduledWorker;
    std::once_flag                         hasSchWorker;
    std::atomic_bool                       stop{false};

    ScheduledWorker& getScheduledWorker(Executor const& e) {
        std::call_once(hasSchWorker, [&]() { scheduledWorker.emplace(e); });
        return *scheduledWorker;
    }
    Impl(Executor& self, size_t nThreads) {
        for (size_t i = 0; i < nThreads; ++i) {
            workers.emplace_back([this, &self, i] {
                ll::error_utils::initExceptionTranslator();
                setThreadName(fmt::format("{}[{}]", self.getName(), i));
                decltype(tasks)::consumer_token_t token{tasks};
                for (;;) {
                    std::function<void()> task;
                    taskCount.acquire();
                    while (!tasks.try_dequeue(token, task)) {
                        if (stop.load(std::memory_order_relaxed)) {
                            return;
                        }
                    }
                    try {
                        task();
                    } catch (...) {
                        getLogger().error("Error in {}[{}]:", self.getName(), i);
                        error_utils::printCurrentException(getLogger());
                    }
                }
            });
        }
    }
    ~Impl() {
        stop = true;
        taskCount.release(workers.size());
        for (auto& worker : workers) {
            if (worker.joinable()) worker.join();
        }
    }
};
ThreadPoolExecutor::~ThreadPoolExecutor() = default;

ThreadPoolExecutor::ThreadPoolExecutor(std::string name, size_t nThreads)
: Executor(std::move(name)),
  impl(std::make_unique<Impl>(*this, nThreads)) {}

void ThreadPoolExecutor::resize(size_t nThreads) { impl = std::make_unique<Impl>(*this, nThreads); }

void ThreadPoolExecutor::destroy() { impl.reset(); }

void ThreadPoolExecutor::execute(std::function<void()> f) const {
    impl->tasks.enqueue(std::move(f));
    impl->taskCount.release();
}
std::shared_ptr<data::CancellableCallback>
ThreadPoolExecutor::executeAfter(std::function<void()> f, Duration dur) const {
    if (dur <= Duration{0}) {
        execute(std::move(f));
        return nullptr;
    } else {
        auto& worker = impl->getScheduledWorker(*this);
        auto  res    = std::make_shared<data::CancellableCallback>(std::move(f));
        worker.works.emplace(Clock::now() + dur, res);
        worker.sleeper.interrupt();
        return res;
    }
}
ThreadPoolExecutor const& ThreadPoolExecutor::getDefault() {
    static ThreadPoolExecutor ins("ll_default_thread_pool", std::max((int)std::thread::hardware_concurrency() - 2, 2));
    return ins;
}
} // namespace ll::thread
