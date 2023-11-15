#pragma once

#include <chrono>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::chrono::game_chrono {

using ticks   = std::chrono::duration<int64, std::ratio<1, 20>>;
using days    = std::chrono::duration<int64, std::ratio_multiply<std::ratio<24000>, ticks::period>>;
using hours   = std::chrono::duration<int64, std::ratio_divide<days::period, std::ratio<24>>>;
using minutes = std::chrono::duration<int64, std::ratio_divide<hours::period, std::ratio<60>>>;
using weeks   = std::chrono::duration<int64, std::ratio_multiply<days::period, std::ratio<7>>>;
using years   = std::chrono::duration<int64, std::ratio_multiply<days::period, std::ratio<146097, 400>>>;
using months  = std::chrono::duration<int64, std::ratio_divide<years::period, std::ratio<12>>>;

struct ServerClock {
    using duration                  = ticks;
    using rep                       = duration::rep;
    using period                    = duration::period;
    using time_point                = std::chrono::time_point<ServerClock>;
    static constexpr bool is_steady = true;

    LLNDAPI static time_point now() noexcept;
};

struct GameTimeClock {
    using duration                  = ticks;
    using rep                       = duration::rep;
    using period                    = duration::period;
    using time_point                = std::chrono::time_point<GameTimeClock>;
    static constexpr bool is_steady = false;

    LLNDAPI static time_point now() noexcept;
};

} // namespace ll::chrono::game_chrono

namespace ll::chrono_literals {

using namespace std::literals::chrono_literals;

constexpr ll::chrono::game_chrono::ticks operator""_tick(uint64 val) noexcept {
    return ll::chrono::game_chrono::ticks{val};
}

} // namespace ll::chrono_literals
