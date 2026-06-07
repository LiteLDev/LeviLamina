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
    ::ll::TypedStorage<8, 24, ::std::vector<::InsideBlockEventMap>> mBlockList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::InsideBlockEventMap* _findBlockMap(::Block const& block);

    MCFOLD ::InsideBlockEventMap const* _findBlockMapConst(::Block const& block) const;

    MCFOLD ::std::vector<::InsideBlockEventMap> const& getBlockList() const;

    MCAPI bool isTrackedBlock(::Block const& block) const;

    MCAPI void resetBlocksInsideState();

    MCAPI void setInsideBlock(::Block const& block, bool isInside);
    // NOLINTEND
};
