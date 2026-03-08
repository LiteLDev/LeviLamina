# Event（事件系统）

`ll/api/event/` · **通用 / 服务端 / 客户端**

## 概述

Event 模块提供了发布-订阅事件系统。包括事件总线单例、带优先级控制的类型化监听器、可取消事件，以及涵盖玩家操作、世界变化、实体、服务器生命周期、命令和客户端特定事件的全面内置事件集合。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/event/EventBus.h` | 事件总线单例 |
| `ll/api/event/Event.h` | 事件基类 |
| `ll/api/event/EventId.h` | 事件类型标识 |
| `ll/api/event/Listener.h` | 类型化事件监听器 |
| `ll/api/event/ListenerBase.h` | 带优先级的监听器基类 |
| `ll/api/event/Cancellable.h` | 可取消事件混入 |
| `ll/api/event/Emitter.h` | 事件发射器基类 |
| `ll/api/event/DynamicListener.h` | 运行时监听器创建 |
| `ll/api/event/MultiListener.h` | 监听多种事件类型 |

## 核心类

### EventBus

事件总线单例。所有事件的发布和订阅都通过它进行。

```cpp
namespace ll::event {
class EventBus {
public:
    static EventBus& getInstance();

    // 发布事件
    template <class T> void publish(T&& event);
    template <class T> void publish(std::string_view modName, T&& event);

    // 添加/移除监听器
    template <class T> bool addListener(std::shared_ptr<Listener<T>> const& listener);
    bool removeListener(ListenerPtr const& listener);
    template <class T> bool removeListener(ListenerPtr const& listener);

    // 便捷方法：创建并添加
    template <class T, class L = Listener<T>, class... Args>
    auto emplaceListener(Args&&... args);

    // 查询
    template <class T> size_t getListenerCount();
    bool hasEvent(EventIdView const& eventId) const;
    bool hasListener(ListenerId id) const;

    // 设置发射器工厂
    template <class T> bool setEventEmitter(FactoryFn fn, std::weak_ptr<mod::Mod> mod);
};
}
```

### Event

所有事件的抽象基类。

```cpp
namespace ll::event {
class Event {
public:
    virtual ~Event();
    virtual void serialize(CompoundTag&) const;
    virtual void deserialize(CompoundTag const&);
    virtual EventId getId() const;
};
}
```

### Listener\<T\>

绑定到特定事件类型的类型化监听器。

```cpp
namespace ll::event {
template <class T>
class Listener : public ListenerBase {
public:
    using event_type  = T;
    using callback_fn = std::function<void(event_type&)>;

    explicit Listener(callback_fn fn, EventPriority priority = EventPriority::Normal,
                      std::weak_ptr<mod::Mod> mod = mod::NativeMod::current());

    static std::shared_ptr<Listener> create(callback_fn fn, EventPriority priority = EventPriority::Normal,
                                             std::weak_ptr<mod::Mod> mod = mod::NativeMod::current());
};
}
```

### EventPriority

```cpp
enum class EventPriority {
    Highest = 0,
    High    = 100,
    Normal  = 200,
    Low     = 300,
    Lowest  = 400,
};
```

### Cancellable\<T\>

使事件可取消的混入模板。

```cpp
namespace ll::event {
template <class T>
class Cancellable : public T {
public:
    bool isCancelled();
    void setCancelled(bool cancelled);
    void cancel();
};
}
```

## 内置事件

### 玩家事件 `[通用]`

| 事件 | 说明 | 可取消 |
|------|------|:------:|
| `PlayerJoinEvent` | 玩家加入服务器 | 否 |
| `PlayerDisconnectEvent` | 玩家断开连接 | 否 |
| `PlayerChatEvent` | 玩家发送聊天消息 | 是 |
| `PlayerAttackEvent` | 玩家攻击实体 | 是 |
| `PlayerDestroyBlockEvent` | 玩家破坏方块 | 是 |
| `PlayerPlaceBlockEvent` | 玩家放置方块 | 是 |
| `PlayerInteractBlockEvent` | 玩家与方块交互 | 是 |
| `PlayerUseItemEvent` | 玩家使用物品 | 是 |
| `PlayerSwingEvent` | 玩家挥手 | 否 |
| `PlayerJumpEvent` | 玩家跳跃 | 否 |
| `PlayerSneakEvent` | 玩家开始/停止潜行 | 否 |
| `PlayerSprintEvent` | 玩家开始/停止疾跑 | 否 |
| `PlayerPickUpItemEvent` | 玩家拾取物品 | 是 |
| `PlayerRespawnEvent` | 玩家重生 | 否 |
| `PlayerDieEvent` | 玩家死亡 | 否 |
| `PlayerChangePermEvent` | 玩家权限等级变更 | 否 |
| `PlayerAddExperienceEvent` | 玩家获得经验值 | 否 |

### 实体事件 `[通用]`

| 事件 | 说明 | 可取消 |
|------|------|:------:|
| `ActorHurtEvent` | 实体受到伤害 | 是 |
| `MobDieEvent` | 生物死亡 | 否 |

### 世界事件 `[通用]`

| 事件 | 说明 | 可取消 |
|------|------|:------:|
| `LevelTickEvent` | 每个服务器刻 | 否 |
| `SpawnMobEvent` | 生物生成 | 是 |
| `BlockChangedEvent` | 方块变化 | 否 |
| `FireSpreadEvent` | 火焰蔓延 | 是 |

### 服务器事件 `[通用]`

| 事件 | 说明 | 可取消 |
|------|------|:------:|
| `ServerStartedEvent` | 服务器已启动 | 否 |
| `ServerStoppingEvent` | 服务器正在停止 | 否 |

### 命令事件 `[通用]`

| 事件 | 说明 | 可取消 |
|------|------|:------:|
| `ExecuteCommandEvent` | 执行命令 | 是 |

### 服务事件 `[通用]`

| 事件 | 说明 | 可取消 |
|------|------|:------:|
| `ServiceRegisterEvent` | 服务被注册 | 否 |
| `ServiceUnregisterEvent` | 服务被注销 | 否 |

### 客户端事件 `[仅客户端]`

| 事件 | 说明 | 可取消 |
|------|------|:------:|
| `ClientJoinLevelEvent` | 客户端加入关卡 | 否 |
| `ClientExitLevelEvent` | 客户端退出关卡 | 否 |
| `ClientStartJoinLevelEvent` | 客户端开始加入关卡 | 否 |
| `ClientCancelJoinLevelEvent` | 客户端取消加入关卡 | 否 |
| `KeyInputEvent` | 键盘输入 | 是 |
| `MouseInputEvent` | 鼠标输入 | 是 |
| `BeforeUIRenderEvent` | UI 渲染之前 | 否 |
| `AfterUIRenderEvent` | UI 渲染之后 | 否 |

## 使用方法

### 监听事件

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/player/PlayerJoinEvent.h"

void setupListeners() {
    auto& bus = ll::event::EventBus::getInstance();

    auto listener = bus.emplaceListener<ll::event::PlayerJoinEvent>(
        [](ll::event::PlayerJoinEvent& event) {
            // 处理玩家加入
        }
    );
}
```

### 带优先级监听

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/player/PlayerChatEvent.h"

void setupPriorityListener() {
    auto& bus = ll::event::EventBus::getInstance();

    bus.emplaceListener<ll::event::PlayerChatEvent>(
        [](ll::event::PlayerChatEvent& event) {
            // 在 Normal 优先级的监听器之前执行
        },
        ll::event::EventPriority::High
    );
}
```

### 取消事件

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/player/PlayerChatEvent.h"

void blockBadWords() {
    auto& bus = ll::event::EventBus::getInstance();

    bus.emplaceListener<ll::event::PlayerChatEvent>(
        [](ll::event::PlayerChatEvent& event) {
            // 取消事件以阻止聊天消息
            event.cancel();
        }
    );
}
```

### 移除监听器

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"

void setupAndRemove() {
    auto& bus = ll::event::EventBus::getInstance();

    auto listener = bus.emplaceListener<ll::event::ServerStartedEvent>(
        [](ll::event::ServerStartedEvent&) {
            // 一次性设置
        }
    );

    // 稍后，移除监听器
    bus.removeListener(listener);
}
```

### 发布自定义事件

```cpp
#include "ll/api/event/Event.h"
#include "ll/api/event/EventBus.h"

// 1. 定义事件（必须是 final）
class MyCustomEvent final : public ll::event::Event {
    std::string mData;
public:
    MyCustomEvent(std::string data) : mData(std::move(data)) {}
    std::string const& data() const { return mData; }
};

// 2. 发布
void fireEvent() {
    MyCustomEvent event{"hello"};
    ll::event::EventBus::getInstance().publish(event);
}

// 3. 监听
void listenCustom() {
    ll::event::EventBus::getInstance().emplaceListener<MyCustomEvent>(
        [](MyCustomEvent& event) {
            // event.data() == "hello"
        }
    );
}
```

### MultiListener

用单个回调监听多种事件类型：

```cpp
#include "ll/api/event/MultiListener.h"
#include "ll/api/event/player/PlayerJoinEvent.h"
#include "ll/api/event/player/PlayerDisconnectEvent.h"

void setupMulti() {
    auto listener = ll::event::MultiListener<
        ll::event::PlayerJoinEvent,
        ll::event::PlayerDisconnectEvent
    >::create([](auto&& event) {
        // 对加入和断开连接都会调用
    });

    ll::event::EventBus::getInstance().addListener(listener);
}
```

## 平台说明

- **服务器事件**（`ServerStartedEvent`、`ServerStoppingEvent`）：在服务端和客户端构建中都可用，但仅在服务端触发。
- **客户端事件**（`ClientJoinLevelEvent`、`KeyInputEvent`、`MouseInputEvent`、渲染事件）：仅在客户端构建中可用（`src-client/ll/api/event/`）。

## 相关模块

- [操作指南：事件](../developer_guides/how_to_guides/event_guide.md) — 分步教程
- [Input（输入系统）](input.zh.md) — 客户端输入事件详情
- [Service（服务系统）](service.zh.md) — 服务注册/注销事件
