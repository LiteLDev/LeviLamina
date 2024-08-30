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

struct TickSyncTaskPool::Impl {
    ConcurrentQueue<std::function<void()>> works;
    event::ListenerPtr                     worker;
};

TickSyncTaskPool::TickSyncTaskPool() : impl(std::make_unique<Impl>()) {
    impl->worker = event::EventBus::getInstance().emplaceListener<event::LevelTickEvent>(
        [this](auto&) {
            std::function<void()> f;
            while (impl->works.try_pop(f)) {
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
TickSyncTaskPool::~TickSyncTaskPool() {
    event::EventBus::getInstance().removeListener<event::LevelTickEvent>(impl->worker);
}

void TickSyncTaskPool::addTaskImpl(std::function<void()> f) { impl->works.push(std::move(f)); }

std::shared_ptr<TickSyncTaskPool> const& TickSyncTaskPool::getDefault() {
    static std::shared_ptr<TickSyncTaskPool> p = std::make_shared<TickSyncTaskPool>();
    return p;
}
} // namespace ll::thread
