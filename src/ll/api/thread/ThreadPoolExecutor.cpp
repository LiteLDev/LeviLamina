#include "ll/api/thread/ThreadPoolExecutor.h"

#include <condition_variable>
#include <mutex>
#include <queue>
#include <stdexcept>
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
        std::mutex                                                            mutex;
        std::thread                                                           schtrd;
        InterruptableSleep                                                    sleeper;
        std::priority_queue<ScheduledWork, std::vector<ScheduledWork>, SwCmp> works;
        std::atomic_bool                                                      working{true};
        std::atomic<SchId>                                                    schId{0};
        ScheduledWorker(TaskExecutor const& e) {
            schtrd = std::thread{[this, &e]() {
                ll::error_utils::initExceptionTranslator();
                setThreadName(fmt::format("ll::ThreadPoolExecutor({})[sch]", e.getName()));
                while (working) {
                    if (works.empty()) {
                        sleeper.sleep();
                    } else {
                        sleeper.sleepUntil(works.top().time);
                    }
                    auto            now = std::chrono::steady_clock::now();
                    std::lock_guard l{mutex};
                    while (!works.empty()) {
                        auto& w = works.top();
                        if (w.time <= now) {
                            e.addTask(std::move(w.fn));
                            works.pop();
                            continue;
                        } else {
                            break;
                        }
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


    std::vector<std::thread>          workers;
    std::queue<std::function<void()>> tasks;
    std::mutex                        mutex;
    std::condition_variable           condition;
    std::optional<ScheduledWorker>    scheduledWorker;
    bool                              stop{false};

    ScheduledWorker& getScheduledWorker(TaskExecutor const& e) {
        std::lock_guard lock{mutex};
        if (!scheduledWorker) {
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
                        getLogger().error("Error in ThreadPoolExecutor({})[{}]:", self.getName(), i);
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
ThreadPoolExecutor::~ThreadPoolExecutor() = default;

ThreadPoolExecutor::ThreadPoolExecutor(std::string_view name, size_t nThreads)
: TaskExecutor(name),
  impl(std::make_unique<Impl>(*this, nThreads)) {}

void ThreadPoolExecutor::resize(size_t nThreads) { impl = std::make_unique<Impl>(*this, nThreads); }

void ThreadPoolExecutor::destroy() { impl.reset(); }

void ThreadPoolExecutor::addTask(std::function<void()> f) const {
    {
        std::lock_guard lock{impl->mutex};
        impl->tasks.emplace(std::move(f));
    }
    impl->condition.notify_one();
}
TaskExecutor::SchId ThreadPoolExecutor::addTaskAfter(std::function<void()> f, Duration dur) const {
    if (dur <= Duration{0}) {
        addTask(std::move(f));
        return 0;
    } else {
        auto& worker = impl->getScheduledWorker(*this);
        auto  id     = ++worker.schId;
        {
            std::lock_guard l{worker.mutex};
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
    std::lock_guard l{worker.mutex};

    auto& vec   = getUnderlyingContainer(worker.works);
    bool  found = erase_if(vec, [&](auto& w) { return w.id == id; });

    std::vector<Impl::ScheduledWork> templist;
    std::swap(templist, vec);

    worker.works.push_range(std::move(templist));

    return found;
}

ThreadPoolExecutor const& ThreadPoolExecutor::getDefault() {
    static std::shared_ptr<ThreadPoolExecutor> p =
        std::make_shared<ThreadPoolExecutor>("default", std::max((int)std::thread::hardware_concurrency() - 2, 2));
    return *p;
}
} // namespace ll::thread
