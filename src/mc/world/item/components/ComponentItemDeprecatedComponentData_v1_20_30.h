#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDeprecatedComponentData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnkeca522;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_30(ComponentItemDeprecatedComponentData_v1_20_30 const&);
    ComponentItemDeprecatedComponentData_v1_20_30();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemDeprecatedComponentData_v1_20_30(::ComponentItemDeprecatedComponentData_v1_20_30&&);

    MCNAPI ::ComponentItemDeprecatedComponentData_v1_20_30&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_30 const&);

    MCNAPI ~ComponentItemDeprecatedComponentData_v1_20_30();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_30&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
