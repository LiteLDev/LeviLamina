#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class BarrierBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BarrierBlock() /*override*/ = default;

    virtual bool canConnect(::Block const&, uchar, ::Block const&) const /*override*/;

    virtual float getShadeBrightness(::Block const& block) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canConnect(::Block const&, uchar, ::Block const&) const;

    MCFOLD float $getShadeBrightness(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
