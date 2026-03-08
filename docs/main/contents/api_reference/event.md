# Event

`ll/api/event/` · **Common / Server / Client**

## Overview

The Event module provides a publish-subscribe event system. It includes an event bus singleton, typed listeners with priority control, cancellable events, and a comprehensive set of built-in events for player actions, world changes, entities, server lifecycle, commands, and client-specific events.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/event/EventBus.h` | Singleton event dispatcher |
| `ll/api/event/Event.h` | Base event class |
| `ll/api/event/EventId.h` | Event type identification |
| `ll/api/event/Listener.h` | Typed event listener |
| `ll/api/event/ListenerBase.h` | Base listener with priority |
| `ll/api/event/Cancellable.h` | Cancellable event mixin |
| `ll/api/event/Emitter.h` | Event emitter base |
| `ll/api/event/DynamicListener.h` | Runtime listener creation |
| `ll/api/event/MultiListener.h` | Listen to multiple event types |

## Key Classes

### EventBus

Singleton event dispatcher. All event publishing and subscription goes through this.

```cpp
namespace ll::event {
class EventBus {
public:
    static EventBus& getInstance();

    // Publish an event
    template <class T> void publish(T&& event);
    template <class T> void publish(std::string_view modName, T&& event);

    // Add/remove listeners
    template <class T> bool addListener(std::shared_ptr<Listener<T>> const& listener);
    bool removeListener(ListenerPtr const& listener);
    template <class T> bool removeListener(ListenerPtr const& listener);

    // Convenience: create and add in one call
    template <class T, class L = Listener<T>, class... Args>
    auto emplaceListener(Args&&... args);

    // Query
    template <class T> size_t getListenerCount();
    bool hasEvent(EventIdView const& eventId) const;
    bool hasListener(ListenerId id) const;

    // Set emitter factory
    template <class T> bool setEventEmitter(FactoryFn fn, std::weak_ptr<mod::Mod> mod);
};
}
```

### Event

Abstract base class for all events.

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

Typed listener bound to a specific event type.

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

Mixin template to make an event cancellable.

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

## Built-in Events

### Player Events `[Common]`

| Event | Description | Cancellable |
|-------|-------------|:-----------:|
| `PlayerJoinEvent` | Player joins the server | No |
| `PlayerDisconnectEvent` | Player disconnects | No |
| `PlayerChatEvent` | Player sends a chat message | Yes |
| `PlayerAttackEvent` | Player attacks an entity | Yes |
| `PlayerDestroyBlockEvent` | Player destroys a block | Yes |
| `PlayerPlaceBlockEvent` | Player places a block | Yes |
| `PlayerInteractBlockEvent` | Player interacts with a block | Yes |
| `PlayerUseItemEvent` | Player uses an item | Yes |
| `PlayerSwingEvent` | Player swings arm | No |
| `PlayerJumpEvent` | Player jumps | No |
| `PlayerSneakEvent` | Player starts/stops sneaking | No |
| `PlayerSprintEvent` | Player starts/stops sprinting | No |
| `PlayerPickUpItemEvent` | Player picks up an item | Yes |
| `PlayerRespawnEvent` | Player respawns | No |
| `PlayerDieEvent` | Player dies | No |
| `PlayerChangePermEvent` | Player permission level changes | No |
| `PlayerAddExperienceEvent` | Player gains experience | No |

### Entity Events `[Common]`

| Event | Description | Cancellable |
|-------|-------------|:-----------:|
| `ActorHurtEvent` | An actor takes damage | Yes |
| `MobDieEvent` | A mob dies | No |

### World Events `[Common]`

| Event | Description | Cancellable |
|-------|-------------|:-----------:|
| `LevelTickEvent` | Each server tick | No |
| `SpawnMobEvent` | A mob spawns | Yes |
| `BlockChangedEvent` | A block changes | No |
| `FireSpreadEvent` | Fire spreads | Yes |

### Server Events `[Common]`

| Event | Description | Cancellable |
|-------|-------------|:-----------:|
| `ServerStartedEvent` | Server has started | No |
| `ServerStoppingEvent` | Server is stopping | No |

### Command Events `[Common]`

| Event | Description | Cancellable |
|-------|-------------|:-----------:|
| `ExecuteCommandEvent` | A command is executed | Yes |

### Service Events `[Common]`

| Event | Description | Cancellable |
|-------|-------------|:-----------:|
| `ServiceRegisterEvent` | A service is registered | No |
| `ServiceUnregisterEvent` | A service is unregistered | No |

### Client Events `[Client Only]`

| Event | Description | Cancellable |
|-------|-------------|:-----------:|
| `ClientJoinLevelEvent` | Client joins a level | No |
| `ClientExitLevelEvent` | Client exits a level | No |
| `ClientStartJoinLevelEvent` | Client starts joining a level | No |
| `ClientCancelJoinLevelEvent` | Client cancels level join | No |
| `KeyInputEvent` | Keyboard input | Yes |
| `MouseInputEvent` | Mouse input | Yes |
| `BeforeUIRenderEvent` | Before UI rendering | No |
| `AfterUIRenderEvent` | After UI rendering | No |

## Usage

### Listening to an Event

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/player/PlayerJoinEvent.h"

void setupListeners() {
    auto& bus = ll::event::EventBus::getInstance();

    auto listener = bus.emplaceListener<ll::event::PlayerJoinEvent>(
        [](ll::event::PlayerJoinEvent& event) {
            // Handle player join
        }
    );
}
```

### Listening with Priority

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/player/PlayerChatEvent.h"

void setupPriorityListener() {
    auto& bus = ll::event::EventBus::getInstance();

    bus.emplaceListener<ll::event::PlayerChatEvent>(
        [](ll::event::PlayerChatEvent& event) {
            // This runs before Normal priority listeners
        },
        ll::event::EventPriority::High
    );
}
```

### Cancelling an Event

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/player/PlayerChatEvent.h"

void blockBadWords() {
    auto& bus = ll::event::EventBus::getInstance();

    bus.emplaceListener<ll::event::PlayerChatEvent>(
        [](ll::event::PlayerChatEvent& event) {
            // Cancel the event to prevent the chat message
            event.cancel();
        }
    );
}
```

### Removing a Listener

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"

void setupAndRemove() {
    auto& bus = ll::event::EventBus::getInstance();

    auto listener = bus.emplaceListener<ll::event::ServerStartedEvent>(
        [](ll::event::ServerStartedEvent&) {
            // One-time setup
        }
    );

    // Later, remove the listener
    bus.removeListener(listener);
}
```

### Publishing a Custom Event

```cpp
#include "ll/api/event/Event.h"
#include "ll/api/event/EventBus.h"

// 1. Define the event (must be final)
class MyCustomEvent final : public ll::event::Event {
    std::string mData;
public:
    MyCustomEvent(std::string data) : mData(std::move(data)) {}
    std::string const& data() const { return mData; }
};

// 2. Publish it
void fireEvent() {
    MyCustomEvent event{"hello"};
    ll::event::EventBus::getInstance().publish(event);
}

// 3. Listen to it
void listenCustom() {
    ll::event::EventBus::getInstance().emplaceListener<MyCustomEvent>(
        [](MyCustomEvent& event) {
            // event.data() == "hello"
        }
    );
}
```

### MultiListener

Listen to multiple event types with a single callback:

```cpp
#include "ll/api/event/MultiListener.h"
#include "ll/api/event/player/PlayerJoinEvent.h"
#include "ll/api/event/player/PlayerDisconnectEvent.h"

void setupMulti() {
    auto listener = ll::event::MultiListener<
        ll::event::PlayerJoinEvent,
        ll::event::PlayerDisconnectEvent
    >::create([](auto&& event) {
        // Called for both join and disconnect
    });

    ll::event::EventBus::getInstance().addListener(listener);
}
```

## Platform Notes

- **Server events** (`ServerStartedEvent`, `ServerStoppingEvent`): Available on both server and client builds, but only fire on the server side.
- **Client events** (`ClientJoinLevelEvent`, `KeyInputEvent`, `MouseInputEvent`, render events): Only available in client builds (`src-client/ll/api/event/`).

## Related

- [How-to Guide: Events](../developer_guides/how_to_guides/event_guide.md) — Step-by-step tutorial
- [Input](input.md) — Client-only input event details
- [Service](service.md) — Service registration/unregistration events
