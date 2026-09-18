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

public:
    // prevent constructor by default
    DurabilitySensorItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DurabilitySensorItemComponent(::SharedTypes::Beta::DurabilitySensorItemComponent data);

    MCAPI explicit DurabilitySensorItemComponent(::SharedTypes::v1_21_10::DurabilitySensorItemComponent data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Beta::DurabilitySensorItemComponent data);

    MCAPI void* $ctor(::SharedTypes::v1_21_10::DurabilitySensorItemComponent data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
