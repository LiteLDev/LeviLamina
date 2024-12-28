#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_40.h"

struct ComponentItemDeprecatedComponentData_v1_20_50 : public ::ComponentItemDeprecatedComponentData_v1_20_40 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnka82b15;
    ::ll::UntypedStorage<8, 296> mUnke61a10;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_50();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemDeprecatedComponentData_v1_20_50(::ComponentItemDeprecatedComponentData_v1_20_50 const&);

    MCAPI ComponentItemDeprecatedComponentData_v1_20_50(::ComponentItemDeprecatedComponentData_v1_20_50&&);

    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_50&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_50 const&);

    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_50& operator=(::ComponentItemDeprecatedComponentData_v1_20_50&&);

    MCAPI ~ComponentItemDeprecatedComponentData_v1_20_50();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_50 const&);

    MCAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_50&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
