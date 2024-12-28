#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class TextboxTextSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    TextboxTextSystem& operator=(TextboxTextSystem const&);
    TextboxTextSystem(TextboxTextSystem const&);
    TextboxTextSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 1
    virtual void registerEvents(::entt::dispatcher& dispatcher) /*override*/;

    // vIndex: 0
    virtual ~TextboxTextSystem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);

    MCAPI void $registerEvents(::entt::dispatcher& dispatcher);
    // NOLINTEND
};
