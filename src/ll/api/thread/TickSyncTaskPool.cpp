#include "ll/api/thread/TickSyncTaskPool.h"

#include <algorithm>
#include <atomic>
#include <cstddef>
#include <functional>
#include <mutex>
#include <utility>
#include <vector>

#include "ll/api/memory/Hook.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/server/ServerLevel.h"

#include "concurrent_queue.h"

namespace ll::thread {

static Concurrency::concurrent_queue<std::function<void()>> works;

struct TickSyncTaskPool::Impl {};

LL_TYPE_INSTANCE_HOOK(TickSyncTaskPool::Worker, HookPriority::High, ServerLevel, &ServerLevel::_subTick, void) {
    std::function<void()> f;
    while (works.try_pop(f)) {
        try {
            f();
        } catch (...) {
            logger.error("Error in TickSyncTaskPool:");
            error_utils::printCurrentException(logger);
        }
    }
    origin();
}

TickSyncTaskPool::TickSyncTaskPool() : impl(std::make_unique<Impl>()) {}
TickSyncTaskPool::~TickSyncTaskPool() {}

void TickSyncTaskPool::addTaskImpl(std::function<void()> f) {
    static ::ll::memory::HookRegistrar<Worker> reg;
    works.push(std::move(f));
}

} // namespace ll::thread
