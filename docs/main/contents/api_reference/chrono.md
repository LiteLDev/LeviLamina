# Chrono

`ll/api/chrono/` · **Common**

## Overview

The Chrono module provides game-specific time types based on `std::chrono`, including game tick durations, game-time clocks, and user-defined literals for expressing game time.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/chrono/GameChrono.h` | Game tick durations, clocks, and literals |

## Game Tick Durations

Game time is measured in **ticks** (20 ticks = 1 real-time second). The following duration types are provided:

| Type | Definition | Equivalent |
|------|-----------|------------|
| `game::ticks` | `duration<int64, ratio<1, 20>>` | 1 tick = 50ms |
| `game::days` | 24000 ticks | 1 Minecraft day |
| `game::hours` | 1000 ticks | 1 Minecraft hour |
| `game::minutes` | ~16.67 ticks | 1 Minecraft minute |
| `game::weeks` | 7 game days | 1 Minecraft week |
| `game::months` | ~1/12 of a game year | 1 Minecraft month |
| `game::years` | 365 game days | 1 Minecraft year |

### User-Defined Literals

```cpp
#include "ll/api/chrono/GameChrono.h"

using namespace ll::chrono_literals;

auto tenTicks   = 10_tick;
auto halfDay    = 12000_tick;
```

## Clocks

### GameTickClock

A clock that tracks game ticks. Time advances only when the game is ticking.

```cpp
#include "ll/api/chrono/GameChrono.h"

auto now = ll::chrono::GameTickClock::now();
auto tp  = ll::chrono::GameTickClock::fromTick(100);
```

### ServerClock

A clock that tracks real wall-clock time on the server.

```cpp
auto serverNow = ll::chrono::ServerClock::now();
```

## Usage

### Measuring Game Time Intervals

```cpp
#include "ll/api/chrono/GameChrono.h"

void onTick() {
    using namespace ll::chrono;
    static auto lastCheck = GameTickClock::now();

    auto elapsed = GameTickClock::now() - lastCheck;
    if (elapsed >= game::days{1}) {
        // One in-game day has passed
        lastCheck = GameTickClock::now();
    }
}
```

### Converting Between Durations

```cpp
#include "ll/api/chrono/GameChrono.h"
#include <chrono>

using namespace ll::chrono;

// Convert game ticks to real-time seconds
auto ticks = game::ticks{100};
auto realSeconds = std::chrono::duration_cast<std::chrono::seconds>(ticks); // 5 seconds
```

## Related

- [Thread](thread.md) — `TickSyncSleep` uses game chrono types
- [Coroutine](coro.md) — `SleepAwaiter` works with chrono durations
