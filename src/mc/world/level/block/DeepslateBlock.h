#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class DeepslateBlock : public ::RotatedPillarBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBeOriginalSurface(bool) const /*override*/;

    virtual ::Block const* tryGetInfested(::Block const& block) const /*override*/;

    virtual ~DeepslateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canBeOriginalSurface(bool) const;

    MCAPI ::Block const* $tryGetInfested(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
