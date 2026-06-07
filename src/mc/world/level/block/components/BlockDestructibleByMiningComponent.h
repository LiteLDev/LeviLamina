#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
struct ItemSpecificSpeed;
// clang-format on

struct BlockDestructibleByMiningComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                               mSecondsToDestroy;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemSpecificSpeed>> mItemSpecificSpeeds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getDestroySpeed(::ItemStackBase const& item) const;
    // NOLINTEND
};
