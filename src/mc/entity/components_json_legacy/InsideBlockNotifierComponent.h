#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class InsideBlockEventMap;
// clang-format on

class InsideBlockNotifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7d1ee6;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockNotifierComponent& operator=(InsideBlockNotifierComponent const&);
    InsideBlockNotifierComponent(InsideBlockNotifierComponent const&);
    InsideBlockNotifierComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::InsideBlockEventMap> const& getBlockList() const;

    MCAPI bool isTrackedBlock(::Block const& block) const;

    MCAPI void resetBlocksInsideState();

    MCAPI void setInsideBlock(::Block const& block, bool isInside);
    // NOLINTEND
};
