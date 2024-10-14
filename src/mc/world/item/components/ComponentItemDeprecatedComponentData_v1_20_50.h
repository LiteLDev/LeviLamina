#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDeprecatedComponentData_v1_20_50 {
public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_50();

public:
    // NOLINTBEGIN
    MCAPI ComponentItemDeprecatedComponentData_v1_20_50(struct ComponentItemDeprecatedComponentData_v1_20_50&&);

    MCAPI ComponentItemDeprecatedComponentData_v1_20_50(struct ComponentItemDeprecatedComponentData_v1_20_50 const&);

    MCAPI struct ComponentItemDeprecatedComponentData_v1_20_50&
    operator=(struct ComponentItemDeprecatedComponentData_v1_20_50&&);

    MCAPI struct ComponentItemDeprecatedComponentData_v1_20_50&
    operator=(struct ComponentItemDeprecatedComponentData_v1_20_50 const&);

    MCAPI ~ComponentItemDeprecatedComponentData_v1_20_50();

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
