#include "ll/api/thread/ServerThreadExecuter.h"

#include <functional>
#include <memory>
#include <utility>

#include "ll/api/event/EventBus.h"
#include "ll/api/event/world/LevelTickEvent.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "ll/api/base/Containers.h"

namespace ll::thread {

struct ServerThreadExecuter::Impl {
    ConcurrentQueue<std::function<void()>> works;
    event::ListenerPtr                     worker;
};

ServerThreadExecuter::ServerThreadExecuter() : impl(std::make_unique<Impl>()) {
    impl->worker = event::EventBus::getInstance().emplaceListener<event::LevelTickEvent>(
        [this](auto&) {
            std::function<void()> f;
            while (impl->works.try_pop(f)) {
                try {
                    f();
                } catch (...) {
                    getLogger().error("Error in ServerThreadExecuter:");
                    error_utils::printCurrentException(getLogger());
                }
            }
        },
        event::EventPriority::Low
    );
}
ServerThreadExecuter::~ServerThreadExecuter() {
    event::EventBus::getInstance().removeListener<event::LevelTickEvent>(impl->worker);
}

void ServerThreadExecuter::addTask(std::function<void()> f) { impl->works.push(std::move(f)); }

std::shared_ptr<ServerThreadExecuter> const& ServerThreadExecuter::getDefault() {
    static std::shared_ptr<ServerThreadExecuter> p = std::make_shared<ServerThreadExecuter>();
    return p;
}
} // namespace ll::thread
