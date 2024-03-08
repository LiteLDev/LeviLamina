#include "ll/api/thread/TickSyncTaskPool.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/server/ServerLevel.h"
#include "mc/world/level/Tick.h"

namespace ll::thread {

std::atomic_bool workerHooked{};

std::mutex                                            poolListMutex;
std::atomic_size_t                                    poolListSize{};
std::vector<std::reference_wrapper<TickSyncTaskPool>> poolList;

LL_TYPE_INSTANCE_HOOK(TickSyncTaskPool::Worker, HookPriority::Low, ServerLevel, &ServerLevel::_subTick, void) {
    if (poolListSize > 0) {
        std::lock_guard lock(poolListMutex);
        for (auto& e : poolList) {
            auto&           pool = e.get();
            std::lock_guard lockp(pool.mutex);
            auto            num = std::min(pool.tasksPerTick, pool.tasks.size());
            for (size_t i = 0; i < num; i++) {
                try {
                    pool.tasks.front()();
                } catch (...) {
                    logger.error("Error in TickSyncTaskPool:");
                    error_utils::printCurrentException(logger);
                }
                pool.tasks.pop();
            }
        }
    } else {
        unhook();
        workerHooked = false;
    }
    origin();
}

TickSyncTaskPool::TickSyncTaskPool(size_t tasksPerTick) : tasksPerTick(tasksPerTick) {
    using namespace detail;
    std::lock_guard lock(poolListMutex);
    id = poolList.size();
    poolList.emplace_back(std::ref(*this));
    ++poolListSize;
    if (!workerHooked) {
        workerHooked = true;
        TickSyncTaskPool::Worker::hook();
    }
}
TickSyncTaskPool::~TickSyncTaskPool() {
    using namespace detail;
    std::lock_guard lock(poolListMutex);
    std::swap(poolList[id], poolList.back());
    poolList.pop_back();
    --poolListSize;
}

} // namespace ll::thread
