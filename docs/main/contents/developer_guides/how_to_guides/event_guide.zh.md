# 事件指南

## 介绍

LeviLamina内置了一套事件系统，提供简单事件和供Mod发布自己的事件。  
所有的内置事件都被放在了`ll/api/event/`目录下，并且被分类并放置在`command`,`entity`,`player`,`world`等子目录下。

## 监听事件

### 示例: 服务端启动完成事件

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"

void ListenEvents() {
    using namespace ll::event;
    EventBus& bus = EventBus::getInstance();
    bus.emplaceListener<ServerStartedEvent>([](ServerStartedEvent& event) {
        // 服务端启动完成后要执行的代码
    }
}
```

## 发布事件

### 示例: 服务端启动完成事件

- 创建一个名为`ServerStartedEvent.h`的头文件，然后在其中定义`ServerStartedEvent`类，该类继承自`ll::event::Event`
   类。

!!! tip "关于可取消的事件"
    如果你希望你的事件是可取消的，就继承`ll::event::Cancellable<ll::event::Event>`类。

- 添加该事件的类成员和获取方法，并通过`__declspec(dllexport)`导出方法。

!!! tip "关于LLAPI"
    LeviLamina中的`LLAPI`宏本质是通过在`xmake.lua`中使用`add_defines("LL_EXPORT")`预定义`LL_EXPORT`
    以实现在LeviLamina编译时`LLAPI`表示`__declspec(dllexport)`，在其它Mod引用时变为`__declspec(dllimport)`
    以供其它Mod导入该方法，以下是一个实现这样的宏的简单的示例，在实际使用中你需要将`MOD_EXPORT`和`MODAPI`
    改名以避免与其它Mod的宏产生冲突:

```cpp
#ifdef MOD_EXPORT
#define MODAPI __declspec(dllexport)
#else
#define MODAPI __declspec(dllimport)
#endif
```

这样，你只需要在你的Mod的`xmake.lua`中添加`add_defines("MOD_EXPORT")`，然后在需要被导出的方法前面添加`MODAPI`
即可导出你的Mod的方法。  
如果你希望其它Mod能够在不链接你的Mod的情况下使用你的Mod提供的事件，可以直接将事件的成员设为
`public`，或直接在头文件中实现获取方法。另外，最好在事件中声明并实现一个`serialize`方法，以方便在控制台中输出该事件的信息。

```cpp
#pragma once

#include "ll/api/event/Event.h"

#include "mc/server/ServerInstance.h"

namespace ll::event::inline server {
class ServerStartedEvent final : public Event {
    ServerInstance& mInstance;

public:
    constexpr explicit ServerStartedEvent(ServerInstance& server) : mInstance(server) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ServerInstance& server() const;
};
} // namespace ll::event::inline server
```

- 在`ServerStartedEvent.cpp`中实现`ServerStartedEvent`类的`serialize`,`server`方法。并且在事件应该被触发时调用
   `EventBus::publish`方法。

!!! tip "关于可取消的事件"
    如果你的事件是可取消的，你还需要通过判断`Event::isCancelled`方法的返回值来决定是否执行取消该事件的操作。示例如下:

```cpp
LL_TYPE_INSTANCE_HOOK(
    PlayerAttackEventHook,
    HookPriority::Normal,
    Player,
    &Player::_attack,
    bool,
    Actor&                                         ac,
    ::SharedTypes::Legacy::ActorDamageCause const& cause,
    bool                                           doPredictiveSound
) {
    auto ev = PlayerAttackEvent(*this, ac, cause);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(ac, cause, doPredictiveSound);
}
```

- 在源文件中定义定义一个类型为`std::unique_ptr<EmitterBase>`的静态函数和一个继承自
   `Emitter<emitterFactory, ServerStartedEvent>`的类，在此我们将其称为`ServerStartedEventEmitter`，用于通过`HookRegistrar`
   注册Hook。
- 在该类的后面实现类型为`std::unique_ptr<EmitterBase>`的静态函数，返回使用`std::make_unique`构造的
   `std::unique_ptr<ServerStartedEventEmitter>`。

```cpp
#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/gameplayhandlers/ServerInstanceEventHandler.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

namespace ll::event::inline server {

void ServerStartedEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["server"] = serializeRefObj(server());
}

ServerInstance& ServerStartedEvent::server() const { return mInstance; }

LL_TYPE_INSTANCE_HOOK(
    ServerStartedEventHook,
    ll::memory::HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerInitializeEnd,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    EventBus::getInstance().publish(ServerStartedEvent(ins));
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ServerStartedEventEmitter : public Emitter<emitterFactory, ServerStartedEvent> {
    memory::HookRegistrar<ServerStartedEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ServerStartedEventEmitter>(); }
} // namespace ll::event::inline server
```
