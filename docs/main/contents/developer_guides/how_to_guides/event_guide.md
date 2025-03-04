# Event Guide

## Introduction

LeviLamina includes a built-in event system that provides simple events as well as a way for Mods to publish their own events.  
All built-in events are placed in the `ll/api/event/` directory and are categorized into subdirectories such as `command`, `entity`, `player`, `world`, etc.

## Listening to Events

### Example: Server Started Event

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"

void ListenEvents() {
    using namespace ll::event;
    EventBus& bus = EventBus::getInstance();
    bus.emplaceListener<ServerStartedEvent>([](ServerStartedEvent& event) {
        // Code to execute after the server has started
    }
}
```

## Publishing Events

### Example: Server Started Event

- Create a header file named `ServerStartedEvent.h` and define the `ServerStartedEvent` class in it, which inherits from the `ll::event::Event` class.

!!! tip "About Cancellable Events"  
    If you want your event to be cancellable, inherit from the `ll::event::Cancellable<ll::event::Event>` class.

- Add class members and accessor methods for the event, and export methods using `__declspec(dllexport)`.

!!! tip "About LLAPI"  
    In LeviLamina, macros such as `LLAPI` essentially work by predefining `LL_EXPORT` using `add_defines("LL_EXPORT")` in `xmake.lua`. This ensures that methods are exported during LeviLamina compilation and become `__declspec(dllimport)` when referenced by other Mods, allowing them to import the methods. Below is a simple example of such a macro:

```cpp
#ifdef MOD_EXPORT
#define MODAPI __declspec(dllexport)
#else
#define MODAPI __declspec(dllimport)
#endif
```

This way, you only need to add `add_defines("MOD_EXPORT")` in your Mod's `xmake.lua` to export your Mod's methods.  
If you want other Mods to use the events provided by your Mod without linking to your Mod, you can set the event's members to `public` or simply implement accessor methods in the header file. Additionally, it is recommended to declare and implement a `serialize` method in the event to facilitate outputting event information in the console.

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

- In `ServerStartedEvent.cpp`, implement the `serialize` and `server` methods for the `ServerStartedEvent` class. Also, call the `EventBus::publish` method when the event should be triggered.

!!! tip "About Cancellable Events"  
    If your event is cancellable, you also need to check the return value of `Event::isCancelled` to determine whether to cancel the event. For example:

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

- In the source file, define a static function returning a `std::unique_ptr<EmitterBase>` and a class that inherits from `Emitter<emitterFactory, ServerStartedEvent>`, which we will call `ServerStartedEventEmitter`. This class is used to register the hook via the `HookRegistrar`.

- After the class, implement the static function returning a `std::unique_ptr<EmitterBase>`, which returns a `std::unique_ptr<ServerStartedEventEmitter>` constructed using `std::make_unique`.

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