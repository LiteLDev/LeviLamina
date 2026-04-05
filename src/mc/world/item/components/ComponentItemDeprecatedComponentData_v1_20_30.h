#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyOnConsumeTriggerItemComponentData.h"

struct ComponentItemDeprecatedComponentData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::optional<::LegacyOnConsumeTriggerItemComponentData>>
        legacyOnConsumeTriggerItemComponent;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_30(ComponentItemDeprecatedComponentData_v1_20_30 const&);
    ComponentItemDeprecatedComponentData_v1_20_30();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_30&
    operator=(::ComponentItemDeprecatedComponentData_v1_20_30 const&);
#endif

    MCAPI ~ComponentItemDeprecatedComponentData_v1_20_30();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
