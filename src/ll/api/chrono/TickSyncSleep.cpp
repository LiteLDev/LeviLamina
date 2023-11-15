#include "ll/api/chrono/TickSyncSleep.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/ServerLevel.h"

namespace ll::chrono {

std::vector<std::variant<
    std::reference_wrapper<TickSyncSleep<game_chrono::ServerClock>>,
    std::reference_wrapper<TickSyncSleep<game_chrono::GameTimeClock>>>>
    tickList;

LL_AUTO_TYPED_INSTANCE_HOOK(
    TickSyncSleepInterrruptHook,
    HookPriority::Normal,
    ServerLevel,
    &ServerLevel::_subTick,
    void
) {
    origin();
    for (auto& e : tickList) {
        std::visit(
            [&](auto& ptr) -> void {
                auto& sleeper = ptr.get();

                using Sleeper = std::decay_t<decltype(sleeper)>;
                using Clock   = typename Sleeper::ClockType;
                using State   = typename Sleeper::State;

                switch (sleeper.state) {
                case State::SleepFor:
                case State::SleepUntil:
                    if (Clock::now() >= sleeper.timepoint || sleeper.timepoint >= Clock::time_point::max()) {
                        sleeper.interrupt();
                    }
                case State::None:
                case State::Sleep:
                default:
                    return;
                }
            },
            e
        );
    }
}

} // namespace ll::chrono
