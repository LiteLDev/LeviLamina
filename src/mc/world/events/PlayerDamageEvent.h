#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

struct PlayerDamageEvent {
public:
    // prevent constructor by default
    PlayerDamageEvent& operator=(PlayerDamageEvent const&);
    PlayerDamageEvent(PlayerDamageEvent const&);
    PlayerDamageEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerDamageEvent(class WeakRef<class EntityContext>, std::unique_ptr<class ActorDamageSource>);

    MCAPI ~PlayerDamageEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
