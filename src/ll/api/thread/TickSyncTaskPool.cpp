#include "ll/api/thread/TickSyncTaskPool.h"

#include <functional>
#include <memory>
#include <utility>

#include "ll/api/event/EventBus.h"
#include "ll/api/event/world/LevelTickEvent.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "ll/api/base/Containers.h"

namespace ll::thread {

static ConcurrentQueue<std::function<void()>> works;

struct TickSyncTaskPool::Impl {};

TickSyncTaskPool::TickSyncTaskPool() : impl(std::make_unique<Impl>()) {
    static auto worker = event::EventBus::getInstance().emplaceListener<event::LevelTickEvent>(
        [](auto&) {
            std::function<void()> f;
            while (works.try_pop(f)) {
                try {
                    f();
                } catch (...) {
                    getLogger().error("Error in TickSyncTaskPool:");
                    error_utils::printCurrentException(getLogger());
                }
            }
        },
        event::EventPriority::Low
    );
}
TickSyncTaskPool::~TickSyncTaskPool() {}

void TickSyncTaskPool::addTaskImpl(std::function<void()> f) { works.push(std::move(f)); }

} // namespace ll::thread
