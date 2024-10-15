#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDeprecatedComponentData_v1_20_40 {
public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_40();

public:
    // NOLINTBEGIN
    MCAPI ComponentItemDeprecatedComponentData_v1_20_40(struct ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCAPI ComponentItemDeprecatedComponentData_v1_20_40(struct ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCAPI struct ComponentItemDeprecatedComponentData_v1_20_40&
    operator=(struct ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCAPI struct ComponentItemDeprecatedComponentData_v1_20_40&
    operator=(struct ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCAPI ~ComponentItemDeprecatedComponentData_v1_20_40();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCAPI void* ctor$(struct ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCAPI void dtor$();

    // NOLINTEND
};
