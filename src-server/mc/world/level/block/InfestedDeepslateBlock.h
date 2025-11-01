#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarInfestedBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class InfestedDeepslateBlock : public ::RotatedPillarInfestedBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 129
    virtual ::Block const* tryGetUninfested(::Block const& block) const /*override*/;

    // vIndex: 0
    virtual ~InfestedDeepslateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $tryGetUninfested(::Block const& block) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
