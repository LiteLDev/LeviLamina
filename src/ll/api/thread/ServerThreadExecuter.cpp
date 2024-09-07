#include "ll/api/thread/ServerThreadExecuter.h"

#include <functional>
#include <memory>
#include <utility>

#include "ll/api/chrono/GameChrono.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/world/LevelTickEvent.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "ll/api/base/Containers.h"

namespace ll::thread {

struct ServerThreadExecuter::Impl {
    struct ScheduledWork {
        chrono::GameTickClock::time_point time;
        std::function<void()>             fn;
    };
    struct SwCmp {
        bool operator()(ScheduledWork const& x, ScheduledWork const& y) { return x.time > y.time; }
    };
    struct SharedImpl {
        ConcurrentQueue<std::function<void()>>        works;
        ConcurrentPriorityQueue<ScheduledWork, SwCmp> scheduledWorks;
    };
    std::shared_ptr<SharedImpl> implPtr;
    event::ListenerPtr          worker;
};

static inline void safeWrapper(std::function<void()> const& f) noexcept try { f(); } catch (...) {
    getLogger().error("Error in ServerThreadExecuter:");
    error_utils::printCurrentException(getLogger());
}

ServerThreadExecuter::ServerThreadExecuter(Duration maxOnceDuration, size_t checkPack)
: impl(std::make_unique<Impl>(std::make_shared<Impl::SharedImpl>())) {
    impl->worker = event::EventBus::getInstance().emplaceListener<event::LevelTickEvent>(
        [impl = impl->implPtr, maxOnceDuration, checkPack](event::LevelTickEvent& ev) {
            auto now = chrono::GameTickClock::fromTick(ev.level().getCurrentTick());
            while (impl->scheduledWorks.try_pop_if([&](Impl::ScheduledWork& w) {
                if (w.time <= now) {
                    impl->works.push(std::move(w.fn));
                    return true;
                }
                return false;
            })) {}
            using Clock                 = std::chrono::steady_clock;
            auto                  begin = Clock::now();
            std::function<void()> f;

            size_t i{};
            while (impl->works.try_pop(f)) {
                safeWrapper(f);
                if (++i % checkPack == 0 && Clock::now() - begin > maxOnceDuration) {
                    break;
                }
            }
        },
        event::EventPriority::Low
    );
}
ServerThreadExecuter::~ServerThreadExecuter() {
    event::EventBus::getInstance().removeListener<event::LevelTickEvent>(impl->worker);
}

void ServerThreadExecuter::addTask(std::function<void()> f) { impl->implPtr->works.push(std::move(f)); }

void ServerThreadExecuter::addTaskAfter(std::function<void()> f, Duration us) {
    auto tick = std::chrono::duration_cast<chrono::ticks>(us);
    if (tick <= chrono::ticks{0}) {
        impl->implPtr->works.push(std::move(f));
    } else {
        impl->implPtr->scheduledWorks.emplace(chrono::GameTickClock::now() + tick, std::move(f));
    }
}

ServerThreadExecuter& ServerThreadExecuter::getDefault() {
    static std::shared_ptr<ServerThreadExecuter> p =
        std::make_shared<ServerThreadExecuter>(std::chrono::milliseconds{40}, 16);
    return *p;
}
} // namespace ll::thread
