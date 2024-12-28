#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FullContainerName;
// clang-format on

struct AllowedAnywhereConsume {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk26126c;
    ::ll::UntypedStorage<1, 1>  mUnka50573;
    ::ll::UntypedStorage<1, 1>  mUnkfb169f;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowedAnywhereConsume& operator=(AllowedAnywhereConsume const&);
    AllowedAnywhereConsume(AllowedAnywhereConsume const&);
    AllowedAnywhereConsume();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AllowedAnywhereConsume(::FullContainerName const& openContainerNetId, uchar minSlot, uchar maxSlot);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FullContainerName const& openContainerNetId, uchar minSlot, uchar maxSlot);
    // NOLINTEND
};
