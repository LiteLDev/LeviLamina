#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/BeardingDescriptionCache.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct BeardKernel;
// clang-format on

class BeardAndShaverDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::BeardingDescriptionCache const> mCache;
    ::ll::TypedStorage<8, 8, ::BeardKernel const&>              mBeardKernel;
    ::ll::TypedStorage<4, 4, float const>                       mMinBeardWidth;
    ::ll::TypedStorage<4, 4, float const>                       mMaxBeardWidth;
    // NOLINTEND

public:
    // prevent constructor by default
    BeardAndShaverDescription& operator=(BeardAndShaverDescription const&);
    BeardAndShaverDescription(BeardAndShaverDescription const&);
    BeardAndShaverDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float calculateContribution(::BlockPos const& pos) const;
    // NOLINTEND
};
