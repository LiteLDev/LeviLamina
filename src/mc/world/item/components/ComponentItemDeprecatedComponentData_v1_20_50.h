#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_40.h"
#include "mc/world/item/components/LegacyOnCompleteTriggerItemComponentData.h"
#include "mc/world/item/components/LegacyOnDigTriggerItemComponentData.h"

struct ComponentItemDeprecatedComponentData_v1_20_50 : public ::ComponentItemDeprecatedComponentData_v1_20_40 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::optional<::LegacyOnCompleteTriggerItemComponentData>>
        legacyOnCompleteTriggerItemComponent;
    ::ll::TypedStorage<8, 96, ::std::optional<::LegacyOnDigTriggerItemComponentData>> legacyOnDigTriggerItemComponent;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_50& operator=(ComponentItemDeprecatedComponentData_v1_20_50 const&);
    ComponentItemDeprecatedComponentData_v1_20_50(ComponentItemDeprecatedComponentData_v1_20_50 const&);
    ComponentItemDeprecatedComponentData_v1_20_50();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_50(ComponentItemDeprecatedComponentData_v1_20_50 const&);
    ComponentItemDeprecatedComponentData_v1_20_50();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemDeprecatedComponentData_v1_20_50(::ComponentItemDeprecatedComponentData_v1_20_50&&);

    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_50& operator=(::ComponentItemDeprecatedComponentData_v1_20_50&&);

#ifdef LL_PLAT_C
    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_50&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_50 const&);
#endif

    MCAPI ~ComponentItemDeprecatedComponentData_v1_20_50();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_50&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
