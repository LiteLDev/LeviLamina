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
        SchId                                 id;
        std::chrono::steady_clock::time_point time;
        std::function<void()>                 fn;
    };
    struct SwCmp {
        bool operator()(ScheduledWork const& x, ScheduledWork const& y) { return x.time > y.time; }
    };
    struct ScheduledWorker {
        std::shared_mutex                             schMutex;
        std::thread                                   schtrd;
        ConcurrentPriorityQueue<ScheduledWork, SwCmp> works;
        InterruptableSleep                            sleeper;
        std::atomic_bool                              working{true};
        std::atomic<SchId>                            schId{0};
        ScheduledWorker(TaskExecutor const& e) {
            schtrd = std::thread{[this, &e]() {
                ll::error_utils::initExceptionTranslator();
                setThreadName(fmt::format("ll::ThreadPoolExecutor({})[sch]", e.getName()));
                while (working) {
                    std::optional<std::chrono::steady_clock::duration> frontTime{};
                    {
                        std::shared_lock l{schMutex};
                        auto             now = std::chrono::steady_clock::now();
                        while (works.try_pop_if([&](Impl::ScheduledWork& w) {
                            if (w.time <= now) {
                                e.addTask(std::move(w.fn));
                                return true;
                            }
                            frontTime = w.time - now;
                            return false;
                        })) {}
                    }
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
    std::atomic_bool                       hasSchWorker{false};
    std::atomic_bool                       stop{false};

    ScheduledWorker& getScheduledWorker(TaskExecutor const& e) {
        if (!hasSchWorker.exchange(true)) {
            scheduledWorker.emplace(e);
        }
        return *scheduledWorker;
    }
    Impl(TaskExecutor& self, size_t nThreads) {
        for (size_t i = 0; i < nThreads; ++i) {
            workers.emplace_back([this, &self, i] {
                ll::error_utils::initExceptionTranslator();
                setThreadName(fmt::format("ll::ThreadPoolExecutor({})[{}]", self.getName(), i));
                for (;;) {
                    std::function<void()> task;
                    taskCount.acquire();
                    if (!tasks.try_pop(task)) {
                        if (stop.load(std::memory_order_relaxed)) {
                            return;
                        }
                        taskCount.release();
                        continue;
                    }
                    try {
                        task();
                    } catch (...) {
                        getLogger().error("Error in ThreadPoolExecutor({})[{}]:", self.getName(), i);
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

ThreadPoolExecutor::ThreadPoolExecutor(std::string_view name, size_t nThreads)
: TaskExecutor(name),
  impl(std::make_unique<Impl>(*this, nThreads)) {}

void ThreadPoolExecutor::resize(size_t nThreads) { impl = std::make_unique<Impl>(*this, nThreads); }

void ThreadPoolExecutor::destroy() { impl.reset(); }

void ThreadPoolExecutor::addTask(std::function<void()> f) const {
    impl->tasks.push(std::move(f));
    impl->taskCount.release();
}
TaskExecutor::SchId ThreadPoolExecutor::addTaskAfter(std::function<void()> f, Duration dur) const {
    if (dur <= Duration{0}) {
        addTask(std::move(f));
        return 0;
    } else {
        auto& worker = impl->getScheduledWorker(*this);
        auto  id     = ++worker.schId;
        {
            std::shared_lock l{worker.schMutex};
            worker.works.emplace(id, std::chrono::steady_clock::now() + dur, std::move(f));
            worker.sleeper.interrupt();
        }
        return id;
    }
}

template <template <class...> class Q, class... Ts>
static auto& getUnderlyingContainer(Q<Ts...>& q) {
    struct Tmp : private Q<Ts...> {
        static auto& getter(Q<Ts...>& q) { return q.*&Tmp::c; }
    };
    return Tmp::getter(q);
}

bool ThreadPoolExecutor::removeFromSch(SchId id) const {
    if (id == 0) {
        return false;
    }
    auto&           worker = impl->getScheduledWorker(*this);
    std::lock_guard l{worker.schMutex};

    auto& vec   = getUnderlyingContainer(worker.works);
    bool  found = erase_if(vec, [&](auto& w) { return w.id == id; });

    std::vector<Impl::ScheduledWork> templist;
    std::swap(templist, vec);

    worker.works = std::move(templist);

    return found;
}

ThreadPoolExecutor const& ThreadPoolExecutor::getDefault() {
    static std::shared_ptr<ThreadPoolExecutor> p =
        std::make_shared<ThreadPoolExecutor>("default", std::max((int)std::thread::hardware_concurrency() - 2, 2));
    return *p;
}
} // namespace ll::thread
