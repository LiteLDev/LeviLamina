#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ContainerValidationSlotData const& AUTOPLACE();
    // NOLINTEND
};
