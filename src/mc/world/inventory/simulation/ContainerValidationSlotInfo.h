#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk430c68;
    ::ll::UntypedStorage<8, 16> mUnkefa87f;
    ::ll::UntypedStorage<8, 16> mUnkab5713;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationSlotInfo& operator=(ContainerValidationSlotInfo const&);
    ContainerValidationSlotInfo(ContainerValidationSlotInfo const&);
    ContainerValidationSlotInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContainerValidationSlotInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
