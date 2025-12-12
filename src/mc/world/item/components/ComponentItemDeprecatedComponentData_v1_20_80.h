#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_50.h"

struct ComponentItemDeprecatedComponentData_v1_20_80 : public ::ComponentItemDeprecatedComponentData_v1_20_50 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnka65314;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_80(ComponentItemDeprecatedComponentData_v1_20_80 const&);
    ComponentItemDeprecatedComponentData_v1_20_80();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemDeprecatedComponentData_v1_20_80(::ComponentItemDeprecatedComponentData_v1_20_80&&);

    MCNAPI ::ComponentItemDeprecatedComponentData_v1_20_80&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_80&&);

    MCNAPI ::ComponentItemDeprecatedComponentData_v1_20_80&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_80 const&);

    MCNAPI ~ComponentItemDeprecatedComponentData_v1_20_80();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_80&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
