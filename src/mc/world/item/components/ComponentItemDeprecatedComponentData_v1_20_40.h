#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_30.h"

struct ComponentItemDeprecatedComponentData_v1_20_40 : public ::ComponentItemDeprecatedComponentData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>  mUnkb3c915;
    ::ll::UntypedStorage<8, 72>  mUnk2ba0ea;
    ::ll::UntypedStorage<8, 168> mUnk6d55ca;
    ::ll::UntypedStorage<8, 72>  mUnk991399;
    ::ll::UntypedStorage<8, 72>  mUnk849a51;
    ::ll::UntypedStorage<8, 72>  mUnkdfb65b;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_40();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemDeprecatedComponentData_v1_20_40(::ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCNAPI ComponentItemDeprecatedComponentData_v1_20_40(::ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCNAPI ::ComponentItemDeprecatedComponentData_v1_20_40&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCNAPI ::ComponentItemDeprecatedComponentData_v1_20_40&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCNAPI ~ComponentItemDeprecatedComponentData_v1_20_40();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCNAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_40 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
