#include "ll/api/chrono/GameChrono.h"

#include <atomic>

#include "ll/api/base/StdInt.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/world/LevelTickEvent.h"
#include "ll/api/service/Bedrock.h"

#include "mc/world/level/Tick.h"

namespace ll::chrono {

static std::atomic_llong servertime{0};

ServerClock::time_point ServerClock::now() noexcept {
    static auto counter = event::EventBus::getInstance().emplaceListener<event::LevelTickEvent>(
        [](auto&) { servertime++; },
        event::EventPriority::High
    );
    return time_point(duration(servertime.load()));
}

GameTickClock::time_point GameTickClock::now() noexcept {
    return ll::service::getLevel().transform([](auto& level) { return fromTick(level.getCurrentTick()); }
    ).value_or(time_point::min());
}

} // namespace ll::chrono
