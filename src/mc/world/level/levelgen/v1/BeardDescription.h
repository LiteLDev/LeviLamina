#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/BeardingDescriptionCache.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct BeardKernel;
// clang-format on

class BeardDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::BeardingDescriptionCache const> mCache;
    ::ll::TypedStorage<8, 8, ::BeardKernel const&>              mBeardKernel;
    // NOLINTEND

public:
    // prevent constructor by default
    BeardDescription& operator=(BeardDescription const&);
    BeardDescription(BeardDescription const&);
    BeardDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeardDescription(::BeardingDescriptionCache cache, ::BeardKernel const& beardKernel);

    MCAPI float calculateContribution(::BlockPos const& pos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BeardingDescriptionCache cache, ::BeardKernel const& beardKernel);
    // NOLINTEND
};
