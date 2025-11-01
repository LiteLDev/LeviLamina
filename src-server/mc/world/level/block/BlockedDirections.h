#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"

struct BlockedDirections {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mStopsFlowDirectionsMask;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void facingVectorToMask(::BlockedDirections& instance, ::std::vector<::SharedTypes::Facing> const& faces);
    // NOLINTEND

};
