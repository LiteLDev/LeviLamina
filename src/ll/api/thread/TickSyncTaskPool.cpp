#include "ll/api/thread/TickSyncTaskPool.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/ServerLevel.h"
#include "mc/world/level/Tick.h"

namespace ll::thread::detail {

std::atomic_bool workerHooked{};

std::mutex                                            poolListMutex;
std::atomic_size_t                                    poolListSize{};
std::vector<std::reference_wrapper<TickSyncTaskPool>> poolList;

LL_TYPED_INSTANCE_HOOK(TickSyncTaskPoolWorker, HookPriority::Low, ServerLevel, &ServerLevel::_subTick, void) {
    if (poolListSize > 0) {
        std::lock_guard lock(poolListMutex);
        for (auto& e : poolList) {
            auto&           pool = e.get();
            std::lock_guard lockp(pool.mutex);
            auto            num = std::min(pool.tasksPerTick, pool.tasks.size());
            for (size_t i = 0; i < num; i++) {
                pool.tasks.front()();
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
