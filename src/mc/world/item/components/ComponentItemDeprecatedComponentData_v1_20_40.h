#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_30.h"

struct ComponentItemDeprecatedComponentData_v1_20_40 : public ::ComponentItemDeprecatedComponentData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnkb3c915;
    ::ll::UntypedStorage<8, 272> mUnk2ba0ea;
    ::ll::UntypedStorage<8, 168> mUnk6d55ca;
    ::ll::UntypedStorage<8, 272> mUnk991399;
    ::ll::UntypedStorage<8, 272> mUnk849a51;
    ::ll::UntypedStorage<8, 272> mUnkdfb65b;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_40();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemDeprecatedComponentData_v1_20_40(::ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCAPI ComponentItemDeprecatedComponentData_v1_20_40(::ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_40&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_40& operator=(::ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCAPI ~ComponentItemDeprecatedComponentData_v1_20_40();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_40&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
