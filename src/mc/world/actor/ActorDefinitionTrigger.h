#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionTrigger {
public:
    // prevent constructor by default
    ActorDefinitionTrigger(ActorDefinitionTrigger const&);
    ActorDefinitionTrigger();

public:
    // NOLINTBEGIN
    MCAPI ActorDefinitionTrigger(class ActorDefinitionTrigger&&);

    MCAPI bool canTrigger(class Actor const& entity, class VariantParameterList const& list) const;

    MCAPI class ActorDefinitionTrigger& operator=(class ActorDefinitionTrigger&&);

    MCAPI class ActorDefinitionTrigger& operator=(class ActorDefinitionTrigger const&);

    MCAPI ~ActorDefinitionTrigger();

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
