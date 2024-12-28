#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
// clang-format on

class BeardingDescriptionCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk5237dc;
    ::ll::UntypedStorage<4, 4>  mUnkb4e738;
    ::ll::UntypedStorage<4, 4>  mUnk43021d;
    ::ll::UntypedStorage<4, 4>  mUnk814dbd;
    ::ll::UntypedStorage<4, 4>  mUnkafcd81;
    // NOLINTEND

public:
    // prevent constructor by default
    BeardingDescriptionCache& operator=(BeardingDescriptionCache const&);
    BeardingDescriptionCache(BeardingDescriptionCache const&);
    BeardingDescriptionCache();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeardingDescriptionCache(::BoundingBox const& bb, int deltaY);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BoundingBox const& bb, int deltaY);
    // NOLINTEND
};
