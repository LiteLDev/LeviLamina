#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionModifier {
public:
    // prevent constructor by default
    ActorDefinitionModifier();

public:
    // NOLINTBEGIN
    MCAPI ActorDefinitionModifier(struct ActorDefinitionModifier const&);

    MCAPI struct ActorDefinitionModifier& operator=(struct ActorDefinitionModifier&&);

    MCAPI struct ActorDefinitionModifier& operator=(struct ActorDefinitionModifier const&);

    MCAPI ~ActorDefinitionModifier();

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
