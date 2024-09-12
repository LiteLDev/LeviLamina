#include "ll/api/thread/ServerThreadExecutor.h"

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

struct ServerThreadExecutor::Impl {
    struct ScheduledWork {
        uint64                               time;
        std::shared_ptr<CancellableCallback> callback;
    };
    struct SwCmp {
        bool operator()(ScheduledWork const& x, ScheduledWork const& y) { return x.time > y.time; }
    };
    struct SharedImpl {
        ConcurrentQueue<std::function<void()>> works;

        ConcurrentPriorityQueue<ScheduledWork, SwCmp> scheduledWorks;
        std::atomic_uint64_t                          frame{0};

        template <class F>
        void update(F&& exec) {
            auto now = frame.load();
            while (scheduledWorks.try_pop_if([&](Impl::ScheduledWork& w) {
                if (w.time <= now) {
                    w.callback->moveTo([&](auto&& fn) {
                        works.push(std::move(fn));
                        return true;
                    });
                    return true;
                }
                return false;
            })) {}

            std::function<void()> f;

            size_t i{};
            while (works.try_pop(f)) {
                if (!exec(f, ++i)) {
                    break;
                }
            }
            frame++;
        }
    };
    std::shared_ptr<SharedImpl> shared;
    event::ListenerPtr          worker;
};
ServerThreadExecutor::ServerThreadExecutor(std::string_view name, Duration maxOnceDuration, size_t checkPack)
: Executor(name),
  impl(std::make_unique<Impl>(std::make_shared<Impl::SharedImpl>())) {
    impl->worker = event::EventBus::getInstance().emplaceListener<event::LevelTickEvent>(
        [name = getName(), maxOnceDuration, checkPack, weak = std::weak_ptr{impl->shared}](auto&&) {
            auto impl = weak.lock();
            if (!impl) {
                return;
            }
            auto begin  = Clock::now();
            impl->update([&](auto& f, size_t i) {
                try {
                    f();
                } catch (...) {
                    getLogger().error("Error in ServerThreadExecutor({}):", name);
                    error_utils::printCurrentException(getLogger());
                }
                if (i % checkPack == 0 && Clock::now() - begin > maxOnceDuration) {
                    return false;
                }
                return true;
            });
        },
        event::EventPriority::Low
    );
}
ServerThreadExecutor::~ServerThreadExecutor() {
    event::EventBus::getInstance().removeListener<event::LevelTickEvent>(impl->worker);
}
void ServerThreadExecutor::execute(std::function<void()> f) const { impl->shared->works.push(std::move(f)); }

std::shared_ptr<CancellableCallback> ServerThreadExecutor::executeAfter(std::function<void()> f, Duration dur) const {
    auto tick = std::chrono::ceil<chrono::ticks>(dur).count();
    if (tick <= 0) {
        impl->shared->works.push(std::move(f));
        return nullptr;
    } else {
        auto res = std::make_shared<CancellableCallback>(std::move(f));
        impl->shared->scheduledWorks.emplace(impl->shared->frame.load() + tick, res);
        return res;
    }
}

ServerThreadExecutor const& ServerThreadExecutor::getDefault() {
    static std::shared_ptr<ServerThreadExecutor> p =
        std::make_shared<ServerThreadExecutor>("default", std::chrono::milliseconds{30}, 16);
    return *p;
}
} // namespace ll::thread
