#include "ll/api/thread/TickSyncTaskPool.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/server/ServerLevel.h"
#include "mc/world/level/Tick.h"

namespace ll::thread::detail {

std::atomic_bool workerHooked{};

std::mutex                                            poolListMutex;
std::atomic_size_t                                    poolListSize{};
std::vector<std::reference_wrapper<TickSyncTaskPool>> poolList;

LL_TYPE_INSTANCE_HOOK(TickSyncTaskPoolWorker, HookPriority::Low, ServerLevel, &ServerLevel::_subTick, void) {
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

void notifyWorker() {
    if (!workerHooked) {
        workerHooked = true;
        TickSyncTaskPoolWorker::hook();
    }
}
} // namespace ll::thread::detail
