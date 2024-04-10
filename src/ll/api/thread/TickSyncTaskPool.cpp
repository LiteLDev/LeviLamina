#include "ll/api/thread/TickSyncTaskPool.h"

#include <functional>
#include <memory>
#include <utility>

#include "ll/api/memory/Hook.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/server/ServerLevel.h"

#include "concurrent_queue.h"

namespace ll::thread {

static Concurrency::concurrent_queue<std::function<void()>> works;

LL_TYPE_INSTANCE_HOOK(TickSyncTaskPool::Worker, HookPriority::Low, ServerLevel, &ServerLevel::_subTick, void) {
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

struct TickSyncTaskPool::Impl {
    ::ll::memory::HookRegistrar<Worker> reg;
};

TickSyncTaskPool::TickSyncTaskPool() : impl(std::make_unique<Impl>()) {}
TickSyncTaskPool::~TickSyncTaskPool() {}

void TickSyncTaskPool::addTaskImpl(std::function<void()> f) { works.push(std::move(f)); }

} // namespace ll::thread
