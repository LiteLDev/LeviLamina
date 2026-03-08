# Chrono（游戏时间）

`ll/api/chrono/` · **通用**

## 概述

Chrono 模块提供了基于 `std::chrono` 的游戏专用时间类型，包括游戏刻时长、游戏时钟和用于表达游戏时间的用户自定义字面量。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/chrono/GameChrono.h` | 游戏刻时长、时钟和字面量 |

## 游戏刻时长

游戏时间以 **tick（刻）** 为单位（20 刻 = 1 现实秒）。提供以下时长类型：

| 类型 | 定义 | 等价 |
|------|------|------|
| `game::ticks` | `duration<int64, ratio<1, 20>>` | 1 刻 = 50ms |
| `game::days` | 24000 刻 | 1 Minecraft 天 |
| `game::hours` | 1000 刻 | 1 Minecraft 小时 |
| `game::minutes` | ~16.67 刻 | 1 Minecraft 分钟 |
| `game::weeks` | 7 游戏天 | 1 Minecraft 周 |
| `game::months` | ~1/12 游戏年 | 1 Minecraft 月 |
| `game::years` | 365 游戏天 | 1 Minecraft 年 |

### 用户自定义字面量

```cpp
#include "ll/api/chrono/GameChrono.h"

using namespace ll::chrono_literals;

auto tenTicks   = 10_tick;
auto halfDay    = 12000_tick;
```

## 时钟

### GameTickClock

跟踪游戏刻的时钟。时间仅在游戏运行时推进。

```cpp
#include "ll/api/chrono/GameChrono.h"

auto now = ll::chrono::GameTickClock::now();
auto tp  = ll::chrono::GameTickClock::fromTick(100);
```

### ServerClock

跟踪服务器真实墙钟时间的时钟。

```cpp
auto serverNow = ll::chrono::ServerClock::now();
```

## 使用方法

### 测量游戏时间间隔

```cpp
#include "ll/api/chrono/GameChrono.h"

void onTick() {
    using namespace ll::chrono;
    static auto lastCheck = GameTickClock::now();

    auto elapsed = GameTickClock::now() - lastCheck;
    if (elapsed >= game::days{1}) {
        // 一个游戏日已过
        lastCheck = GameTickClock::now();
    }
}
```

### 时长之间的转换

```cpp
#include "ll/api/chrono/GameChrono.h"
#include <chrono>

using namespace ll::chrono;

// 将游戏刻转换为现实时间秒数
auto ticks = game::ticks{100};
auto realSeconds = std::chrono::duration_cast<std::chrono::seconds>(ticks); // 5 秒
```

## 相关模块

- [Thread（线程工具）](thread.zh.md) — `TickSyncSleep` 使用游戏时间类型
- [Coroutine（协程）](coro.zh.md) — `SleepAwaiter` 与时间类型配合使用
