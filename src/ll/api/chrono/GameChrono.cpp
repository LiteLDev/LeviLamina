#include "ll/api/chrono/GameChrono.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"

#include "mc/server/ServerLevel.h"
#include "mc/world/level/Tick.h"

namespace ll::chrono {

std::atomic_llong servertime{0};

ServerClock::time_point ServerClock::now() noexcept { return time_point(duration(servertime.load())); }

LL_AUTO_TYPED_INSTANCE_HOOK(ServerClockTickHook, HookPriority::High, ServerLevel, &ServerLevel::_subTick, void) {
    servertime++;
    origin();
}

GameTimeClock::time_point GameTimeClock::now() noexcept {
    if (!ll::service::getLevel()) {
        return time_point::max();
    }
    return time_point(duration((int64)(ll::service::getLevel()->getCurrentTick().t)));
}

} // namespace ll::chrono
