#include "ll/api/thread/TickSyncTaskPool.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/ServerLevel.h"
#include "mc/world/level/Tick.h"

namespace ll::thread {
std::vector<std::function<void()>> TickSyncTaskPool::tasks;
std::atomic_bool                   TickSyncTaskPool::hasTask;
std::mutex                         TickSyncTaskPool::mutex;

LL_TYPED_INSTANCE_HOOK(TickSyncTaskPoolWorker, HookPriority::Low, ServerLevel, &ServerLevel::_subTick, void) {
    if (TickSyncTaskPool::hasTask) {
        std::lock_guard lock{TickSyncTaskPool::mutex};
        for (auto& task : TickSyncTaskPool::tasks) {
            task();
        }
        TickSyncTaskPool::tasks.clear();
        TickSyncTaskPool::hasTask = false;
    }
    origin();
}

void TickSyncTaskPool::notify() {
    static memory::HookAutoRegister<TickSyncTaskPoolWorker> reg{};
    hasTask = true;
}
} // namespace ll::thread
