#include "ll/api/GameChrono.h"
#include "ll/api/service/GlobalService.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/Tick.h"

namespace ll::gamechrono {

ServerClock::time_point ServerClock::now() noexcept {
    if (!ll::Global<Level>) { return time_point::max(); }
    return time_point(duration(ll::Global<Level>->getCurrentTick()));
}

} // namespace ll::gamechrono