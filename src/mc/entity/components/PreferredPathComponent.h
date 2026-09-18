#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct BlockSet;
// clang-format on

struct PreferredPathComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mDefaultBlockCost;
    ::ll::TypedStorage<4, 4, float>                      mJumpCost;
    ::ll::TypedStorage<4, 4, int>                        mMaxFallBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSet>> mPreferredPathGroup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initFromDefinition(::Actor& owner);
    // NOLINTEND
};
