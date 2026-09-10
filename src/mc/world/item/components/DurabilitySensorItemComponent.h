#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/DurabilityThreshold.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Beta { struct DurabilitySensorItemComponent; }
namespace SharedTypes::v1_21_10 { struct DurabilitySensorItemComponent; }
// clang-format on

class DurabilitySensorItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DurabilityThreshold>> mDurabilityThresholds;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DurabilitySensorItemComponent();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI explicit DurabilitySensorItemComponent(::SharedTypes::Beta::DurabilitySensorItemComponent data);

    MCAPI explicit DurabilitySensorItemComponent(::SharedTypes::v1_21_10::DurabilitySensorItemComponent data);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::SharedTypes::Beta::DurabilitySensorItemComponent data);

    MCAPI void* $ctor(::SharedTypes::v1_21_10::DurabilitySensorItemComponent data);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
