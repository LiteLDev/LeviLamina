#include <chrono>

#include "mc/world/level/Tick.h"

namespace ll::gamechrono {

using ticks = std::ratio<1, 20>;

struct clock {
    using rep                       = Tick::Type;
    using period                    = ticks;
    using duration                  = std::chrono::duration<rep, period>;
    using time_point                = std::chrono::time_point<clock>;
    static constexpr bool is_steady = true;

    LLNDAPI static time_point now() noexcept;
};

} // namespace ll::gamechrono
