#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiggerBlockDefinitionTrigger {
public:
    // prevent constructor by default
    DiggerBlockDefinitionTrigger();

public:
    // NOLINTBEGIN
    MCAPI DiggerBlockDefinitionTrigger(struct DiggerBlockDefinitionTrigger const&);

    MCAPI struct DiggerBlockDefinitionTrigger& operator=(struct DiggerBlockDefinitionTrigger const&);

    MCAPI ~DiggerBlockDefinitionTrigger();

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
