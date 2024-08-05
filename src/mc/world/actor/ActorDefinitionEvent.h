#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionEvent {
public:
    // prevent constructor by default
    ActorDefinitionEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent&&);

    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent const&);

    MCAPI class ActorDefinitionEvent& operator=(class ActorDefinitionEvent const&);

    MCAPI ~ActorDefinitionEvent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _evaluateGroups(
        class Actor&                                 entity,
        std::vector<struct ActorDefinitionModifier>& modifications,
        class VariantParameterList const&            list
    ) const;

    // NOLINTEND
};
