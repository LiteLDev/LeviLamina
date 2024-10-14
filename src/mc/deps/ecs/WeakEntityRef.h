#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

class WeakEntityRef {
public:
    // prevent constructor by default
    WeakEntityRef& operator=(WeakEntityRef const&);
    WeakEntityRef(WeakEntityRef const&);
    WeakEntityRef();

public:
    // NOLINTBEGIN
    MCAPI explicit WeakEntityRef(class WeakRef<class EntityContext> entityRef);

    MCAPI bool operator!=(class WeakEntityRef entityRef) const;

    MCAPI class WeakEntityRef& operator=(class WeakEntityRef&&);

    MCAPI bool operator==(class WeakEntityRef entityRef) const;

    MCAPI bool operator==(class WeakRef<class EntityContext> entityRef) const;

    MCAPI ~WeakEntityRef();

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
