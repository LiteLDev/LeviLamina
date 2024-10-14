#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScaleByAgeComponent {
public:
    // prevent constructor by default
    ScaleByAgeComponent& operator=(ScaleByAgeComponent const&);
    ScaleByAgeComponent(ScaleByAgeComponent const&);

public:
    // NOLINTBEGIN
    MCAPI ScaleByAgeComponent();

    MCAPI void _initializeScale(class EntityContext& entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
