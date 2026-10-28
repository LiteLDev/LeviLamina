#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/DurabilityThreshold.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_50 { struct DurabilitySensorItemComponent; }
// clang-format on

class DurabilitySensorItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DurabilityThreshold>> mDurabilityThresholds;
    // NOLINTEND

public:
    // prevent constructor by default
    DurabilitySensorItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DurabilitySensorItemComponent(::SharedTypes::v1_26_50::DurabilitySensorItemComponent data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_50::DurabilitySensorItemComponent data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
