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
        SchId                 id;
        uint64                time;
        std::function<void()> fn;
    };
    struct SwCmp {
        bool operator()(ScheduledWork const& x, ScheduledWork const& y) { return x.time > y.time; }
    };
    struct SharedImpl {
        ConcurrentQueue<std::function<void()>> works;

        std::shared_mutex                             schMutex;
        ConcurrentPriorityQueue<ScheduledWork, SwCmp> scheduledWorks;
        std::atomic_uint64_t                          frame{0};

        template <class F>
        void update(F&& exec) {
            auto now = frame.load();
            {
                std::shared_lock l{schMutex};
                while (scheduledWorks.try_pop_if([&](Impl::ScheduledWork& w) {
                    if (w.time <= now) {
                        works.push(std::move(w.fn));
                        return true;
                    }
                    return false;
                })) {}
            }
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
    std::atomic<SchId>          schId{0};
    event::ListenerPtr          worker;
};
ServerThreadExecuter::ServerThreadExecuter(std::string_view name, Duration maxOnceDuration, size_t checkPack)
: TaskExecuter(name),
  impl(std::make_unique<Impl>(std::make_shared<Impl::SharedImpl>())) {
    impl->worker = event::EventBus::getInstance().emplaceListener<event::LevelTickEvent>(
        [name = getName(), maxOnceDuration, checkPack, weak = std::weak_ptr{impl->shared}](auto&&) {
            auto impl = weak.lock();
            if (!impl) {
                return;
            }
            using Clock = std::chrono::steady_clock;
            auto begin  = Clock::now();
            impl->update([&](auto& f, size_t i) {
                try {
                    f();
                } catch (...) {
                    getLogger().error("Error in ServerThreadExecuter({}):", name);
                    error_utils::printCurrentException(getLogger());
                }
                if (++i % checkPack == 0 && Clock::now() - begin > maxOnceDuration) {
                    return false;
                }
                return true;
            });
        },
        event::EventPriority::Low
    );
}
ServerThreadExecuter::~ServerThreadExecuter() {
    event::EventBus::getInstance().removeListener<event::LevelTickEvent>(impl->worker);
}
void ServerThreadExecuter::addTask(std::function<void()> f) const { impl->shared->works.push(std::move(f)); }

TaskExecuter::SchId ServerThreadExecuter::addTaskAfter(std::function<void()> f, Duration dur) const {
    auto tick = std::chrono::ceil<chrono::ticks>(dur).count();
    if (tick <= 0) {
        impl->shared->works.push(std::move(f));
        return 0;
    } else {
        auto id = ++impl->schId;
        {
            std::shared_lock l{impl->shared->schMutex};
            impl->shared->scheduledWorks.emplace(id, impl->shared->frame.load() + tick, std::move(f));
        }
        return id;
    }
}

template <template <class...> class Q, class... Ts>
static auto& getUnderlyingContainer(Q<Ts...>& q) {
    struct Tmp : private Q<Ts...> {
        static auto& getter(Q<Ts...>& q) { return q.*&Tmp::c; }
    };
    return Tmp::getter(q);
}

bool ServerThreadExecuter::removeFromSch(SchId id) const {
    if (id == 0) {
        return false;
    }
    std::lock_guard l{impl->shared->schMutex};

    auto& vec   = getUnderlyingContainer(impl->shared->scheduledWorks);
    bool  found = erase_if(vec, [&](auto& w) { return w.id == id; });

    std::vector<Impl::ScheduledWork> templist;
    std::swap(templist, vec);

    impl->shared->scheduledWorks = std::move(templist);

    return found;
}

ServerThreadExecuter const& ServerThreadExecuter::getDefault() {
    static std::shared_ptr<ServerThreadExecuter> p =
        std::make_shared<ServerThreadExecuter>("default", std::chrono::milliseconds{40}, 16);
    return *p;
}
} // namespace ll::thread
