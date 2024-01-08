#include "ll/api/thread/TickSyncSleep.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/ServerLevel.h"

namespace ll::thread::detail {

std::atomic_bool hooked{};

std::mutex         listMutex;
std::atomic_size_t tickListSize{};
std::vector<std::variant<
    std::reference_wrapper<TickSyncSleep<chrono::ServerClock>>,
    std::reference_wrapper<TickSyncSleep<chrono::GameTickClock>>>>
    tickList;

LL_TYPE_INSTANCE_HOOK(TickSyncSleepInterrruptHook, HookPriority::Normal, ServerLevel, &ServerLevel::_subTick, void) {
    if (tickListSize > 0) {
        std::lock_guard lock(listMutex);
        for (auto& e : tickList) {
            std::visit(
                [&](auto& ptr) -> void {
                    auto& sleeper = ptr.get();

                    using sleeper_t = std::decay_t<decltype(sleeper)>;
                    using clock     = typename sleeper_t::clock_type;
                    using state     = typename sleeper_t::State;

                    switch (sleeper.state) {
                    case state::SleepFor:
                    case state::SleepUntil:
                        if (clock::now() >= sleeper.timepoint || sleeper.timepoint >= clock::time_point::max()) {
                            sleeper.interrupt();
                        }
                    case state::None:
                    case state::Sleep:
                    default:
                        return;
                    }
                },
                e
            );
        }
    } else {
        unhook();
        hooked = false;
    }
    origin();
}
void notify() {
    if (!hooked) {
        hooked = true;
        TickSyncSleepInterrruptHook::hook();
    }
}
} // namespace ll::thread::detail
