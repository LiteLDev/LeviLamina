#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"

struct ContainerValidationSlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName> mContainerEnumName;
    ::ll::TypedStorage<4, 4, int>                  mSlotIndex;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerValidationSlotData();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ContainerValidationSlotData(::std::string containerEnumNameString, int slotIndex);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string containerEnumNameString, int slotIndex);
#endif
    // NOLINTEND
};
