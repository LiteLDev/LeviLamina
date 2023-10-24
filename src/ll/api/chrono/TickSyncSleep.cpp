#include "ll/api/chrono/TickSyncSleep.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/ServerLevel.h"

namespace ll::gamechrono {

std::vector<std::pair<void*, bool>> ticklist;

LL_AUTO_TYPED_INSTANCE_HOOK(ScheduleTaskTickHook, HookPriority::Normal, ServerLevel, &ServerLevel::_subTick, void) {
    origin();
    for (auto& [ptr, steady] : ticklist) {
        if (steady) {
            auto& sleeper = *(TickSyncSleep<ServerClock>*)ptr;
            switch (sleeper.state) {
            case TickSyncSleep<ServerClock>::State::SleepFor:
            case TickSyncSleep<ServerClock>::State::SleepUntil:
                if (ServerClock::now() >= sleeper.timepoint || sleeper.timepoint >= ServerClock::time_point::max()) {
                    sleeper.interrupt();
                }
            case TickSyncSleep<ServerClock>::State::None:
            case TickSyncSleep<ServerClock>::State::Sleep:
            default:
                continue;
            }
        } else {
            auto& sleeper = *(TickSyncSleep<GameTimeClock>*)ptr;
            switch (sleeper.state) {
            case TickSyncSleep<GameTimeClock>::State::SleepFor:
            case TickSyncSleep<GameTimeClock>::State::SleepUntil:
                if (GameTimeClock::now() >= sleeper.timepoint
                    || sleeper.timepoint >= GameTimeClock::time_point::max()) {
                    sleeper.interrupt();
                }
            case TickSyncSleep<GameTimeClock>::State::None:
            case TickSyncSleep<GameTimeClock>::State::Sleep:
            default:
                continue;
            }
        }
    }
}

} // namespace ll::gamechrono