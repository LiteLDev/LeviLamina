#pragma once

#include <functional>
#include <future>
#include <memory>
#include <mutex>
#include <queue>
#include <stdexcept>
#include <thread>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::thread {
class TickSyncTaskPool;
namespace detail {
struct TickSyncTaskPoolWorker;
LLETAPI std::mutex poolListMutex;
LLETAPI std::atomic_size_t poolListSize;
LLETAPI std::vector<std::reference_wrapper<TickSyncTaskPool>> poolList;
LLAPI void                                                    notifyWorker();
}; // namespace detail

class TickSyncTaskPool {
    friend detail::TickSyncTaskPoolWorker;

private:
    std::queue<std::function<void()>> tasks;
    std::mutex                        mutex;
    size_t                            tasksPerTick;
    size_t                            id;

public:
    explicit TickSyncTaskPool(size_t tasksPerTick = ~0ui64) : tasksPerTick(tasksPerTick) {
        using namespace detail;
        std::lock_guard lock(poolListMutex);
        id = poolList.size();
        poolList.emplace_back(std::ref(*this));
        ++poolListSize;
        notifyWorker();
    }
    ~TickSyncTaskPool() {
        using namespace detail;
        std::lock_guard lock(poolListMutex);
        std::swap(poolList[id], poolList.back());
        poolList.pop_back();
        --poolListSize;
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
        return res;
    }
};
} // namespace ll::thread
