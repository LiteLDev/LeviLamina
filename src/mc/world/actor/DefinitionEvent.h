#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DefinitionEvent {
public:
    // prevent constructor by default
    DefinitionEvent();

public:
    // NOLINTBEGIN
    MCAPI DefinitionEvent(class DefinitionEvent&&);

    MCAPI DefinitionEvent(class DefinitionEvent const&);

    MCAPI void evaluateEvent(class RenderParams& params, std::vector<struct DefinitionModifier>& modifications) const;

    MCAPI class DefinitionEvent& operator=(class DefinitionEvent const&);

    MCAPI ~DefinitionEvent();

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
