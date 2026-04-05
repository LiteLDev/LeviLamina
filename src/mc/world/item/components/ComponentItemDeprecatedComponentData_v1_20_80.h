#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_50.h"
#include "mc/world/item/components/LegacyOnUseTriggerItemComponentData.h"

struct ComponentItemDeprecatedComponentData_v1_20_80 : public ::ComponentItemDeprecatedComponentData_v1_20_50 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::optional<::LegacyOnUseTriggerItemComponentData>> legacyOnUseTriggerItemComponent;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_80(ComponentItemDeprecatedComponentData_v1_20_80 const&);
    ComponentItemDeprecatedComponentData_v1_20_80();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_80();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemDeprecatedComponentData_v1_20_80(::ComponentItemDeprecatedComponentData_v1_20_80&&);

#ifdef LL_PLAT_C
    MCAPI ComponentItemDeprecatedComponentData_v1_20_80(::ComponentItemDeprecatedComponentData_v1_20_80 const&);
#endif

    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_80&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_80 const&);

    MCAPI ~ComponentItemDeprecatedComponentData_v1_20_80();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_80&&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_80 const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
