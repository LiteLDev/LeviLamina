#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FullContainerName;
// clang-format on

struct ContainerValidationSlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb5d9ba;
    ::ll::UntypedStorage<4, 4>  mUnk1caff5;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationSlotData& operator=(ContainerValidationSlotData const&);
    ContainerValidationSlotData(ContainerValidationSlotData const&);
    ContainerValidationSlotData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerValidationSlotData(::FullContainerName const& container, int slotIndex);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ContainerValidationSlotData const& AUTOPLACE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FullContainerName const& container, int slotIndex);
    // NOLINTEND
};
